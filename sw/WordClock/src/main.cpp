/*******************************************************************************
* FILENAME : main.cpp
*
* DESCRIPTION :
*     An ESP8266 and WS2812b LED based chaos word clock
*
*     Make sure to fill in the details in "userConfig_example.h" and re-save it
*     as "userConfig.h".
*
* LINKS :
*     https://github.com/icchalmers/WordClock_v2.0
*     http://fabacademy.org/archives/2015/eu/students/chalmers.iain/final-project-summary-wordclock20.html
*
* AUTHOR : Iain Chalmers
*
* Copyright (c) 2016 Iain Chalmers
*
* START DATE : 5th July 2016
*
*******************************************************************************/

#include "Arduino.h"
#include <stdint.h>
#include "userConfig.h"
#include <ESP8266WiFi.h>
#include <ESP8266mDNS.h>
#include <WiFiManager.h>
#include "./OTA.h"
#include "./display.h"

extern const char* ssid;
extern const char* password;
extern const char* MDNSName;
extern const uint16_t pixel_count;

WS2812bDisplay display(pixel_count);

void setup() {
    Serial.begin(115200);

    // Debug LED
    DEBUG_LED_OFF
    pinMode(DEBUG_LED, OUTPUT);

    display.init();

    Serial.println("Booting");
    display.setStatus(DISPLAY_STATUS_INIT);

    // Start the wifi manager. If the clock can't connect to a wifi network it
    // connected to previosuly, it puts up it's own AP called "WordClock". When
    // the user connects to it, the captive portal takes them to a config page
    // so that they can configure the wifi. The portal stays open for 10
    // minutes.
    WiFiManager wifiManager;
    wifiManager.setTimeout(600);  // 600s = 10 minutes
    if (!wifiManager.autoConnect("WordClock")) {
      Serial.println("Failed to connect and timeout reached");
      display.setStatus(DISPLAY_STATUS_WIFI_DISCONNECTED);
    } else {
      display.setStatus(DISPLAY_STATUS_OK);
      Serial.println("Ready");
    }

    ota_init(MDNSName);
}

void loop() {
    ArduinoOTA.handle();  // must be called frequently
}
