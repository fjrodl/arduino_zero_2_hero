#include <Arduino.h>


/**
 Generador de Numeros aleatorios con semilla aleatoria
*/


void generarAleatorios (void);

long randomNumber;
 

void setup() {
  
  Serial.begin(9600);
  
 
  Serial.println("Sketch - secuencia de numeros aleatorios con semilla");
      
  //Establecemos la semilla fija
  // randomSeed(39);    
  //Establecemos la semilla en un pin analogico
  randomSeed(analogRead(A0));       
}
 
//Bucle principal
void loop() {
 
    generarAleatorios();
}

void generarAleatorios(void){
 
  randomNumber = random(1,100);
  
 
  Serial.print("El numero aleatorio => ");
  Serial.println(randomNumber);
 
  
  delay(1000);
}