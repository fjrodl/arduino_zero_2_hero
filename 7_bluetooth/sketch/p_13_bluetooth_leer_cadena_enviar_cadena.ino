

#include <SoftwareSerial.h>
SoftwareSerial BT1(10, 11); // RX | TX
char dato[254];
int tamano;
int i;
char inChar;
String cadena="";

char envio[]="¿que quires?";
boolean a;
void setup()
  {
   
               
    Serial.begin(9600);
    BT1.begin(38400); 
     cadena.reserve(200);
  }
 
void loop()
  { 
   
    if (BT1.available())
    {
           inChar=BT1.read();  // le un byte 
           
//Suma de caracteres en variable string
   
            if (inChar=='*'){
    Serial.print("Lectura: ");
    Serial.println(cadena);
//Borra la variable string para almacenar nuevos datos
    cadena=""; 
    a=true;
    
   }
   else
   {
    cadena+=inChar;
   }
         
         
     }
           
     // enviar datos
    tamano= sizeof(envio);
     if(a==true)
     {
       for (int i=0; i<tamano; i++)
       {
       BT1.write(envio[i]);     
       }
       a=false;
     }
     
  }   
  
