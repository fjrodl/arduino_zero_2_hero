/*
   Arduino de 0 a 100

   Practica n 4
*/
/*
  En la siguiente practoca, el led se encendera si el pulsador es presionado,
  sino el led estara apagado
*/


//ZONA GLOBAL //////////////////////////////////////



// definimos los pines que vamos a utilizar
const int PULSADOR_PIN = 4;
const int LED_PIN =  9;
boolean  estadoPulsador;

//FUNCION SETUP/////////////////////////////////

void setup() {
  // declaramos el pin conectado al led como salida:
  pinMode(LED_PIN, OUTPUT);
  // declaramos el pin conmectado al pulsador como entrada:
  pinMode(PULSADOR_PIN, INPUT);
}

//FUNCION LOOP/////////////////////////////
void loop() {
  // lee el valor del estado del pulsador (0 o 1):
  estadoPulsador = digitalRead(PULSADOR_PIN);

  // comprobamos que el estado del pulsador: .
  // Si el estado es alto (HIGH, 1, true):
  if (estadoPulsador == HIGH) {              //( configuración pull down)
    // if (digitalRead(pulsadorPin) == HIGH) // con esta instrucción, podem os omitir la primera (línea 27)
    // encendemos el led:
    digitalWrite(LED_PIN, HIGH);
  }
  else { // sino:
    // apagamos el led:
    digitalWrite(LED_PIN, LOW);
  }
}
