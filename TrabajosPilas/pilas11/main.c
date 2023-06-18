#include <stdio.h>
#include <stdlib.h>
#include "../pila.h"

///11. Suponiendo la existencia de una pila MODELO que no esté vacía, eliminar de la pila DADA todos los elementos que sean iguales al tope de la pila MODELO.


int main()
{
    Pila modelo, dada, aux;

    inicpila(&modelo);
    inicpila(&dada);
    inicpila(&aux);


    leer(&modelo);
    printf("PILA DADA:\n");
    leer(&dada);
    leer(&dada);
    leer(&dada);
    leer(&dada);
    leer(&dada);
    leer(&dada);
    leer(&dada);

    leer(&dada);

    while(!pilavacia(&modelo) && !pilavacia(&dada))
    {
        if(tope(&modelo) != tope(&dada))
        {
            apilar(&aux, desapilar(&dada));
        }
        else
        {
            desapilar(&dada);
        }
    }

    while(!pilavacia(&aux)){
        apilar(&dada, desapilar(&aux));
    }


    printf("//////////////////////////PILA DADA//////////////////////////");
    mostrar(&dada);

    printf("//////////////////////////PILA MODELO////////////////////////////");
    mostrar(&modelo);

    return 0;
}
