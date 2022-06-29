#include <Arduino.h>
#include <blink.h>


void gestionarLed(){
  int duration = ONE_SECOND;

  encenderLed(LED_PIN);
  delay(duration + ONE_SECOND);               // wait for a second
  
  apagarLed(LED_PIN);
  delay(duration - 900);               // wait for a duration
}
void encenderLed(int pin) {
  digitalWrite(pin, HIGH);   // turn the LED on (HIGH is the voltage level)
}

void apagarLed(int pin) {
  digitalWrite(pin, LOW);  
}