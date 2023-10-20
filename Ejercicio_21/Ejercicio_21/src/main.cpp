// 21) la sentencia do while
// actua y luego piensa
// do se ejecuta una ves luego verifica la expresion while y copilar hasta que se deje de ejectuar la funcion
// conteo el numero de uno al 10

#include <Arduino.h> // libreria principal
#include <stdlib.h>

void setup()
{ // funcion principal

  Serial.begin(9600); // inicial puerto serial
  Serial.println();   // salto de linea

  int i;
  i = 1; // iterador
  do
  {
    Serial.println(i); // ejecute imprima i
    i++;               // aumenta el iterador 1 en 1
  } while (i <= 10);
}
void loop()
{
}