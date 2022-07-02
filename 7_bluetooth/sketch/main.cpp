/**
 * @file main.cpp
 * @author your name (you@domain.com)
 * 
 * @brief Este programa se conecta al bluetooth, conectado al arduino, mandamos caracteres desde la aplicación
 * del movil y lo recibimos aquí. 
 * 
 * Cuando envia la letra 'a' active el led y con la letra 'b' desactiva el led (el led es el que viene en la
 * placa de arduino)
 * 
 * @version 0.1
 * @date 2022-07-02
 * 
 * @copyright Copyright (c) 2022
 * 
 * Source code obtained from: https://forum.arduino.cc/t/bluetooth-serial-shield-help/102729/9
 */

#include <Arduino.h>
#include <SoftwareSerial.h>   //Software Serial Port
#define RxD 2
#define TxD 3

#define DEBUG_ENABLED  1

void setupBlueToothConnection();

SoftwareSerial blueToothSerial(RxD,TxD);
int ARDUINO_LED = 13;
void setup() 
{ 
  Serial.begin(9600);
  pinMode(RxD, INPUT);
  pinMode(TxD, OUTPUT);
  setupBlueToothConnection();
  pinMode(ARDUINO_LED, OUTPUT);

} 

void loop() 
{ 
  char recvChar;
  
  while(1){
    if(blueToothSerial.available()){//checkqueamos si hay algo que enviar 
      recvChar = blueToothSerial.read();
      if(recvChar == 'a')
      {
      digitalWrite(ARDUINO_LED, HIGH);
      }
      if(recvChar == 'b')
     {
      digitalWrite(ARDUINO_LED, LOW);
     }
      
      Serial.print(recvChar);
    }
    if(Serial.available()){//chequemos si estamos recibiendo
      recvChar  = Serial.read();
      blueToothSerial.print(recvChar);
    }
  }
} 

void setupBlueToothConnection()
{
  Serial.println("Starting Bluetooth\n");
  blueToothSerial.begin(9600); //Seteamos el baud rate a 9600
  blueToothSerial.print("\r\nAT+ADDR?\r\n");
  blueToothSerial.print("\r\n+STWMOD=0\r\n"); //set the bluetooth work en modo esclavo
  blueToothSerial.print("\r\n+STNA=SeeedBTSlave\r\n"); //seteamos el nombre como "SeeedBTSlave"
  blueToothSerial.print("\r\n+STOAUT=1\r\n"); // Permitir a dispositivo conectado conectarse a mi
  blueToothSerial.print("\r\n+STAUTO=0\r\n"); // No se permite conexion automatica
  delay(2000); //  delay requerido antes de continuar.
  blueToothSerial.print("\r\n+INQ=1\r\n"); //setea el dispositivo esclavo  inquirable 
  Serial.println("The slave bluetooth is inquirable!");
  delay(2000); // delay requerido antes de continuar.
  blueToothSerial.flush();
}