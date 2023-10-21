//realice una funcion recursiva que sume los dos primeros n enteros positivos,

//nota para plnatear la funcion recursiva tenga en cuenta que la suma puede expresarse,
//mediante recurrencia:


//suma(n)=1
//n+suma(n-1),si n=1 ,si n>1
#include<Arduino.h> // libreria principal
  
void setup (){       //funcion principal 
   
   Serial.begin(9600); // inicial puerto serial 
   Serial.println(); //salto de linea
   
    int sumar(int);//lib
    int nElementos;

    do{
       Serial.println("digite el numero de vectores");//pedir al usuario el valor de x
       while (!Serial.available()) {} //pausar el codigo
       nElementos= Serial.parseInt();//lo que escriba el usuario lo convierte a entero  y lo guarda en x
       }while(nElementos>=0);
        Serial.println("la suma es "+ sumar(nElementos));
     

//funcion recursiva
int sumar(int n){
         int suma=0;

         if(n==1){//caso base
             suma=1;
             }
        else{//caso general
             suma=n+sumar(n-1);

            }
          return suma;

  }  

}
    

void loop(){
}