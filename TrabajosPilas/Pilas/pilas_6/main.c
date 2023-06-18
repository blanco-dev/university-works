#include <stdio.h>
#include <stdlib.h>
#include "pila.h"

int main()
{
    Pila auxTope, aux1, aux2;

    inicpila (&auxTope);
    inicpila (&aux1);
    inicpila (&aux2);


    leer (&aux1); //1
    leer (&aux1); //2
    leer (&aux1); //3
    leer (&aux1); //4

    apilar(&auxTope,desapilar (&aux1) );

    while (!pilavacia(&aux1))
    {

        apilar(&aux2, desapilar(&aux1));

    }

    apilar(&aux1, desapilar(&auxTope));

    while(!pilavacia(&aux2))
    {


        apilar (&aux1, desapilar(&aux2 ));

    }


    mostrar(&aux1);


    return 0;
}
