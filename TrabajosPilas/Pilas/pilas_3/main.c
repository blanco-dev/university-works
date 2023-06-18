#include <stdio.h>
#include <stdlib.h>
#include "pila.h"


///3. Cargar desde teclado una pila DADA y pasar a la pila DISTINTOS
/// Todos aquellos elementos distintos al valor 8.
int main()
{
    Pila DADA, DISTINTOS,aux1;
    inicpila (&DADA);
    inicpila (&DISTINTOS);
    inicpila (&aux1);
    leer(&DADA);
    leer(&DADA);
    leer(&DADA);
    leer(&DADA);
    leer(&DADA);
    leer(&DADA);
    leer(&DADA);
    leer(&DADA);
    mostrar(&DADA);

    while(!pilavacia(&DADA)){

        if (tope(&DADA) == 8){

        apilar(&aux1, desapilar(&DADA));

    } else{

      apilar(&DISTINTOS, desapilar(&DADA));

    }

    }
 mostrar(&aux1);

mostrar(&DISTINTOS);

}
