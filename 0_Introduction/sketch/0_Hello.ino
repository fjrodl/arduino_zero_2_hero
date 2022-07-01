/*
 * Arduino de 0 a 100
 * 
 * Practica n 1: Bienvenidos al mundo de Arduino
 */

//ZONA GLOBAL //////////////////////////////////////
/*
 * Esta parte del programa se utilizara para:
 *    -incluir librerias
 *    -descripcion de los pines a utilizar
 *    -definicion de las constantes
 *    -definicion de las variables globales   
 *    -declaración de funciones 
 *   
 */


//FUNCION SETUP/////////////////////////////////
/*
 * En funcion se ejecuta cada vez que se inicia la placa de Arduino
 * las tareas principales que se realizaran en esta parte seran:
 *    -Configuracion de los pines (pinMode() )
 *    -Inicializacion de comunicaciones
 */



void setup() {
  // inicializa la comunicacion serie a 9600 bits por segundo:
  Serial.begin(9600);
}


//FUNCION LOOP/////////////////////////////
/*
 * En esta parte se ubicara el codigo que se ejecuta continuamente,
 * en forma de bucle infinito
 */


void loop() {
 
  Serial.println(F("Bienvenidos al mundo de Arduino"));// imprime en el monitor serial "hello world" con un retorno de carro y linea nueva.
 // Serial.print("Bienvenidos al mundo de Arduino\r\n"); // imprime en el monitor serial "hello world" 
 // Serial.print("Bienvenidos al mundo de Arduino\n");
 
  delay(100);        // delay de 100 milisegundos antes de volver a repetir el buble.
}
