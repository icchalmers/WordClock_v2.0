#ifndef DISPLAY_H
#define DISPLAY_H

#include "..\lib\NeoPixelBus\src\NeoPixelBus.h"

// Status/state display codes
// Negative is bad
#define DISPLAY_STATUS_UNKNOWN_ERROR -1
// Neutral is off
#define DISPLAY_STATUS_DISABLE 0
// Positive is good
#define DISPLAY_STATUS_OK 1

#define COLOUR_SATURATION 64

class WS2812bDisplay {
  public:
    const uint16_t PixelCount = 12;

    WS2812bDisplay();
    void init();
    void setStatus(int status);

  private:
    NeoPixelBus<NeoGrbFeature, Neo800KbpsMethod> strip;
    const RgbColor RED = RgbColor(COLOUR_SATURATION, 0, 0);
    const RgbColor GREEN = RgbColor(0, COLOUR_SATURATION, 0);
    const RgbColor BLUE = RgbColor(0, 0, COLOUR_SATURATION);
    const RgbColor WHITE = RgbColor(COLOUR_SATURATION);
    const RgbColor BLACK = RgbColor(0);
};

#endif  //DISPLAY_H
