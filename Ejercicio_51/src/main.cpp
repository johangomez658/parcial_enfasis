//metodo burbuja


#include<Arduino.h> // libreria principal


void setup (){       //funcion principal 
   
   Serial.begin(9600); // inicial puerto serial 
   Serial.println(); //salto de linea
   
   
   int numeros[]= {4,1,2,3,5};
   int i,j,aux;
   
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
         if(numeros[j]>numeros[j+1]){
            aux=numeros[j];
            numeros[j]=numeros[j+1];
            numeros[j+1]=aux;

         }
      }
   }
   
      for(i=0;i<5;i++){
    
     } 
   
    Serial.println("orden ascedente:"+ String(numeros[i]));
     


    
   }
     void loop(){
  
}

