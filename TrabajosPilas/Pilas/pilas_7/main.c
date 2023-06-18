#include <stdio.h>
#include <stdlib.h>
#include "../pila.h"
// Pasar el último elemento (base) de la pila DADA a su primera posición (tope), dejando los restantes elementos en el mismo orden.

int main()
{

    Pila original, copia, base;

    inicpila(&original);
    inicpila(&copia);
    inicpila(&base);

    leer(&original);
    leer(&original);
    leer(&original);





    while(!pilavacia(&original))
    {
        apilar(&copia, desapilar(&original));
    }

    apilar(&base, desapilar(&copia)); /// copiamos tope q en realidad es la base en BASE


    while(!pilavacia(&copia))
    {
        apilar(&original, desapilar(&copia));
    }
    apilar(&original, desapilar(&base));

    mostrar(&original);
    return 0;
}
