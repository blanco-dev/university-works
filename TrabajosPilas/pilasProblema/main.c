#include <stdio.h>
#include <stdlib.h>
#include "../pila.h"


int main()
{
    Pila Origen, Distinto;
    inicpila(&Origen);
    inicpila(&Distinto);
    leer(&Origen);
    while (tope(&Origen) < 5)
    {
        if (!pilavacia(&Origen))
        {
            apilar (&Distinto, desapilar(&Origen));
        }
    }
    mostrar(&Distinto);
    return 0;
}
