#include<Arduino.h> // libreria principal
#include<stdlib.h> // libreria principal funciona new y delete
   void mostrarnota();
   void pedirnotas();//crear funcion

   int numcalif,*calif; 
   


    
void setup (){       //funcion principal 
   
   Serial.begin(9600); // inicial puerto serial 
   Serial.println(); //salto de linea
   
   pedirnotas();
     mostrarnota();

     delete [] calif;//liberado el espacio en bytes utilizandos anterior mente 

}
void pedirnotas (){   //no me retorna nada

    Serial.println("digite el numero de calificaciones");//pedir al      usuario numero de cañlificaciones
     while (!Serial.available()) {} //pausar el codigo

     numcalif= Serial.parseInt();//lo que escriba el usuario lo guarda en numcalif


       calif = new int[numcalif];//crear areglo
  
         for(int i=0;i<numcalif;i++){
           Serial.println("digite el numero de notas");//pedir al      usuario numero de notas
     while (!Serial.available()) {} //pausar el codigo

     calif[i]= Serial.parseInt();//lo que escriba el usuario lo guarda en calif

   }
 }

void mostrarnota (){
Serial.println("mostrar notas de usuario");
    for(int i=0;i<numcalif;i++){
      
    Serial.println("calificacion"+ String(calif[i]));
     }
 }

    void loop(){
  
}