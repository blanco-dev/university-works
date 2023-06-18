#include <stdio.h>
#include <stdlib.h>
#include "../pila.h"

/// Encontrar el menor elemento de una pila y guardarlo en otra. (sin variables enteras, solo pilas)

int main()
{

    Pila pila1, menores, max, min;

    inicpila(&pila1);
    inicpila(&max);
    inicpila(&menores);
    inicpila(&min);

    char op = 's';

    do
    {
        leer(&pila1);
        printf("Ingrese s para continuar, o ingrese otra letra: \n");
        fflush(stdin);
        scanf("%c",&op);
    }
    while (op == 's');


    while(!pilavacia(&pila1)){
        apilar(&menores, desapilar(&pila1));

        while(!pilavacia(&pila1)){

            if(tope(&pila1) > tope(&menores)){
                apilar(&max, desapilar(&pila1));
            } else {
                apilar(&max, desapilar(&menores));
                apilar(&menores, desapilar(&pila1));
            }
        }
    }

    printf("--------------------PILA 1 --------------");
    mostrar(&pila1);
    printf("--------------------Mayores --------------");
    mostrar(&max);
    printf("--------------------Menores --------------");
    mostrar(&menores);
    return 0;
}
