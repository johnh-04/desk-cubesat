// desk-cubesat · Tappa 0 — primo sketch sull'STM32U585 della UNO Q
#include <Arduino_RouterBridge.h>   // Bridge e Monitor: la console di App Lab

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
  Bridge.begin();     // avvia il canale verso Linux (attende che sia pronto)
  Monitor.begin();    // la «seriale» che vedi nella console di App Lab
  Monitor.println("desk-cubesat: boot");
}

void loop() {
  digitalWrite(LED_BUILTIN, LOW);    // attivo basso: LOW = acceso
  delay(200);
  digitalWrite(LED_BUILTIN, HIGH);
  delay(800);
  Monitor.println("tick");
}
