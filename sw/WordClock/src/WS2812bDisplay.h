/*******************************************************************************
* FILENAME : WS2812bDisplay.h
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

#ifndef WS2812BDISPLAY_H
#define WS2812BDISPLAY_H

#include "..\lib\NeoPixelBus\src\NeoPixelBus.h"

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
  const RgbColor RED    = RgbColor(COLOUR_SATURATION, 0, 0);
  const RgbColor GREEN  = RgbColor(0, COLOUR_SATURATION, 0);
  const RgbColor BLUE   = RgbColor(0, 0, COLOUR_SATURATION);
  const RgbColor YELLOW =
    RgbColor(COLOUR_SATURATION / 2, COLOUR_SATURATION / 2, 0);
  const RgbColor WHITE = RgbColor(COLOUR_SATURATION);
  const RgbColor BLACK = RgbColor(0);

  WS2812bDisplay(uint16_t pixel_count);
  void init();
  void setStatus(int status);
  void clear();
  void setPixelColor(uint16_t pixel_number,
                     RgbColor color);
  void show();

private:

  NeoPixelBus < NeoGrbFeature, Neo800KbpsMethod > strip;
};

#endif // WS2812BDISPLAY_H
