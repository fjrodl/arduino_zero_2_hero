/*
   Arduino de 0 a 100

   Practica n 3
   El coche fantástico (básico)
*/


//ZONA GLOBAL //////////////////////////////////////
/*
   Esta parte del programa se utilizara para:
      -incluir librerias
      -descripcion de los pines a utilizar
      -definicion de las constantes
      -definicion de las variables globales
*/

// declaramos los pines donde conectamos los leds
const byte LED_1 = 13;
const byte LED_2 = 12;
const byte LED_3 = 11;
const byte LED_4 = 10;
const byte LED_5 = 9;
const byte LED_6 = 8;

// esta variable es para modificar el delay facilmente
unsigned int retardo = 100;// variable para el delay de los leds


//FUNCION SETUP/////////////////////////////////
/*
   En funcion se ejecuta cada vez que se inicia la placa de Arduino
   las tareas principales que se realizaran en esta parte seran:
      -Configuracion de los pines (pinMode() )
      -Inicializacion de comunicaciones
*/
void setup()
{

  pinMode(LED_1, OUTPUT);//configuramos led1(pin13), como salida
  pinMode(LED_2, OUTPUT);
  pinMode(LED_3, OUTPUT);
  pinMode(LED_4, OUTPUT);
  pinMode(LED_5, OUTPUT);
  pinMode(LED_6, OUTPUT);

}

//FUNCION LOOP/////////////////////////////
/*
   En esta parte se ubicara el codigo que se ejecuta continuamente,
   en forma de bucle infinito
*/
void loop()
{

  // encinde los leds en un sentido
  digitalWrite(LED_1, HIGH);// enciende el led poniendo en estado alto (HIGH, 5V) la slaida
  delay(retardo); //espera 1 segundo
  digitalWrite(LED_1, LOW);// apaga el led, poniendo a estado bajo (LOW, 0V) la salida digital
  digitalWrite(LED_2, HIGH);
  delay(retardo);
  digitalWrite(LED_2, LOW);
  digitalWrite(LED_3, HIGH);
  delay(retardo);
  digitalWrite(LED_3, LOW);
  digitalWrite(LED_4, HIGH);
  delay(retardo);
  digitalWrite(LED_4, LOW);
  digitalWrite(LED_5, HIGH);
  delay(retardo);
  digitalWrite(LED_5, LOW);
  digitalWrite(LED_6, HIGH);
  delay(retardo);
  digitalWrite(LED_6, LOW);

  // enciande y apaga los leds en el otro sentido
  digitalWrite(LED_5, HIGH);
  delay(retardo);
  digitalWrite(LED_5, LOW);
  digitalWrite(LED_4, HIGH);
  delay(retardo);
  digitalWrite(LED_4, LOW);
  digitalWrite(LED_3, HIGH);
  delay(retardo);
  digitalWrite(LED_3, LOW);
  digitalWrite(LED_2, HIGH);
  delay(retardo);
  digitalWrite(LED_2, LOW);
  delay(retardo);


}
