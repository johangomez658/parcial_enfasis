//escribe un programa que lea de la entrada estadar un vector  de nuemeros y muestre en la salidad estadar los numeros del vector con sus indices asociados
#include <Arduino.h>
// Función para determinar el mayor elemento del vector
  int encontrarMayor(int vector[], int longitud) {
  int mayor = vector[0]; // Asignamos el primer elemento como el mayor
  
  // Recorremos el vector y comparamos cada elemento con el mayor actual
  for (int i = 1; i < longitud; i++) {
    if (vector[i] > mayor) {
      mayor = vector[i];
    }
  }
  
  return mayor;
}

void setup() {
  Serial.begin(9600); // Inicializamos la comunicación serial
  Serial.println(); //salto de linea

 

  int longitud; // Variable para almacenar la longitud del vector
  
  Serial.println("Ingrese la longitud del vector:");
  while (Serial.available() == 0) {} // Esperamos a que se ingrese un valor
  longitud = Serial.parseInt(); // Leemos el valor ingresado
  
  int vector[longitud]; // Creamos el vector con la longitud especificada

  // Leemos los elementos del vector
  for (int i = 0; i < longitud; i++) {
    Serial.print("Ingrese el elemento ");
    Serial.print(i);
    Serial.println(":");
    while (!Serial.available()) {}// Esperamos a que se ingrese un valor
    vector[i] = Serial.parseInt(); // Leemos el elemento ingresado
  }
  
  int mayor = encontrarMayor(vector, longitud); // Determinamos el mayor elemento
  
  // Mostramos el resultado
  Serial.print("El mayor elemento del vector es: ");
  Serial.println(mayor);
  }
  void loop() {
}