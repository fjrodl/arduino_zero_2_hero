/*
 * Arduino de 0 a 100
 * 
 * Practica n 2
 */

//ZONA GLOBAL //////////////////////////////////////
/*
 * Esta parte del programa se utilizara para:
 *    -incluir librerias
 *    -descripcion de los pines a utilizar
 *    -definicion de las constantes
 *    -definicion de las variables globales   
 *    -creación de funciones (Aunque las funciones pueden incluirse en esta parte, es recomendable utilizar una pestaña nueva, para la mejor compresión del código)
 */
 

  
 
//declaracion de constantes (variables):

const byte LED1 = 9;

//otras formas de declarar el uso de un pin:
// #define led1 9 // declrción de constantes heredada de C
 // int led1 = 9;
  // byte led1=9;  // la variable byte puede tomar valores entre 0 y 255 
  // const byte led1=9;
 


//FUNCION SETUP/////////////////////////////////
/*
 * Esta función se ejecuta cada vez que se inicia la placa de Arduino
 * las tareas principales que se realizarán en esta parte seáan:
 *    -Configuración de los pines (pinMode() )
 *    -Inicialización de comunicaciones
 */
void setup() 
{
  
  pinMode(LED1, OUTPUT);//configuramos led1(pin, 9), como salida
  // pinMode(9, OUTPUT); // se podría utilizar esta línea de código y así no tener que declarar la constante led1
  
}

//FUNCION LOOP/////////////////////////////
/*
 * En esta parte se ubicará el código que se ejecuta continuamente,
 * en forma de bucle infinito
 */
void loop() 
{

  

  //si se culmple la condicon , pulsador = HIGH, etonces
  digitalWrite(LED1, HIGH);// enciende el led poniendo en estado alto (HIGH, 5V) la slaida
  // otras formas de encender el led:
  //digitalWrite(9, 1);
   //digitalWrite(9, true);
  
  
  digitalWrite(LED1, LOW);// apaga el led, poniendo a estado bajo (LOW, 0V) la salida digital
  //digitalWrite(9, 0);
   //digitalWrite(9, false);

  
}
