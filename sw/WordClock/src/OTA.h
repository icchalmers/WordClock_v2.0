#ifndef OTA_H
#define OTA_H

#include <ArduinoOTA.h>

void ota_init(const char* hostname);
void ota_onStart();
void ota_onProgress(int progress, int total);
void ota_onEnd();
void ota_onError(ota_error_t error);

#endif  //OTA_H
