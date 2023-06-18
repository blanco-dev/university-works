#include <stdio.h>
#include <stdlib.h>
#include "../pila.h"

int main()
{

    Pila pila1, aux, aux2, descarte;

    int topesVar;
    inicpila(&pila1);
    inicpila(&aux);
    inicpila(&aux2);
    inicpila(&descarte);

    char op = 's';

    do
    {
        leer(&pila1);
        printf("Ingrese s para continuar, o ingrese otra letra: \n");
        fflush(stdin);
        scanf("%c",&op);
    }
    while (op == 's');

    while(!pilavacia(&pila1))
    {
        topesVar = tope(&pila1);
        apilar(&aux, topesVar);
        apilar(&aux2, desapilar(&pila1));
    }

    while(!pilavacia(&aux2)) {
        apilar(&pila1, desapilar(&aux2));
    }

    while(!pilavacia(&pila1) && !pilavacia(&aux) && tope(&pila1) == tope(&aux)) {
        apilar(&descarte, desapilar(&pila1));
        apilar(&descarte, desapilar(&aux));
    }

    if(pilavacia(&pila1) && pilavacia(&aux)) {
        printf("Tu pila es capicua");
    } else {
        printf("Tu pila NO es capicua, FORRO DE MIERDA HDP");
    }



    printf("--------AUX--------");
    mostrar(&aux);

    printf("--------AUX 2--------");
    mostrar(&aux2);

    printf("--------PILAAA 1--------");
    mostrar(&pila1);

    printf("--------DESCARTE--------");
    mostrar(&descarte);


    return 0;
}
