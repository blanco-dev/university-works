#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
     int legajo;
     char nombre[20];
     int edad;
} stPersona;

typedef struct nodoArbol {
     stPersona dato;
     struct nodoArbol * izq;
     struct nodoArbol * der;
} nodoArbol;




int main () {



    return 0;
}


/// Hacer una función que permita ingresar nuevos nodos manteniendo el árbol ordenado (por legajo).


nodoArbol *inicArbol() {
    return NULL;
}

nodoArbol *crearNodoArbol(stPersona perAux) {
    nodoArbol *aux = (nodoArbol*) malloc(sizeof(nodoArbol));
    aux->dato = perAux;
    aux->izq = NULL;
    aux->der = NULL;

    return aux;
}
