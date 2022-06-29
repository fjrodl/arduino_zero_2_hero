#include <Arduino.h>
/*
Blink
Turns on an LED on for one second, then off for one second, repeatedly.
  
This example code is in the public domain.
*/
void gestionarLed();
void encenderLed(int pin);
void apagarLed(int pin);

//Pin 13 has an LED connected on most Arduino boards.
//give it a name:
int LED_PIN     = 13;
int ONE_SECOND  = 1000;
int duration    = ONE_SECOND;


//the setup routine runs once when you press reset:
void setup() {
  // initialize the digital pin as an output.
  pinMode(LED_PIN, OUTPUT);
}

//the loop routine runs over and over again forever:
void loop() {
  gestionarLed();
}

void gestionarLed(){
  encenderLed(LED_PIN);
  delay(duration);               // wait for a second
  
  apagarLed(LED_PIN);
  delay(duration);               // wait for a duration
}
void encenderLed(int pin) {
  digitalWrite(pin, HIGH);   // turn the LED on (HIGH is the voltage level)
}

void apagarLed(int pin) {
  digitalWrite(pin, LOW);  
}