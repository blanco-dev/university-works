#include <stdio.h>
#include <stdlib.h>
#include "pila.h"

/**6. Pasar el primer elemento (tope) de la pila DADA a su última posición (base),
      dejando los restantes elementos en el mismo orden. */

void cargarPila(Pila *dada);
void baseATope(Pila *dada);

int main() {
    Pila dada;
    inicpila(&dada);

    cargarPila(&dada);
    baseATope(&dada);

    mostrar(&dada);
    return 0;
}

void cargarPila(Pila *dada){
    char op = 's';

    while(op == 's') {
        leer(dada);
        printf("Desea continuar? (s/n)");
        fflush(stdin);
        scanf("%c", &op);
    }
}


void baseATope(Pila *dada){
    Pila aux;
    inicpila(&aux);
    int aux1 = desapilar(dada);

    while(!pilavacia(dada)){
        apilar(&aux, desapilar(dada));
    }

    int aux2 = desapilar(&aux);
    apilar(dada,aux1);

    while(!pilavacia(&aux)){
        apilar(dada, desapilar(&aux));
    }

    apilar(dada,aux2);
}
