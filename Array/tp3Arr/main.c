#include <stdio.h>
#include <stdlib.h>

/// Hacer una función que reciba como parámetro un arreglo
/// Y la cantidad de elementos (válidos) cargados en él y calcule la suma de sus elementos.


int mostrarArray(int array1[], int dim);

int main() {


    int array1[15];


    int cantidad = mostrarArray(array1, 15);

    printf("Suma de elementos: %i", cantidad);

    return 0;
}

int mostrarArray(int array1[], int dim){

    int validos = 0;
    char op = 's';
    int ac = 0;
    while(op == 's' && validos<dim){

        printf("Ingrese un dato para el array: \n");
        fflush(stdin);
        scanf("%d", &array1[validos]);
        ac = ac + array1[validos];
        validos++;

        printf("Desea continuar (s/n)\n");
        fflush(stdin);
        scanf("%c", &op);
    }
    return ac;
}
