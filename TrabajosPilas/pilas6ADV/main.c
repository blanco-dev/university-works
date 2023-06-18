#include <stdio.h>
#include <stdlib.h>
#include "../pila.h"

int main()
{
    Pila pila1, menores, max, auxMax;

    inicpila(&pila1);
    inicpila(&max);
    inicpila(&menores);
    inicpila(&auxMax);

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


    while(!pilavacia(&max)){
        apilar(&auxMax, desapilar(&max)); // mando el 5 para auxMax
        while(!pilavacia(&auxMax)){
            if(tope(&max) < tope(&auxMax)){
                apilar(&menores, desapilar(&max));
            } else {
                apilar(&menores, desapilar(&auxMax));
            }
        }
    }
            /*while(!pilavacia(&auxMax)) {
                apilar(&menores, desapilar(&menores));
            }*/

    printf("-----------------------AUXMAX------------");
    mostrar(&auxMax);
    printf("-----------------------MENORES------------");
    mostrar(&menores);
    printf("----------------------MAYORES------------");
    mostrar(&max);
    return 0;
}
