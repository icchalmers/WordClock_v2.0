// Change as appropriate for your setup, and save as "userConfig.h"
#ifndef USERCONFIG_H
#define USERCONFIG_H

const char* MDNSName = "wordclock";
const char* ssid = "";
const char* password = "";

#define DEBUG_LED 2
#define DEBUG_LED_ON digitalWrite(LED,0);
#define DEBUG_LED_OFF digitalWrite(LED,1);

#endif  //USERCONFIG_H
