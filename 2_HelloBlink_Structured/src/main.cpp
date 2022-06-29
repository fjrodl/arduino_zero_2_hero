#include <Arduino.h>
#include <blink.h>


//the setup routine runs once when you press reset:
void setup() {
  // initialize the digital pin as an output.
  pinMode(LED_PIN, OUTPUT);
}

//the loop routine runs over and over again forever:
void loop() {
  gestionarLed();
}