//defina una estructura que indique el tiempo empleado por un ciclista en 
//una etapa la estructura debe tener tres campos :horas,minutos y segundos
//escriba un programa que dado n etapas calcule el tiempo total empleado 
//en corrrer todas la estapas.


#include<Arduino.h> // libreria principal

   struct Etapas {
   int horas;// variable 
   int minutos; //variable entera
   int segundos;
}et[100];

void setup (){       //funcion principal 
   
   Serial.begin(9600); // inicial puerto serial 
   Serial.println(); //salto de linea

   int n_etapas,horasT=0,minutosT=0,segundosT=0;

  Serial.println("numero de etapas");//pedir al usuario el valor de x
  while (!Serial.available()) {} //pausar el codigo
  n_etapas= Serial.parseInt();//lo que escriba el usuario lo convierte
   
  for(int i=0;i<n_etapas;i++){

      Serial.println("horas:");//pedir al usuario el valor de x
      while (!Serial.available()) {} //pausar el codigo
      et[i].horas= Serial.parseInt();//lo que escriba el usuario lo convierte
  

      Serial.println("minutos:");//pedir al usuario el valor de x
      while (!Serial.available()) {} //pausar el codigo
      et[i].minutos= Serial.parseInt();//lo que escriba el usuario lo con

      Serial.println("segundos:");//pedir al usuario el valor de x
      while (!Serial.available()) {} //pausar el codigo
      et[i].segundos= Serial.parseInt();//lo que escriba el usuario lo con


        horasT=horasT + et[i].horas;
        minutosT=minutosT + et[i].minutos;
        if(minutosT>=60){
           minutosT-=60;
           horasT++;
       }
       
       segundosT=segundosT + et[i].segundos;
        if(segundosT>=60){
           segundosT-=60;
           minutosT++;

          }
      Serial.println(); //salto de linea
}


   Serial.println("\nTIEMPO TOTAL");
   Serial.println("HORAS"+ String(horasT));
   Serial.println("MINUTOS"+ String(minutosT));
   Serial.println("SEGUNDOS"+ String(segundosT));
  
}
void loop(){
  
}