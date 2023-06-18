#include <stdio.h>
#include <stdlib.h>
#include "../pila.h"


int main()
{

    Pila DADA, aux1, aux2;

    inicpila(&DADA);
    inicpila(&aux1);
    inicpila(&aux2);


    leer(&DADA);
    leer(&DADA);
    leer(&DADA);
    leer(&DADA);

    mostrar(&DADA);

    while(!pilavacia(&DADA)) {
        apilar(&aux1, desapilar(&DADA));
    }

    while(!pilavacia(&aux1)) {
        apilar(&aux2, desapilar(&aux1));
    }

    while(!pilavacia(&aux2)) {
        apilar(&DADA, desapilar(&aux2));
    }


    printf("////////////////// DADA ESTA ABAJO");

    mostrar (&DADA);

    return 0;
}

