#include <Arduino.h>
const int LED = 13;
int valorTemperaturaInterna = 10;
int valorTemperaturaExterna = 10;

void setup() {
  // put your setup code here, to run once:
  pinMode(LED, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(valorTemperaturaInterna == valorTemperaturaExterna){
    digitalWrite(LED, HIGH);
  }
  else{
    digitalWrite(LED, LOW);
  }
}