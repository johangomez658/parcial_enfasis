//realize un programa que lea una matriz de 3x3 y cree su matriz traspuesta.
//matriz traspuesta es aquella en la que la columna i era la fila i de la matriz original
//123  ----- 147
//456  ----- 258
//789  ----- 369

#include<Arduino.h> // libreria principal



void setup (){       //funcion principal 
   
   Serial.begin(9600); // inicial puerto serial 
   Serial.println(); //salto de linea
   
   int numeros[3][3];//de claramos la matriz tipo entera3x3
 //se ingresa datos por usuario para la matriz   
    for(int i=0;i<3;i++){   //bucles comensamos desde i=0 y i<3
        for(int j=0;j<3;j++){

        Serial.println("digite un numero");//pedir al usuario el valor de x
        while (!Serial.available()) {} //pausar el codigo
        numeros [i][j]= Serial.parseInt();//lo que escriba el usuario lo convierte a entero  y lo guarda en
       }
   }
   Serial.println("matriz original es:");
   for(int i=0;i<3;i++){   //filas
       for(int j=0;j<3;j++){ //columnas
       Serial.print(numeros[i][j]);
     }
      Serial.print("\t");
    
   }
   Serial.println("matriz transpuesta:");
   for(int i=0;i<3;i++){   
       for(int j=0;j<3;j++){
      Serial.print(numeros[j][i]);
     }
      Serial.print("\t");
    
   }
}
     void loop(){
  
}