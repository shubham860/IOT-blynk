#define BLYNK_PRINT Serial

#include<ESP8266WiFi.h>



char auth[] = "bd4c63900f9f44999f56be1b371b8ecc";
char ssid[] = "pro";
char pass[] = "8791555171";
void setup() {
 Serial.begin(115200); 
 Blynk.begin(auth,ssid,pass);
}

void loop() {
  Blynk.run();

}
