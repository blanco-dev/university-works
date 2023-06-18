#include <stdio.h>
#include <stdlib.h>
#include "../../pila.h"

void cargarPila(Pila *pilita);
void insertar(Pila *pilita, int dato);

int main() {
    int dato = 0;
    Pila pilita;
    inicpila(&pilita);

    cargarPila(&pilita);

    printf("Ingrese el dato que desea insertar: ");
    scanf("%i",&dato);

    insertar(&pilita, dato);

    mostrar(&pilita);

    return 0;
}


void cargarPila(Pila *pilita){
    char op = 's';

    while(op == 's'){
        leer(pilita);
        printf("Desea continuar? (s/n)");
        fflush(stdin);
        scanf("%c", &op);
    }
}

void insertar(Pila *pilita, int dato){
    Pila aux;
    inicpila(&aux);

    while(!pilavacia(pilita) && tope(pilita) > dato){
        apilar(&aux, desapilar(pilita));
    }
        apilar(pilita, dato);

    while(!pilavacia(&aux)){
        apilar(pilita, desapilar(&aux));
    }
}

void ordenamientoInsercion( ) {


}

