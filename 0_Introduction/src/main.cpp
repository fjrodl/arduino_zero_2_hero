// ------- BIBLIOTECAS -------
#include <Arduino.h>
#include <Servo.h>

// -------- AJUSTES ---------
#define SERVO_PIN 13  // El servo está conectado a este pin
#define SERVO_SPEED 3 // velocidad definida para el servo
#define MIN_ANGLE 50  // min. angulo
#define MAX_ANGLE 120 // máx. ángulo

// ------- VARIABLES -------

Servo myServo;
uint32_t servoTimer;
boolean isTurnPositive;
int servoAngle;

// Declaracion de funciones
void girarServo();

// --------- SETUP ----------
// funcion base de Arduino
void setup()
{
  myServo.attach(SERVO_PIN);
}

// ---------- LOOP ----------
// funcion base de Arduino
void loop()
{
  girarServo();
}

// --------- FUNCIONES --------
void girarServo()
{
  if (millis() - servoTimer >= 50)
  {
    servoTimer = millis();
    if (isTurnPositive)
    {
      servoAngle += SERVO_SPEED;
      if (servoAngle >= MAX_ANGLE)
      {
        servoAngle = MAX_ANGLE;
        isTurnPositive = false;
      }
    }
    else
    {
      servoAngle -= SERVO_SPEED;
      if (servoAngle <= MIN_ANGLE)
      {
        servoAngle = MIN_ANGLE;
        isTurnPositive = true;
      }
    }
    myServo.write(servoAngle);
  }
}