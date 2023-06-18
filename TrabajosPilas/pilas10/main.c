#include <stdio.h>
#include <stdlib.h>
#include "../pila.h"

/// Dadas dos pilas A y B que simulan conjuntos (cada conjunto no tiene elementos repetidos sobre sí mismo), realizar un programa que calcule en la pila C la operación de unión.
/// A : base 1 2 3  tope
/// B: base 2 3 5 7 tope
/// Pila AUB = base 3 2 1 7 5 tope


int main() {
    Pila a, b, c, aux, repetidos;

    inicpila(&a);
    inicpila(&b);
    inicpila(&c);
    inicpila(&aux);
    inicpila(&repetidos);

    char op;

    do {
        printf("Ingrese datos para la pila A: \n");
        leer(&a);
        printf("Ingrese s para continuar, o ingrese otra letra: \n");
        fflush(stdin);
        scanf("%c",&op);
    } while (op == 's');

    do {
        printf("Ingrese datos para la pila B: \n");
        leer(&b);
        printf("Ingrese s para continuar, o ingrese otra letra: \n");
        fflush(stdin);
        scanf("%c",&op);
    } while (op == 's');

    while(!pilavacia(&a)){
        while(!pilavacia(&b)){
            if(tope(&a) == tope(&b)){
                apilar(&repetidos, desapilar(&b));
            } else {
                apilar(&aux, desapilar(&b));
            }
        }
            apilar(&c, desapilar(&a));
            while(!pilavacia(&aux)) {
                apilar(&b, desapilar(&aux));
            }
    }

    while(!pilavacia(&b)){
        apilar(&c, desapilar(&b));
    }

    printf("------------------------PILA A-----------");
    mostrar(&a);
        printf("------------------------PILA B-----------");
    mostrar(&b);
        printf("------------------------PILA C-----------");
    mostrar(&c);
        printf("------------------------AUX-----------");
    mostrar(&aux);
        printf("------------------------REPETIDOS-----------");
    mostrar(&repetidos);


    return 0;
}
