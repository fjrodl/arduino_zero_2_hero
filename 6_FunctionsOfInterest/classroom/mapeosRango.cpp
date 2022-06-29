   #include <Arduino.h>

   int x;
   int y;



   void mapearValorEnRango(void){
       // Mapeado y redondeo impreciso
      x = random(0, 100);
      y = map(x, 0, 100, 0, 1);

      Serial.print("El numero aleatorio es: ");
      Serial.println(x);

      Serial.print("El numero mapeado es: ");
      Serial.println(y);
      delay(1000);
   }

   void calcularValorEnRango(void){
        // Recordad la precision
      float valorDecimal = random(1, 100) / 100.0;
      Serial.print("El numero calculado con mayor precision: ");
      Serial.println(valorDecimal);

      delay(1000);
   }


   void setup() {
      Serial.begin(9600);
   }

   void loop() {
      mapearValorEnRango();
      calcularValorEnRango();
   }
