#include <stdio.h>
#include <stdlib.h>
#include "../pila.h"

int cargarPila (Pila *dada);
void pasajeDeElementos (Pila * distintos, Pila *dada);
void determinarParidad (Pila dada, Pila *par, Pila *impar, int validos);
void conjuntos (Pila *pilaOrdenada, Pila *dada, Pila *distintos);

int main ( ) {

    Pila dada;
    inicpila(&dada);

    Pila distintos;
    inicpila(&distintos);

    Pila par;
    inicpila(&par);

    Pila impar;
    inicpila(&impar);

    Pila pilaOrdenada;
    inicpila(&pilaOrdenada);

    int validos = cargarPila(&dada);
    int validos2 = cargarPila(&distintos);
    //determinarParidad(dada, &par, &impar, validos);

    //pasajeDeElementos (&distintos, &dada);
    conjuntos(&pilaOrdenada, &dada, &distintos);

    mostrar(&pilaOrdenada);
    return 0;
}

int cargarPila(Pila *dada){
    char op = 's';
    int i = 0;
    do {
        leer(dada);
        i++;
        printf("Desea continuar? (s/n) \n");
        fflush(stdin);
        scanf("%c", &op);
    } while (op == 's');

    return i;
}

void pasajeDeElementos (Pila * distintos, Pila *dada){
    Pila aux;
    inicpila(&aux);

    while(!pilavacia(dada)){
        if(tope(dada) != 8){
            apilar(distintos, desapilar(dada));
        } else {
            apilar(&aux, desapilar(dada));
        }
    }

    while(!pilavacia(&aux)){
        apilar(dada, desapilar(&aux));
    }
}

void determinarParidad(Pila dada, Pila *par, Pila *impar, int validos){

    if (tope(&dada) %2 == 0)
        apilar(par, desapilar(&dada));
    else
        apilar(impar, desapilar(&dada));

}

void conjuntos(Pila *pilaOrdenada, Pila *dada, Pila *distintos){

    while(!pilavacia(dada) && !pilavacia(distintos)){

        if (tope(dada) > tope(distintos)) {
            apilar(pilaOrdenada, desapilar(dada));
        } else if (tope(distintos) < tope(dada)){
            apilar(pilaOrdenada, desapilar(distintos));
        }
    }
}

/// Hacer una función que pase todos los elementos de una pila a otra


void pilaToPila ( ) {



}
