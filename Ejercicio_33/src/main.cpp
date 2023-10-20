#include <arduino.h>

void setup() {
   Serial.begin(9600); // inicial puerto serial 
   Serial.println(); //salto de linea
    int n;
    printf("Ingrese el tamaño del vector: ");
    scanf("%d", &n);

    int vector[n];
    printf("Ingrese los elementos del vector: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &vector[i]);
    }

    int mayor = vector[0];
    for (int i = 1; i < n; i++) {
        if (vector[i] > mayor) {
            mayor = vector[i];
        }
    }

    printf("El mayor elemento del vector es: %d\n", mayor);
}

void loop(){
  

}