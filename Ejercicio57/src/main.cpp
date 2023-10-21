//ejercicio57estructuras basicas en c++


#include<Arduino.h> // libreria principal

   struct persona {
   char nombre[20];// variable char nombre con 20 espacio
   int edad; //variable entera
}
persona1 ={"wilson",20},
persona2 ={"gomez",15};

void setup (){       //funcion principal 
   
   Serial.begin(9600); // inicial puerto serial 
   Serial.println(); //salto de linea

  Serial.println("NOMBRE1"+ String(persona1.nombre));
  Serial.println("\nEDAD1"+ String(persona1.edad));
   
  Serial.println("NOMBRE2"+ String(persona2.nombre));
  Serial.println("\nEDAD2"+ String(persona2.edad));
  
}
void loop(){
}