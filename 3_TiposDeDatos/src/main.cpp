#include <Arduino.h>
#include <tipos.h>

#if !defined(ARRAY_SIZE)
    #define ARRAY_SIZE(x) (sizeof((x)) / sizeof((x)[0]))
#endif






void imprimirMensajes(void);
void setearVariables(void);
void setearVariablesStruct(void);
void setearVariablesSimples(void);
void convertirTipos (void);
void setearVariablesString(void);
void doubleStringSize(void);

size_t medirCadenasSizeOf (String);
size_t medirCadenasTextString (String);
size_t medirCadenasStrlen(String,size_t);

void setup() {
  Serial.begin(9600);

  setearVariables();
  setearVariablesStruct();
  setearVariablesSimples();
  imprimirMensajes();
  setearVariablesString();
  
}

void loop() {
  // put your main code here, to run repeatedly:
}

void imprimirMensajes(void){
  delay(1000);
 
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

void setearVariablesString(void){
  String cadena0 = "Mi Primera Cadena con String" ;
  String cadena1 = String ( "lol" ) + String ( "kek" ) ; 
  
  String cadena2 = String ( 'b' ) ;                
  
  String cadena3 = String ( "Mi segunda cadena " ) ;  
  String cadena4 = String ( cadena3 + "otra " ) ;  
  String cadena5 = String ( 13 ) ;               
  String cadena6 = String ( 20, DEC ) ;          
  String cadena7 = String ( 45, HEX ) ;          
  String cadena8 = String ( 255, BIN ) ;         
  String cadena9 = String ( 5.698 , 3 ) ;        
  
  // las cadenas se pueden agregar entre sí
  String cadena10 = cadena0 + cadena4;         
 
  // puede formar un nombre a partir de piezas
  #define NAME "fichero"
  #define TYPE "-fecha"
  #define EXT ".txt"
    
  String nombreFichero = String(NAME) + TYPE + EXT; 

  //Ejemplo simple

  Serial.println(cadena3);
  cadena3 [ 2 ] = 'b' ; 
  Serial.println(cadena3);
  Serial.println(medirCadenasSizeOf(cadena3));
  Serial.println(medirCadenasTextString(cadena3));
  Serial.println(medirCadenasStrlen(miCadenita, ARRAY_SIZE(miCadenita)));
  doubleStringSize();
}

size_t medirCadenasSizeOf(String textString){
  
  return sizeof(textString); 

}


size_t medirCadenasTextString(String textString){
  
  
  return textString.length();  
}


size_t medirCadenasStrlen(String textString, size_t totalTamanyo){
  
  char charBuf[totalTamanyo];
  textString.toCharArray(charBuf, totalTamanyo);
  Serial.println("STRLEN");
  Serial.println(charBuf);
  return strlen(charBuf);  
}




void doubleStringSize(){
  
  int totalLength = sizeof(misCadenas);
  
  Serial.print(F("El tamanyo del array es "));
  Serial.println(totalLength);
  
  for (byte idx = 0; idx < sizeof(misCadenas) / sizeof(misCadenas[0]); idx++) {
    int thisLength = strlen(misCadenas[idx]) + 1;
    Serial.print(F("La longitud de la cadena "));
    Serial.print(idx);
    Serial.print(F(" es "));
    Serial.println(thisLength);
    totalLength += thisLength;
  }
  
  Serial.print(F("El numeros de elementos total es ==>"));
  Serial.println(totalLength);

}


