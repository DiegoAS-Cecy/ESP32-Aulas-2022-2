#include <Arduino.h>

//GPIO pins
const int GPIO_LED = 23;

void setup() {
  pinMode(GPIO_LED, OUTPUT);
}

void loop() {
  digitalWrite(GPIO_LED, HIGH);
  delay(500);
  digitalWrite(GPIO_LED, LOW);
  delay(500);
}