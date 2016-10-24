#include "Arduino.h"
#include "OTA.hpp"
#include <ArduinoOTA.h>
#include "./WS2812bDisplay.hpp"

extern WS2812bDisplay display;

void ota_init(const char *hostname) {
  ArduinoOTA.setHostname(hostname);

  // Set the callbacks to handle OTA events
  ArduinoOTA.onStart(&_ota_onStart);
  ArduinoOTA.onProgress(&_ota_onProgress);
  ArduinoOTA.onEnd(&_ota_onEnd);
  ArduinoOTA.onError(&_ota_onError);

  // Start the OTA handler
  ArduinoOTA.begin();
}

void _ota_onStart() {
  Serial.println("Starting an OTA update...");
  _ota_displayStart();
}

void _ota_onEnd() {
  Serial.println("\r\nOTA update finished. Restarting.");
  _ota_displayEnd();
}

void _ota_onError(ota_error_t error) {
  Serial.printf("Error[%u]: ", error);

  switch (error) {
  case OTA_AUTH_ERROR:
    Serial.println("Auth Failed");
    break;

  case OTA_BEGIN_ERROR:
    Serial.println("Begin Failed");
    break;

  case OTA_CONNECT_ERROR:
    Serial.println("Connect Failed");
    break;

  case OTA_RECEIVE_ERROR:
    Serial.println("Receive Failed");
    break;

  case OTA_END_ERROR:
    Serial.println("End Failed");
    break;

  default:
    Serial.println("Unknown error");
  }
  _ota_displayError(error);
  Serial.println("\r\nRestarting ESP8266");
  ESP.restart();
}

void _ota_onProgress(int progress, int total) {
  int percentage_complete = (progress / (total / 100));

  Serial.printf("Progress: %u%%\r", percentage_complete);

  _ota_displayProgress(percentage_complete);
}

// Makes the top line of the display yellow on OTA start
void _ota_displayStart() {
  display.clear();

  for (uint16_t i = 1; i < PIXELS_PER_LINE + 1; i++) {
    display.setPixelColor(i, display.yellow);
  }
  display.show();
  display.setStatus(DISPLAY_STATUS_OTA);
}

// Makes the top line fill up green to show progress
void _ota_displayProgress(int percentage_complete) {
  int progress_end_pixel = percentage_complete / PIXELS_PER_LINE;

  for (uint16_t i = 1; i < progress_end_pixel; i++) {
    display.setPixelColor(i, display.green);
  }
  display.show();
}

// Makes the top line all green when OTA update is finished, then clears the
// screen before reset.
void _ota_displayEnd() {
  for (uint16_t i = 1; i < PIXELS_PER_LINE + 1; i++) {
    display.setPixelColor(i, display.green);
  }
  display.show();
  delay(1000); // Should really avoid delay() and use Ticker instead...
  display.clear();
  display.setStatus(DISPLAY_STATUS_DISABLE);
}

// Makes the top line of the display red on an OTA update error
void _ota_displayError(ota_error_t error) {
  for (uint16_t i = 1; i < PIXELS_PER_LINE + 1; i++) {
    display.setPixelColor(i, display.red);
  }
  display.show();
}
