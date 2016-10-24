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
#include "./WS2812bDisplay.hpp"
#include <vector>

const RgbColor WS2812bDisplay::red    = RgbColor(COLOUR_SATURATION, 0, 0);
const RgbColor WS2812bDisplay::green  = RgbColor(0, COLOUR_SATURATION, 0);
const RgbColor WS2812bDisplay::blue   = RgbColor(0, 0, COLOUR_SATURATION);
const RgbColor WS2812bDisplay::yellow = RgbColor(COLOUR_SATURATION / 2,
                                                 COLOUR_SATURATION / 2,
                                                 0);
const RgbColor WS2812bDisplay::white = RgbColor(COLOUR_SATURATION);
const RgbColor WS2812bDisplay::black = RgbColor(0);

WS2812bDisplay::WS2812bDisplay(uint16_t pixel_count) :
  pixel_count(pixel_count),
  strip(NeoPixelBus<NeoGrbFeature, Neo800KbpsMethod>(pixel_count, 3)) {}

void WS2812bDisplay::init() {
  strip.Begin();
  strip.ClearTo(black);
  strip.Show();
}

void WS2812bDisplay::setStatus(int status) {
  switch (status) {
  case DISPLAY_STATUS_DISABLE:
    strip.SetPixelColor(0, black);
    break;

  case DISPLAY_STATUS_OK:
    strip.SetPixelColor(0, green);
    break;

  case DISPLAY_STATUS_UNKNOWN_ERROR:
    strip.SetPixelColor(0, red);
    break;

  case DISPLAY_STATUS_WIFI_DISCONNECTED:
    strip.SetPixelColor(0, red);
    break;

  case DISPLAY_STATUS_INIT:
    strip.SetPixelColor(0, blue);
    break;

  case DISPLAY_STATUS_OTA:
    strip.SetPixelColor(0, yellow);
    break;
  }
  strip.Show();
}

// Clear the display, but leave the status LED
void WS2812bDisplay::clear() {
  strip.ClearTo(black, 1, pixel_count - 1);
  strip.Show();
}

void WS2812bDisplay::show() {
  strip.Show();
}

bool WS2812bDisplay::setPixelColor(uint16_t pixel_number, RgbColor color) {
  bool error = false;

  if (pixel_number <= pixel_count) {
    strip.SetPixelColor(pixel_number, color);
  } else {
    error = true;
  }
  return error;
}

// Set all the pixels specified in an array to one color.
bool WS2812bDisplay::setPixelColor(uint16_t *pixel_numbers, uint16_t num_pixels,
                                   RgbColor color) {
  bool error = false;

  for (uint16_t n = 0; n < num_pixels; n++) {
    if (pixel_numbers[n] <= pixel_count) {
      strip.SetPixelColor(pixel_numbers[n], color);
    } else {
      error = true;
    }
  }
  return error;
}

// Set all the pixels specified in a vector to one color.
bool WS2812bDisplay::setPixelColor(const std::vector<uint16_t>& v,
                                   RgbColor                     color) {
  bool error = false;

  for (auto x : v) {
    if (x <= pixel_count) {
      strip.SetPixelColor(x, color);
    } else {
      error = true;
    }
  }
  return error;
}
