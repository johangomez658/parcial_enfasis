//ejercicio 9 
//escriba un fragmento de programa que intercambie los valores de dos variables
#include<Arduino.h> // libreria principal



void setup (){       //funcion principal 
   
   Serial.begin(9600); // inicial puerto serial 
   Serial.println(); //salto de linea
   
   int aux;

   Serial.println("digite valor de x");//pedir al usuario el valor de x
   while (!Serial.available()) {} //pausar el codigo
   int x= Serial.parseInt();//lo que escriba el usuario lo convierte a entero  y lo guarda en x

   Serial.println("digite valor de y");//pedir al usuario el valor de y
   while (!Serial.available()) {} //pausar el codigo
   int y = Serial.parseInt();//lo que escriba el usuario lo convierte a entero  y lo guarda en y

   aux =x;  //aux guarda el valor de x
   x=y;  //x guarda el valor de y
   y=aux; //y guarda el valor de aux
   
 
    Serial.println("valor de x"+ String(x));

    Serial.println("valor de y"+ String(y));
    
   }
     void loop(){
  
}