#include <stdio.h>
#include <stdlib.h>
#include "pila.h"

/// Suponiendo la existencia de una pila MODELO que no esté vacía,
/// eliminar de la pila DADA todos los elementos que sean iguales al tope de la pila MODELO.

void cargarPila(Pila dato);
void mostrarPila()
void compararDatosPila();

int main(){

    Pila modelo;
    inicpila(&modelo);





    return 0;
}


void cargarPila(Pila dato){
    char op = 's';

    while(op == 's') {
        leer(dato);
        printf("Desea continuar? (s/n)");
        fflush(stdin);
        scanf("%c", &op);
    }
}


void mostrarPila(){

}

void compararDatosPila(){

}
