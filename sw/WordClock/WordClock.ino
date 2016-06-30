/* 
Author: Iain Chalmers
Date: 1st July 2015

This software is part of by WordClock2.0 final project for FabAcademy 2015.
It's supposed to be run on the ESP8266 based control board I designed.
You can find details on my class webpage.

    http://fabacademy.org/archives/2015/eu/students/chalmers.iain/tag/final-project.html
    
It requires the following additional libraries.

  * aRest: https://github.com/marcoschwartz/aREST
  * NeoPixelBus: https://github.com/Makuna/NeoPixelBus
  * Rtc: https://github.com/Makuna/Rtc
  * Time: https://github.com/PaulStoffregen/Time
  * NTP: https://github.com/moeur/Arduino_ESP8266
  
THIS VERSION OF THE SOFTWARE IS ALMOST CERTAINLY OUT OF DATE ALREADY!

You should checkout my GitHub for the most up-to-date version:
    https://github.com/icchalmers/WordClock_v2.0
*/

// Import required libraries
#include <ESP8266WiFi.h>
#include <ESP8266mDNS.h>
#include <aREST.h>
#include <NeoPixelBus.h>
#include <stdio.h>
#include <ntp.h>
#include <Time.h>

#define LED 2
#define LED_ON digitalWrite(LED,0);
#define LED_OFF digitalWrite(LED,1);
#define TCP_LISTEN_PORT 80

#define NUM_PIXELS 122

// multicast DNS responder
MDNSResponder mdns;

// Global variables
NTP NTPclient;
time_t oldTime;
uint8_t oldMinutes;
aREST rest;
WiFiServer server(TCP_LISTEN_PORT);
NeoPixelBus strip = NeoPixelBus(NUM_PIXELS, 4);

// There are exposted using aREST
int led_state = 1;
int red = 60, green = 60, blue = 60;

void setup(void)
{  
  // Start Serial
  Serial.begin(115200);

  // Debug LED
  pinMode(LED, OUTPUT);
  
  aREST_setup();
  WiFi_setup();
  mDNS_setup();
  NTP_setup();
    
  // NeoPixel init to off
  strip.Begin();
  strip.Show();

  LED_ON
  
  // Show time on the LEDs.
  // Will be wrong if no NTP connection!
  DisplayTime(hour(),minute());
}


void loop() {
  
  //mDNS update
  mdns.update();
  
  // Output the time to the LEDs once per minute
  if(oldMinutes != minute()) {
      oldMinutes = minute();
      DisplayTime(hour(),minute());
  }
  
  // Print the time every 10 seconds
  if(now() - oldTime >= 10) {
    oldTime = now();
    digitalClockDisplay();
  }
  
  // Handle REST calls
  WiFiClient client = server.available();
  if (client) {
    while(!client.available()){
      delay(1);
    }
    rest.handle(client);
  }
}

