#include <stdio.h>
#include <stdlib.h>
#include "pila.h"

int main() {

    ///Cargar desde el teclado la pila ORIGEN e inicializar en vacío la pila DESTINO.
    ///Pasar todos los elementos de la pila ORIGEN a la pila DESTINO.

    Pila origen, destino;
    inicpila (&origen);
    inicpila (&destino);

    leer(&origen);
    leer(&origen);
    leer(&origen);
    leer(&origen);
    mostrar(&origen);

    while (!pilavacia(&origen))
    {

        apilar(&destino, desapilar(&origen));

    }

    mostrar(&origen);
    mostrar(&destino);


    return 0;
}
