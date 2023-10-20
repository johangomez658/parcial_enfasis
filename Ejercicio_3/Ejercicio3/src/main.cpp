// tipos de datos basicos
//  serial.printl(letras3[i]); es igual aaaa cout<< (letras3[i])<<end;

// tipos de datos basicos
//  serial.printl(letras3[i]); es igual aaaa cout<< (letras3[i])<<end;
#include <Arduino.h> // libreria principal

void setup()
{ // funcion principal

  Serial.begin(9600); // inicial puerto serial
  Serial.println();   // salto de linea

  int entero = 15;        // variable entera
  float flotante = 10.45; // variable flotante decimales
  double mayor = 16.3456; // asignar o guardar numeros mas entesos
  char saludo = 'a';      // varible caracter

  Serial.println("mi numero es:" + String(entero)); // validar si lo que el usuario digito quedo almacenado
}
void loop()
{
}
