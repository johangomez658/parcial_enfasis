//paso por referencia 
//ejercicio 69

#include<Arduino.h> // libreria principal



void setup (){       //funcion principal 
   
   Serial.begin(9600); // inicial puerto serial 
   Serial.println(); //salto de linea
   
   void valNuevo(int&,int&);
  
   int num1,num2;

   Serial.println("digite numero1");//pedir al usuario el valor de x
   while (!Serial.available()) {} //pausar el codigo
    num1= Serial.parseInt();//lo que escriba el usuario lo convierte a entero  y lo guarda en x

   Serial.println("digite numero2 ");//pedir al usuario el valor de y
   while (!Serial.available()) {} //pausar el codigo
   num2= Serial.parseInt();//lo que escriba el usuar

      valNuevo(num1,num2);
  }
    void valNuevo(int& xnum,int& ynum){//parametros por paso de referencia(direccion d=&)
    Serial.println("valor numero1 es "+ String(xnum));
    Serial.println("valor numero1 es "+ String(ynum));
   }
void loop(){
}