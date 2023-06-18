#include <stdio.h>
#include <stdlib.h>
#include "pila.h"

///Sumar los elementos de una pila (usar variables enteras)

int main() {

    Pila num1;

    inicpila(&num1);

    int suma = 0;

    leer(&num1);
    leer(&num1);

    for(int i = 0; i<2; i++) {

        suma += tope(&num1);
        desapilar(&num1);
    }

    printf("Su suma es %i",suma);

    return 0;
}
