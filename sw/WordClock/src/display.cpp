/*******************************************************************************
* FILENAME : display.cpp
*
* DESCRIPTION :
*     A driver class to control the WS2812b LEDs in the word clock
*
* AUTHOR : Iain Chalmers
*
* Copyright (c) 2016 Iain Chalmers
*
* START DATE : 18th August 2016
*
*******************************************************************************/

#include "Arduino.h"
#include "./display.h"

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
    strip.SetPixelColor(0,
                        RgbColor(COLOUR_SATURATION, 0, COLOUR_SATURATION));
    break;

  case DISPLAY_STATUS_INIT:
    strip.SetPixelColor(0, BLUE);
    break;
  }
  strip.Show();
}

void WS2812bDisplay::clear() {
  strip.ClearTo(BLACK);
  strip.Show();
}
