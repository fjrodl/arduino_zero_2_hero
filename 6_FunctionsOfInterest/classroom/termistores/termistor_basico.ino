/*
   Arduino de 0 a 100

   Practica n 6. Termistor de temperatura_1
*/

// declaracion de pines utilizados
const int SensorPIN = A0;

// declaración de lso valores para la fórmula del modelo Stenhrat-hart
const int RC = 10000; //valor nominal de la resistencia a 25º C
const int VCC = 5;    // tensión de alimentación del circuito doivisor de tensión utilizado
// coeficientes de la fórmula
const float A = 1.11492089e-3;
const float B = 2.372075385e-4;
const float C = 6.954079529e-8;

const float K = 2.5; //factor de disipacion en mW/C


int valor_alaogico_leido;
float V_termistor;
float R_termistor;


float Tsh ; // valor de la temperatura sin tener en cuante el calentamiento del termistor
float Temperatura_real ; // valor de la temperatura, con la correción por auroacoplamiento.
float temperatura_celsius;


void setup() {

  Serial.begin(9600); // inicializamos comunicación por el puerto serie

}


void loop() {

  valor_alaogico_leido = analogRead(SensorPIN);
  V_termistor =  valor_alaogico_leido / 1024.00 * VCC; // calculamos el valor de la caida de tensión en el termistor
  R_termistor = (RC * V_termistor ) / (VCC - V_termistor); // calculamos el valor de la resisrencia del termsitor

  Tsh = 1.0 / (A + B * log(R_termistor) + C * pow(log(R_termistor), 3 )); // calculamos la temperatura
  Temperatura_real = Tsh - pow(V_termistor, 2) / (K * R_termistor) * 1000; // aplicamos la correción por autocalentamento
  temperatura_celsius = Temperatura_real - 273.15; // pasamos de kelvis a celsius
  Serial.print("T = ");
  Serial.print(temperatura_celsius);
  Serial.print("C\n");
  delay(2500);

}
