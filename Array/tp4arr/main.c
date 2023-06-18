#include <stdio.h>
#include <stdlib.h>
#include "../pila.h"

/// Hacer una función que reciba como parámetro un arreglo, la cantidad de elementos (válidos) cargados en él y una Pila.
/// La función debe copiar los elementos del arreglo en la pila.


int mostrarArray(int array1[], int dim, Pila *pila);

int main() {


    int array1[15];

    Pila pila;
    inicpila(&pila);

    int cantidad = mostrarArray(array1, 15, &pila);

    printf("Suma de elementos: %i", cantidad);
    return 0;
}

int mostrarArray(int array1[], int dim, Pila *pila){

    int validos = 0;
    char op = 's';
    int ac = 0;
    while(op == 's' && validos<dim){

        printf("Ingrese un dato para el array: \n");
        fflush(stdin);
        scanf("%d", &array1[validos]);
        ac = ac + array1[validos];
        apilar(pila, array1[validos]);
        validos++;

        printf("Desea continuar (s/n)\n");
        fflush(stdin);
        scanf("%c", &op);
    }
    mostrar(pila);
    return ac;
}
