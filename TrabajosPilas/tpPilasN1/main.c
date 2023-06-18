#include <stdio.h>
#include <stdlib.h>
#include "pila.h"

/** Cargar desde el teclado una pila DADA con 5 elementos.
    Pasar los tres primeros elementos que se encuentren en el tope a la pila AUX1 y los restantes a la pila AUX2,
    ambas pilas inicializadas. */

int main() {

    Pila dada;
    inicpila(&dada);

    Pila aux1;
    inicpila(&aux1);

    Pila aux2;
    inicpila(&aux2);

    apilar(&dada, 5);
    apilar(&dada, 2);
    apilar(&dada, 15);
    apilar(&dada, 6);
    apilar(&dada, 12);


    apilar(&aux1, desapilar(&dada));
    apilar(&aux1, desapilar(&dada));
    apilar(&aux1, desapilar(&dada));
    apilar(&aux2, desapilar(&dada));
    apilar(&aux2, desapilar(&dada));

    printf("------------PILA AUX1--------------------\n");
    mostrar(&aux1);
    printf("------------PILA AUX2--------------------\n");
    mostrar(&aux2);
    printf("------------PILA DADA--------------------\n");
    mostrar(&dada);

    return 0;
}
