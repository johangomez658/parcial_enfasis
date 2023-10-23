// punteros a estructura
#include <Arduino.h> // libreria principal

struct persona
{
  char nombre[30];
  int edad;
} persona, *puntero_persona = &persona; // variable normal tipo estructura y señalar con mi variable tipo puntero señala memeria

void pedirdatos();
void mostrardatos(persona *);

void setup()
{ // funcion principal

  Serial.begin(9600); // inicial puerto serial
  Serial.println();   // salto de linea

  pedirdatos();
  mostrardatos(puntero_persona); // variable puntero tipo persona
}

void pedirdatos()
{

  Serial.println("digite su nombre"); // pedir al usuario el nombre
  while (!Serial.available()) {} // pausar el codigo

  int.getline(puntero_persona->nombre, 30) = Serial.parseInt(); // lo que escriba el usuario lo guarda en nombre

  Serial.println("digite su edad"); // pedir al usuario el edad
  while (!Serial.available()){} // pausar el codigo

  puntero_persona->edad = Serial.parseInt(); // lo que escriba el usuario lo guarda en edad
}

void mostrardatos(persona *puntero_persona){

  Serial.println("su nombre" + String(puntero_persona->nombre));
  Serial.println("su nombre" + String(puntero_persona->edad));
}
  void loop()
  {
  }