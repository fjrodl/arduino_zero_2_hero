#include <Arduino.h>

#if !defined(ARRAY_SIZE)
    #define ARRAY_SIZE(x) (sizeof((x)) / sizeof((x)[0]))
#endif


void funcionFor(void);
void mostrarEntero(int);
void funcionWhile(void);

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  
  funcionFor();
  funcionWhile();
  
  
}

void loop() {
  // put your main code here, to run repeatedly:
  
}


void funcionWhile(void){

  int myArray [] = { 15, 60, 24, 36, 8, 16 } ;
  int sumaTotal  = 0 ;

  Serial.print("\nDentro de la funcion while\n");
  for ( int f = 0; f < (sizeof(myArray)/sizeof(myArray[0])); f ++ ) {
    sumaTotal += myArray [ f ] ;
  }
  mostrarEntero(sumaTotal);

}


void funcionFor(void){

  // crea una matriz de datos
  Serial.print("\nDentro de la funcion for\n");
  int myArray [] = { 2, 2, 2, 2, 2, 10 } ;
  int sumaTotal = 0; // variable para almacenar la suma
    
  
  for ( int f = 0; f < ARRAY_SIZE(myArray); f ++ ) {
    // suma toda la matriz en suma
    sumaTotal += myArray [ f ] ;
  }
  mostrarEntero(sumaTotal);
}


void mostrarEntero(int valor){
    Serial.print("El valor: ");
    Serial.print(valor);
}