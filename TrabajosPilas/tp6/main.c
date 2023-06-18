#include <stdio.h>
#include <stdlib.h>
#include "../pila.h"

/// 6. Hacer una función que inserta en una pila ordenada un nuevo elemento, conservando el orden de ésta.


void pilaOrdenada(Pila *pila, Pila *num);

int main() {

    Pila pila;
    inicpila(&pila);
    Pila num;
    inicpila(&num);
    apilar(&pila, 5);
    apilar(&pila, 4);
    apilar(&pila, 3);
    printf("Ingrese el numero: \n");
    fflush(stdin);
    leer(&num);

    pilaOrdenada(&pila, &num);

    mostrar(&pila);
    return 0;
}


void pilaOrdenada(Pila *pila, Pila *num){
    Pila aux;
    inicpila(&aux);
    Pila aux2;
    inicpila(&aux2);


    while(!pilavacia(pila)){
        apilar(&aux, desapilar(pila));

        while(!pilavacia(&aux)){
        if(tope(&aux) > tope(num)){
            apilar(&aux2, desapilar(num));
            apilar(&aux2, desapilar(&aux));
        } else {
            apilar(&aux2, desapilar(&aux));
        }
    }
    }

    //apilar(&aux2, desapilar(num));

    //apilar(pila, desapilar(num));
    //mostrar(num);

    while(!pilavacia(&aux2)){
        apilar(pila, desapilar(&aux2));
    }

}
