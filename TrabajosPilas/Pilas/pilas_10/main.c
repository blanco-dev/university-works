#include <stdio.h>
#include <stdlib.h>
#include "../pila.h"

/// Cargar las pilas A y B, y luego compararlas, evaluando si son completamente iguales
///(en cantidad de elementos, valores que contienen y posición de los mismos). Mostrar por pantalla el resultado

int main() {
    char continuar='s', finalizar;
    Pila pilaA,pilaB, auxiliar1, auxiliar2;
    inicpila(&pilaA);
    inicpila(&pilaB);
    inicpila(&auxiliar1);
    inicpila(&auxiliar2);

    do
    {
        leer(&pilaA);
        printf("Desea seguir con el ingreso? s para si otro caracter para no: ");
        fflush(stdin);
        scanf("%c", &continuar);
    }
    while (continuar=='s');

    printf("\n\n-----------Ahora procede la carga de la otra pila----------\n\n");

    do
    {
        leer(&pilaB);
        printf("Desea finalizar con el ingreso? f para si otro caracter para no: ");
        fflush(stdin);
        scanf("%c", &finalizar);
    }
    while (finalizar=='f');

    while (!pilavacia(&pilaA) && !pilavacia(&pilaB))
    {
        apilar(&auxiliar1,desapilar(&pilaA));
        apilar(&auxiliar2,desapilar(&pilaB));
    }


    if (pilavacia(&pilaA) && pilavacia(&pilaB))
    {
        printf("\n\n-----------Las dos pilas tienen la misma cantidad de elementos-----------\n\n");
    }
    else if (!pilavacia(&pilaA))
    {
        printf("\n\n-----------La pila A tiene mas elementos\n\n-----------");
    }
    else
    {
        printf("\n\n-----------La pila B tiene mas elementos-----------\n\n");
    }


    while (!pilavacia(&auxiliar1) && !pilavacia(&auxiliar2))
    {
        apilar(&pilaA,desapilar(&auxiliar1));
        apilar(&pilaB,desapilar(&auxiliar2));

    }


    while (!pilavacia(&pilaA) && !pilavacia(&pilaB) && tope(&pilaA)==tope(&pilaB))
    {

        apilar(&auxiliar1, desapilar(&pilaA));
        apilar(&auxiliar2, desapilar(&pilaB));
    }


    if (pilavacia(&pilaA)&& pilavacia(&pilaB))
    {
        printf("\n\n-----------Las pilas son iguales en la posicion de sus elementos-----------\n\n");
    }
    else
    {
        printf("\n\n-----------Las pilas no son iguales en su posicion-----------\n\n");

    }

    return 0;
}
