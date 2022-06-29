#include <Arduino.h>

#define PI 3.1415926535897932384626433832795
#define HALF_PI 1.5707963267948966192313216916398
#define TWO_PI 6.283185307179586476925286766559
#define DEG_TO_RAD 0.017453292519943295769236907684886
#define RAD_TO_DEG 57.295779513082320876798154814105



void setup() {
    Serial.begin(9600);

    float radianes = PI/2;
 
    float a = cos(radianes);
    float b = sin(radianes);
    float c = tan(HALF_PI);
    Serial.println("Resultados: ");
    Serial.println(a);
    Serial.println(b);
    Serial.println(c);

    float valMin = min(a, b);
    float valMax = max(a, b);

    Serial.println("Resultados Min/max Float: ");
    Serial.println(valMin);
    Serial.println(valMax);


    int valMinEnteros = min(PI, HALF_PI);
    int valMaxEnteros = max(PI, HALF_PI);
    Serial.println("Resultados Min/max Enteros: ");
    Serial.println(valMinEnteros);
    Serial.println(valMaxEnteros);

}

void loop() {
    
}

