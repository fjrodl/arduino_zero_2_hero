#include <Arduino.h>
#include <exp.h>

int variable_1 = 2;
int variable_2 = 10;


void iniciarEjemplo(void){
 
  pinMode(LED_PIN, OUTPUT);
}

void expControl(void){
  // put your main code here, to run repeatedly:
  if( variable_1 < variable_2 ){
    digitalWrite(LED_PIN, HIGH);
  }
  else if ( variable_1 > variable_2 ){
    digitalWrite(LED_PIN, LOW);
  }else{
    digitalWrite(LED_PIN, LOW);
  }
}