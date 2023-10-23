
//105 nodo

#include<Arduino.h> // libreria principal
 struct nodo {
int dato;
nodo*siguiente;
};
//inserta un elemento en una lista
void inserta lista(Nodo *&,int);

void setup (){       //funcion principal 
   
   nodo*lista=NULL;
   int dato;



   Serial.println("digite un numero");//pedir al usuario el numero
   while (!Serial.available()) {} //pausar el codigo
   dato= Serial.parseInt();//lo que escriba el usuario lo guarda en dato

     insertarlista(lista,dato);
}
void insertarlista(Nodo *$lista,int n){
     Nodo *nuevo_nodo= new Nodo();

      nuevo_nodo->dato = n;
      Nodo *aux1=lista;
      Nodo *aux2;
     while ((aux1 != NULL) && (aux1-> dato >n)){
      aux2=aux1;
      aux1=aux1->siguiente;
}

     if(lista==aux1){
       lista =nuevo_nodo;
     }    
      else{
            aux2->siguiente = nuevo_nodo;
      } 
      nuevo_nodo->siguiente= aux1;
     
    Serial.println("elemento insertado"+ String(n)); 
}
     void loop(){
  
}