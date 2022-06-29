#include <Arduino.h>
#include <blink.h>


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