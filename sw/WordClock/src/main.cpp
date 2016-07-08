#include "Arduino.h"
#include <stdint.h>
#include "userConfig.h"
#include <ESP8266WiFi.h>
#include <ESP8266mDNS.h>
#include "OTA.h"

extern const char* ssid;
extern const char* password;
extern const char* MDNSName;

void setup() {
    Serial.begin(115200);

    Serial.println("Booting");
    WiFi.mode(WIFI_STA);

    WiFi.begin(ssid, password);

    while (WiFi.waitForConnectResult() != WL_CONNECTED) {
        WiFi.begin(ssid, password);
        Serial.println("Retrying connection...");
    }

    ota_init(MDNSName);

    Serial.println("Ready");
}

void loop() {
    ArduinoOTA.handle(); // must be called frequently

}
