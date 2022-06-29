#include <Arduino.h>

/**
 Generador de Numeros aleatorios
*/
 
//Variable donde almacenaremos el numero 
long randomNumber;
 

void setup() {
  

  Serial.begin(9600);
  Serial.println("Inicio del sketch");
      
}
 

void loop() {
 
  //Genera un numero aleatorio entre 1 y 100
  randomNumber = random(1,100);
  
  
  Serial.print("El numero aleatorio => ");
  Serial.println(randomNumber);
 
  
  delay(1000);
}