#include <Arduino.h>


uint8_t i = 0;
uint8_t MAX_BLINKS = 5;

void setup()
{
  delay(2000);
  pinMode(LED_BUILTIN, OUTPUT);
}


void loop()
{
  if (i < MAX_BLINKS)
  {
    digitalWrite(LED_BUILTIN, HIGH);
    delay(500);
    digitalWrite(LED_BUILTIN, LOW);
    delay(500);
    i++;
  }
}