#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct nodoArbol {
    int dato;
    struct nodoArbol * izq;
    struct nodoArbol * der;
} nodoArbol;


nodoArbol *inicArbol();
nodoArbol *crearNodoArbol(int perAux);
void postorder(nodoArbol * arbol);
void preorder(nodoArbol * arbol);
void inorder(nodoArbol * arbol);
nodoArbol * insertar(nodoArbol * arbol, int dato);

int main () {

    int a[10]= {1,10,2,45,9,15,46,33,25,20};
    nodoArbol * arbol = inicArbol();

    for (int i=0; i<10; i++) {
        arbol = insertar(arbol, a[i]);
    }

    printf("PREORDER :");
    preorder(arbol);
    printf("\nINORDER :");
    inorder(arbol);
    printf("\nPOSTORDER :");
    postorder(arbol);

    return 0;
}


/// Hacer una función que permita ingresar nuevos nodos manteniendo el árbol ordenado (por legajo).


nodoArbol *inicArbol() {
    return NULL;
}

nodoArbol *crearNodoArbol(int perAux) {
    nodoArbol *aux = (nodoArbol*) malloc(sizeof(nodoArbol));
    aux->dato = perAux;
    aux->izq = NULL;
    aux->der = NULL;

    return aux;
}

/// raiz, izq, der
void preorder(nodoArbol *arbol) {
    if(arbol != NULL) {
        printf(" %d ",arbol->dato);
        preorder(arbol->izq);
        preorder(arbol->der);
    }

}

/// Izq, raiz, der
void inorder(nodoArbol *arbol) {
    if(arbol != NULL) {
        inorder(arbol->izq);
        printf(" %d ",arbol->dato);
        inorder(arbol->der);
    }

}


/// Izq, der, raiz
void postorder(nodoArbol *arbol) {
    if(arbol != NULL) {
        postorder(arbol->izq);
        postorder(arbol->der);
        printf(" %d ",arbol->dato);
    }

}

nodoArbol * insertar(nodoArbol * arbol, int dato) {
    if(arbol == NULL) { /// Revisar si el arbol esta vacio
        arbol = crearNodoArbol(dato); /// Si esta vacio
    } else {
        if(dato>arbol->dato) { /// Si el dato a ingresar es mayor al del arbol, lo mando a la derecha
            arbol->der = insertar(arbol->der, dato);
        } else {
            arbol->izq = insertar(arbol->izq, dato); /// Sino si el dato a ingresar es menor al del arbol, lo mando a la izquierda
        }
    }
    return arbol;
}
