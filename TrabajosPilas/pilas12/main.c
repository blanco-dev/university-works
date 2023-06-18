#include <stdio.h>
#include <stdlib.h>
#include "../pila.h"

/// 12. Suponiendo la existencia de una pila MODELO (vacía o no), eliminar de la pila DADA todos los elementos que existan en MODELO.

int main()
{
    Pila modelo, dada, aux, aux2;

    inicpila(&modelo);
    inicpila(&dada);
    inicpila(&aux);
    inicpila(&aux2);


    leer(&modelo);
    leer(&modelo);
    leer(&modelo);
    leer(&modelo);
    leer(&modelo);

    printf("PILA DADA:\n");
    leer(&dada);
    leer(&dada);
    leer(&dada);
    leer(&dada);
    leer(&dada);

    while(!pilavacia(&modelo) && !pilavacia(&dada)){
        if(tope(&modelo) == tope(&dada)) {
            apilar(&aux2, desapilar(&dada));
        } else if( tope(&modelo) != tope(&dada)){
            apilar(&aux, desapilar(&modelo));
        }

        while(!pilavacia(&aux2)) {
            apilar(&dada, desapilar(&aux2));
        }
        apilar(&aux, desapilar(&modelo));
}

    mostrar(&dada);


    return 0;
}
