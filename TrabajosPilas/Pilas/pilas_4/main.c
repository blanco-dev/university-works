#include <stdio.h>
#include <stdlib.h>
#include "../pila.h"

int main()
{
    printf("Hello world!\n");
    Pila DESTINO, ORIGEN, TERCERA;

    inicpila(&DESTINO);
    inicpila(&ORIGEN);
    inicpila(&TERCERA);


    leer(&ORIGEN);
    leer(&ORIGEN);
    leer(&ORIGEN);
    leer(&ORIGEN);
    leer(&ORIGEN);
    leer(&ORIGEN);

    mostrar(&ORIGEN);


    while (!pilavacia(&ORIGEN))
    {

        apilar(&TERCERA, desapilar(&ORIGEN));
    }


    while (!pilavacia(&TERCERA))
    {
        apilar(&DESTINO, desapilar(&TERCERA));
    }

    mostrar(&DESTINO);

    return 0;
}
