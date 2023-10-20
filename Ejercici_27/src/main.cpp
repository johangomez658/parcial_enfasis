//#27factorial de un numero de n numero



#include<Arduino.h> // libreria principal


void setup (){       //funcion principal 
   
   Serial.begin(115200); // inicial puerto serial 
   Serial.println(); //salto de linea
     
    int factorial =1;
    Serial.println("digite un numero");
    while (!Serial.available()) {} //pausar el codigo hasta que el usuario inserte el numero
    int numero = Serial.parseInt();//escriba el usuario lo convierte a entero  y lo guarda en numero

   for(int i=1;i<=numero;i++){
   factorial = factorial * i;
   }

  Serial.println("factorial del numero es"+ String(factorial));//imprimir lo que hay en factorial
}


   void loop(){
   
}