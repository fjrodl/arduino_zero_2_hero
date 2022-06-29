#include <Arduino.h>


 // Fuente: https://www.luisllamas.es/que-son-y-como-usar-interrupciones-en-arduino/

// PAra este ejemplo hay que cablear los pines correspondientes 
// de simulacion
// Empleamos el mismo pin digital para emular una onda cuadrada, esta vez 
//   de intervalo 2s (1s ON y 1s OFF).
// Cada interrupción actualiza el valor de un contador. Posteriormente, en 
//   el bucle principal, comprobamos el valor del contador, y si ha sido 
//   modificado mostramos el nuevo valor.
//




void interruptCount(void);
void blink(void);
void lanzarLed(void);
void lanzarSimulador(void);

const int LED_PIN = 13;
const int EMU_PIN = 10;
const int INT_PIN = 2;
volatile int ISRCounter = 0;
volatile int state = LOW;


int counter = 0;
unsigned long timeCounter = 0;
int DURATION = 1500;

void setup()
{
   pinMode(EMU_PIN, OUTPUT);
   pinMode(LED_PIN, OUTPUT);
   pinMode(INT_PIN, INPUT_PULLUP);

   Serial.begin(9600);

   // attachInterrupt(interrupt, ISR, mode);
   // interrupt: número de la interrupción que estamos definiendo, 
   // ISR: la función de callback asociada, 
   // mode: Falling, Rising, Change y Low

   // Modo simulado
   // attachInterrupt(digitalPinToInterrupt(INT_PIN), interruptCount, LOW);

   // Modo led
   attachInterrupt(digitalPinToInterrupt(INT_PIN), blink, CHANGE);
   
}

void loop(){
    lanzarLed();
}
void lanzarSimulador()
{
   //esta parte define la emulación de la salida
   digitalWrite(EMU_PIN, HIGH);
   delay(DURATION);
   digitalWrite(EMU_PIN, LOW);
   delay(DURATION);


   if (counter != ISRCounter)
   {
      counter = ISRCounter;
      Serial.println(counter);
   }
}

void lanzarLed(){
     //esta parte es para emular la salida
   digitalWrite(EMU_PIN, HIGH);
   delay(DURATION);
   digitalWrite(EMU_PIN, LOW);
   delay(DURATION);
}

void interruptCount()
{
   ISRCounter++;
   timeCounter = millis();
}

void blink() {
   state = !state;
   digitalWrite(LED_PIN, state);
}