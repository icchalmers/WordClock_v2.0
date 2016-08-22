#ifndef DISPLAY_H
#define DISPLAY_H

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

#define COLOUR_SATURATION 64

class WS2812bDisplay {
public:

  const uint16_t pixel_count;

  WS2812bDisplay(uint16_t pixel_count);
  void init();
  void setStatus(int status);
  void clear();
  void setPixelColor(uint16_t pixel_number,
                     RgbColor color);

private:

  NeoPixelBus < NeoGrbFeature, Neo800KbpsMethod > strip;
  const RgbColor RED   = RgbColor(COLOUR_SATURATION, 0, 0);
  const RgbColor GREEN = RgbColor(0, COLOUR_SATURATION, 0);
  const RgbColor BLUE  = RgbColor(0, 0, COLOUR_SATURATION);
  const RgbColor WHITE = RgbColor(COLOUR_SATURATION);
  const RgbColor BLACK = RgbColor(0);
};

#endif // DISPLAY_H
