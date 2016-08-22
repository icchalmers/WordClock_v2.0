/*******************************************************************************
* FILENAME : WS2812bDisplay.cpp
*
* DESCRIPTION :
*     Implementation of the WS2812bDisplay class
*
* AUTHOR : Iain Chalmers
*
* Copyright (c) 2016 Iain Chalmers
*
* START DATE : 18th August 2016
*
*******************************************************************************/

#include "Arduino.h"
#include "./WS2812bDisplay.h"

WS2812bDisplay::WS2812bDisplay(uint16_t pixel_count) :
  pixel_count(pixel_count),
  strip(NeoPixelBus<NeoGrbFeature, Neo800KbpsMethod>(pixel_count, 3)) {}

void WS2812bDisplay::init() {
  strip.Begin();
  strip.ClearTo(BLACK);
  strip.Show();
}

void WS2812bDisplay::setStatus(int status) {
  switch (status) {
  case DISPLAY_STATUS_DISABLE:
    strip.SetPixelColor(0, BLACK);
    break;

  case DISPLAY_STATUS_OK:
    strip.SetPixelColor(0, GREEN);
    break;

  case DISPLAY_STATUS_UNKNOWN_ERROR:
    strip.SetPixelColor(0, RED);
    break;

  case DISPLAY_STATUS_WIFI_DISCONNECTED:
    strip.SetPixelColor(0, RED);
    break;

  case DISPLAY_STATUS_INIT:
    strip.SetPixelColor(0, BLUE);
    break;

  case DISPLAY_STATUS_OTA:
    strip.SetPixelColor(0, YELLOW);
    break;
  }
  strip.Show();
}

// Clear the display, but leave the status LED
void WS2812bDisplay::clear() {
  strip.ClearTo(BLACK, 1, pixel_count - 1);
  strip.Show();
}

void WS2812bDisplay::show() {
  strip.Show();
}

void WS2812bDisplay::setPixelColor(uint16_t pixel_number, RgbColor color) {
  strip.SetPixelColor(pixel_number, color);
}
