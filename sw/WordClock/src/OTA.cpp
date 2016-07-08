#include "Arduino.h"
#include "OTA.h"
#include <ArduinoOTA.h>

void ota_init(const char* hostname){
    ArduinoOTA.setHostname(hostname);

    // Set the callbacks to handle OTA events
    ArduinoOTA.onStart(&ota_onStart);
    ArduinoOTA.onProgress(&ota_onProgress);
    ArduinoOTA.onEnd(&ota_onEnd);
    ArduinoOTA.onError(&ota_onError);

    // Start the OTA handler
    ArduinoOTA.begin();
}

void ota_onStart() {
    Serial.println("Starting an OTA update...");
}

void ota_onEnd() {
    Serial.println("\r\nOTA update finished. Restarting.");
}

void ota_onError(ota_error_t error) {
    Serial.printf("Error[%u]: ", error);
    switch (error){
    case OTA_AUTH_ERROR :
        Serial.println("Auth Failed");
        break;
    case OTA_BEGIN_ERROR :
        Serial.println("Begin Failed");
        break;
    case OTA_CONNECT_ERROR :
        Serial.println("Connect Failed");
        break;
    case OTA_RECEIVE_ERROR :
        Serial.println("Receive Failed");
        break;
    case OTA_END_ERROR :
        Serial.println("End Failed");
        break;
    default :
        Serial.println("Unknown error");
    }
    Serial.println("\r\nRestarting ESP8266");
    ESP.restart();
}

void ota_onProgress(int progress, int total) {
    int percentageComplete = (progress / (total / 100));
    Serial.printf("Progress: %u%%\r", percentageComplete);
}
