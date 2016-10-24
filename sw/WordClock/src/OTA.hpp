#ifndef OTA_HPP
#define OTA_HPP

#include <ArduinoOTA.h>

#define PIXELS_PER_LINE 11

void ota_init(const char *hostname);
void _ota_onStart();
void _ota_onProgress(int progress,
                     int total);
void _ota_onEnd();
void _ota_onError(ota_error_t error);
void _ota_displayStart();
void _ota_displayProgress(int progress);
void _ota_displayEnd();
void _ota_displayError(ota_error_t error);

#endif // OTA_HPP