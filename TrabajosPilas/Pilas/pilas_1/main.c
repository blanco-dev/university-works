#include <stdio.h>
#include <stdlib.h>
#include "pila.h"


int main() {

    /// Cargar desde el teclado una pila DADA con 5 elementos. Pasar
    /// Los tres primeros elementos que se encuentren en el tope a la pila AUX1 y los restantes a la pila AUX2, ambas pilas inicializadas.


    Pila pila1, pila2, aux1, aux2;

    inicpila (&pila1);

    inicpila (&aux1);
    inicpila (&aux2);

    leer(&pila1);
    leer(&pila1);
    leer(&pila1);
    leer(&pila1);
    leer(&pila1);
    mostrar(&pila1);

    apilar(&aux1, desapilar(&pila1));
    apilar(&aux1, desapilar(&pila1));
    apilar(&aux1, desapilar(&pila1));

    apilar(&aux2, desapilar(&pila1));
    apilar(&aux2, desapilar(&pila1));


    mostrar(&aux1);
    mostrar(&aux2);

    return 0;
}
