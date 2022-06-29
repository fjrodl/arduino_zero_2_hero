#include <Arduino.h>
#include <tipos.h>

void imprimirMensajes(void);
void setearVariables(void);
void setearVariablesStruct(void);
void setearVariablesSimples(void);
void convertirTipos (void);

void setup() {
  setearVariables();
  setearVariablesStruct();
  setearVariablesSimples();
  imprimirMensajes();
}

void loop() {
  // put your main code here, to run repeatedly:
}

void imprimirMensajes(void){
  delay(1000);
  Serial.begin(9600);
  // por defecto todas las banderas son false
  // hacer referencia a una estructura
  // podemos cambiar y trabajar como con banderas ordinarias
  Serial.println(flags.button);
  Serial.println(flags.state);
  flags.position = true;
  Serial.println(flags.position);
}

void setearVariables(void){
// declaramos una estructura de tipo MyFlags
//  MyFlags flags;
}
void setearVariablesStruct(void){
  myStruct data_B [ 3 ] ;

 // asigna valores a los miembros de la estructura manualmente
  datosA. a = true ;
  datosA. b = 10;
  datosA. c = 1200;
  datosA. d = 789456;
  datosA. e [ 0 ] = 10;   // ¡Tenemos una matriz!
  datosA. e [ 1 ] = 20;
  datosA. e [ 2 ] = 30;
  // asigna la estructura datosA a la estructura data_B número 0
  data_B [ 0 ] = datosA;
  // asigna un elemento de matriz de la estructura datosA 
  // estructura data_B número 1
  data_B [ 0 ] . e [ 1 ] = datosA. e [ 1 ] ;
  // completa los datos con la estructura data_B número 2
  data_B [ 2 ] = ( myStruct ) { 
    false , 30, 3200, 321654, { 1, 2, 3, 4, 5 }
  };
} 
void setearVariablesSimples(void){

// UINT8_MAX - devolverá 255
// INT8_MAX - volverá 127
// UINT16_MAX - devolverá 65 535
// INT16_MAX - devolverá 32 767
// UINT32_MAX- devolverá 4294967295
// INT32_MAX - devolverá 2147483647
// UINT64_MAX - volverá 18446744073709551615
// INT64_MAX - devolverá 9 223 372 036 854 775 807

  byte myVal;  // declaracion de variable tipo byte
  int sensorRead = 10;
  float sensorValue = 100;
  byte val1, val2, val3 = 10;
}

void setearVariablesArray(void){
  
  int miArray[5];
  
  miArray[3] = 10;

}


void convertirTipos(){
  // variable de tipo byte
  byte val = 10;
 
  int nuevoVal = ( int ) val ; 
  nuevoVal +=  1000;
}
