#include <stdio.h>
#include <stdlib.h>
#include "../pila.h"

/// 9. Comparar la cantidad de elementos de las pilas A y B. Mostrar por pantalla el resultado.

int main()
{
    char control_;

    Pila a, b, aux1, aux2;

    inicpila(&a);
    inicpila(&b);
    inicpila(&aux1);
    inicpila(&aux2);


    do
    {
        leer(&a);
        printf("\n\nDesea continuar agregandole valores a la Pila A?\n\nIngrese la tecla S en miniscula para continuar, o ingrese otra letra para terminar el proceso:   \n");
        fflush(stdin);
        scanf("%c", &control_);
    }
    while (control_ == 's');

    printf("\nPILA B\n");
    do
    {
        leer(&b);
        printf("\n\nDesea continuar agregandole valores a la Pila B?\n\nIngrese la tecla S en miniscula para continuar, o ingrese otra letra para terminar el proceso:   \n");
        fflush(stdin);
        scanf("%c", &control_);
    }
    while (control_ == 's');

    while (!pilavacia(&a) && !pilavacia(&b))
    {
        apilar(&aux1, desapilar(&a));
        apilar(&aux2, desapilar(&b));
    }
    if (pilavacia(&a) && pilavacia(&b))
    {
        printf("\nAmbas pilas contienen la misma cantidad de elementos.");
    }
    else if (!pilavacia(&a))
    {
        printf("\n\nLa pila A contiene mas valores que la pila B");
    }
    else
    {
        printf("\n\nLa pila B contiene mas valores que la pila A");
    }


    return 0;
}
