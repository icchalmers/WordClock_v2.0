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
#include "./OTA.h"
#include "./display.h"

extern const char* ssid;
extern const char* password;
extern const char* MDNSName;

WS2812bDisplay display;

void setup() {
    Serial.begin(115200);

    // Debug LED
    DEBUG_LED_OFF
    pinMode(DEBUG_LED, OUTPUT);

    display.init();

    Serial.println("Booting");
    WiFi.mode(WIFI_STA);

    WiFi.begin(ssid, password);

    while (WiFi.waitForConnectResult() != WL_CONNECTED) {
        WiFi.begin(ssid, password);
        Serial.println("Retrying connection...");
    }

    ota_init(MDNSName);

    Serial.println("Ready");
    display.setStatus(DISPLAY_STATUS_OK);
}

void loop() {
    ArduinoOTA.handle();  // must be called frequently
}
