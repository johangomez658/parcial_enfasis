// ejercicio 15
// realice un programa que lea un valor entero y determine si se trata de un numero par o impar

#include <Arduino.h> // libreria principal

void setup()
{ // funcion principal

  Serial.begin(9600); // inicial puerto serial
  Serial.println();   // salto de linea

  Serial.println("digite un numero"); // pedir al usuario
  while (!Serial.available()){}                               // pausar el codigo
  int numero = Serial.parseInt(); // escriba el usuario lo convierte a entero  y lo guarda en NUMERO

  if (numero == 0){ // dividir numero entredos y lo que saca es el residuo de la division
    Serial.println("numero es cero" + String(numero));
      }
      else if (numero % 2 == 0) { // numero se divide entre dos saca residuo de la division
      Serial.println("numero es par" + String(numero));
      }
       else{
          Serial.println("numero es impar" + String(numero));
       }
}
void loop()
{
}