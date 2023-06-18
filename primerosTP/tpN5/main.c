#include <stdio.h>
#include <stdlib.h>
#include "pila.h"

/** 5. Cargar desde el teclado la pila DADA.
       Invertir la pila de manera que DADA contenga los elementos cargados originalmente en ella, pero en orden inverso.*/

void cargarPila(Pila *dada);
void invertirPila(Pila *dada);

int main(){
    Pila dada;
    inicpila(&dada);
    cargarPila(&dada);

    invertirPila(&dada);

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

void invertirPila(Pila *dada){
    Pila aux;
    inicpila(&aux);

    Pila aux2;
    inicpila(&aux2);

    while(!pilavacia(dada)){
        apilar(&aux2, desapilar(dada));
    }

    while(!pilavacia(&aux2)){
        apilar(&aux, desapilar(&aux2));
    }

    while(!pilavacia(&aux)){
        apilar(dada, desapilar(&aux));
    }
}
