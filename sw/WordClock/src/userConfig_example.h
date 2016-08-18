// Change as appropriate for your setup, and save as "userConfig.h"
#ifndef USERCONFIG_H
#define USERCONFIG_H

#include <stdint.h>

const char* MDNSName = "wordclock";
const char* ssid = "";
const char* password = "";
const uint16_t pixel_count = 12;

#define DEBUG_LED 2
#define DEBUG_LED_ON digitalWrite(DEBUG_LED,0);
#define DEBUG_LED_OFF digitalWrite(DEBUG_LED,1);

#endif  //USERCONFIG_H
