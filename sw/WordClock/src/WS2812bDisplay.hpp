/*******************************************************************************
* FILENAME : WS2812bDisplay.hpp
*
* DESCRIPTION :
*     A display driver class to control the WS2812b LEDs in the word clock
*
* AUTHOR : Iain Chalmers
*
* Copyright (c) 2016 Iain Chalmers
*
* START DATE : 18th August 2016
*
*******************************************************************************/

#ifndef WS2812BDISPLAY_HPP
#define WS2812BDISPLAY_HPP

#include "..\lib\NeoPixelBus\src\NeoPixelBus.h"
#include <vector>

// Status/state display codes
// Negative is bad
#define DISPLAY_STATUS_UNKNOWN_ERROR -1
#define DISPLAY_STATUS_WIFI_DISCONNECTED -2

// Neutral is off
#define DISPLAY_STATUS_DISABLE 0

// Positive is good
#define DISPLAY_STATUS_OK 1
#define DISPLAY_STATUS_INIT 2
#define DISPLAY_STATUS_OTA 3

#define COLOUR_SATURATION 64

class WS2812bDisplay {
public:

  const uint16_t pixel_count;
  static const RgbColor red;
  static const RgbColor green;
  static const RgbColor blue;
  static const RgbColor yellow;
  static const RgbColor white;
  static const RgbColor black;

  WS2812bDisplay(uint16_t pixel_count);
  void init();
  void setStatus(int status);
  void clear();
  bool setPixelColor(uint16_t pixel_number,
                     RgbColor color);
  bool setPixelColor(uint16_t pixel_numbers[],
                     uint16_t num_pixels,
                     RgbColor color);
  bool setPixelColor(const std::vector < uint16_t >& v,
                     RgbColor                        color);
  void show();

private:

  NeoPixelBus < NeoGrbFeature, Neo800KbpsMethod > strip;
};

#endif // WS2812BDISPLAY_HPP
