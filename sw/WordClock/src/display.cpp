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

WS2812bDisplay::WS2812bDisplay() :
  strip(NeoPixelBus<NeoGrbFeature , Neo800KbpsMethod>(PixelCount, 3)) {
}

void WS2812bDisplay::init() {
  strip.Begin();
  strip.ClearTo(BLACK);
  strip.Show();
  return;
}

void WS2812bDisplay::setStatus(int status) {
  switch (status) {
    case DISPLAY_STATUS_DISABLE :
       strip.SetPixelColor(0, BLACK);
       break;
    case DISPLAY_STATUS_OK :
       strip.SetPixelColor(0, GREEN);
       break;
    case DISPLAY_STATUS_UNKNOWN_ERROR :
       strip.SetPixelColor(0, RED);
       break;
  }
  strip.Show();
  return;
}
