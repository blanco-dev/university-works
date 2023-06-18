#include <stdio.h>
#include <stdlib.h>

/// Hacer una funci�n que reciba como par�metro un arreglo y la cantidad de elementos (v�lidos) cargados en �l y los muestre por pantalla.

int mostrarArray(int array1[], int dim);

int main() {

    int cantidad = 0;
    int array1[15];


    cantidad = mostrarArray(array1, 15);

    printf("Cantidad de validos: %i", cantidad);
    return 0;
}

int mostrarArray(int array1[], int dim){

    int validos = 0;
    char op = 's';

    while(op == 's' && validos<dim){

        printf("Ingrese un dato para el array: \n");
        fflush(stdin);
        scanf("%d", &array1[validos]);
        validos++;

        printf("Desea continuar (s/n)\n");
        fflush(stdin);
        scanf("%c", &op);
    }
    return validos;
}
