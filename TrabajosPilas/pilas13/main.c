#include <stdio.h>
#include <stdlib.h>
#include "../pila.h"

/// 14. Determinar si la cantidad de elementos de la pila DADA es par.
/// Si es par, pasar el elemento del tope de la pila AUX a la pila PAR y si es impar pasar el tope a la pila IMPAR. (NO contar los elementos)

int main()
{
    Pila dada, aux, par, impar;

    inicpila(&dada);
    inicpila(&aux);
    inicpila(&par);
    inicpila(&impar);

    leer(&dada);
    leer(&dada);
    leer(&dada);
    leer(&dada);


    while (!pilavacia(&dada)) {
        apilar(&aux, desapilar(&dada));
        if(!pilavacia(&dada)){
            apilar(&aux, desapilar(&dada));
        } else {
            apilar(&impar, desapilar(&aux));
        }
    }


    if (!pilavacia(&impar)) {
        printf("FORRO ES IMPAR");
    } else {
        apilar(&par, desapilar(&aux));
        printf("FORRO ES PAR");
    }

    return 0;
}
