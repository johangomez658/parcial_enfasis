//realiza una funcion que tome como parametros un vector de numeros
//y su tamaño cambie el signo de elementos del vector


#include<Arduino.h> // libreria principal

   void pedirdatos();//lib
   void cambiarsigno(int vec[],int);
   void mostrarvector(int vec[],int);


   int vec[100],tam;//libr
void setup (){       //funcion principal 
   
   Serial.begin(9600); // inicial puerto serial 
   Serial.println(); //salto de linea
   
  

    pedirdatos();
    cambiarsigno(vec,tam);
    mostrarvector(vec,tam);

}
void pedirdatos(){//void loop

   Serial.println("digite tamaño del vectorde vector");//pedir al usuario el valor de x
   while (!Serial.available()) {} //pausar el codigo
   tam= Serial.parseInt();//lo que escriba el usuario lo convierte a entero  y lo guarda en x


    for (int i=0;i<tam;i++){
     Serial.println("digite un numero "+ (i+1));
     while (!Serial.available()) {} //pausar el codigo
     vec[i]= Serial.parseInt();//lo que escriba el usuar
   
     }
}
void cambiarsigno(int vec[],int tam){
     for (int i=0;i<tam;i++){
      vec[i] *=-1;//vec[i]=vec[i]*-1 cada posicion por- 1
   }
}

void mostrarvector(int vec[],int tam){
     
   Serial.println("\nmostrarvector con signo cambiado");
     for (int i=0;i<tam;i++){
      while (!Serial.available()) {} //pausar el codigo
      vec[i]= Serial.parseInt();//lo que escriba el usuar
    }  
  }
    

void loop(){
}