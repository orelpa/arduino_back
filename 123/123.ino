const int led = 13;
#define WIFI_SSD "WIFI_VOIP"
#define WIFI_PASSWORD "@watermelon@33"
#define MQTT_HOST IPAddress(192,168,1,1)

#include <esp_wifi.h>
extern "C"{
  #include "freertos/FreeRTOS.h"
  #include "freertos/timers.h"
}
void setup() {
  // put your setup code here, to run once:
  
  pinMode(led, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(led, HIGH);
  delay(500);
  digitalWrite(led, LOW);
  delay(500);
}
