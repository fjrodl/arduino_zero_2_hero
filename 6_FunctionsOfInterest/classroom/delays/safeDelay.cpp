#include <Arduino.h>

#define LED_PIN 13

void blinkLed();

unsigned long lastTimeLedBlinked = millis();
unsigned long delayBetweenBlink = 2000;

byte ledState = LOW;

void setup() {
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  blinkLed();
}

void lightLed(){
  unsigned long timeNow = millis();

  if (timeNow - lastTimeLedBlinked > delayBetweenBlink)
  {
    if (ledState == LOW)
    {
      ledState = HIGH;
    }
    else
    {
      ledState = LOW;
    }

    digitalWrite(LED_PIN, ledState);
    lastTimeLedBlinked = timeNow;
  }
}