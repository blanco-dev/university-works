#include <stdio.h>
#include <stdlib.h>
#include "../pila.h"

void encontrarMenores(Pila *pila);


int main() {

    Pila bobo;
    inicpila(&bobo);
    leer(&bobo);
    leer(&bobo);
    leer(&bobo);
    encontrarMenores(&bobo);

    return 0;
}


void encontrarMenores(Pila *pila){

    Pila aux;
    inicpila(&aux);

    int valor;

    while(!pilavacia(pila)){
        valor = tope(pila);
        while(!pilavacia(pila)){
            apilar(&aux, desapilar(pila));

        if(valor > tope(&aux)){
            valor = tope(&aux);
            apilar(pila, desapilar(&aux));
        }
        }
    }

    mostrar(&aux);
    printf("El numero menor es: %i ", valor);
}
