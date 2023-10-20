//realize o concatenar una cadena con otra funcion(strcat())


#include<Arduino.h> // libreria principal


void setup (){       //funcion principal 
   
   Serial.begin(9600); // inicial puerto serial 
   Serial.println(); //salto de linea
   
   
   char cad1[]= "esto es una cadena";
   char cad2[]= "de ejemplo";
   char cad3[30];
  
   
      strcpy(cad3,cad1);//cad3 tiene lo de cad 1
      strcat(cad3,cad2);//cad3 + cad2

   
    Serial.println("cad3 es:"+ String(cad3));
    
   }
     void loop(){
  
}