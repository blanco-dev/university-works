#include <stdio.h>
#include <stdlib.h>

/// Hacer una funci�n que reciba como par�metro un arreglo de n�meros enteros y permita que el usuario ingrese valores al mismo por teclado.
/// La funci�n debe retornar la cantidad de elementos cargados en el arreglo (o pueden utilizar como puntero v�lidos).


int elementosArr(int arr[], int dim);

int main() {
    int arr[8];
    int dim = 8;
    int datosCargados = elementosArr(arr, dim);

    printf("Tus elementos del array son: %i", datosCargados);

    return 0;
}

int elementosArr(int arr[], int dim){
    int i = 0;
    char op = 's';

    while(op == 's' && i<dim){
        printf("Ingrese un valor a su array: \n");
        scanf("%i", &arr[i]);

        printf("Ingrese s para continuar o otra letra para finalizar:\n");
        fflush(stdin);
        scanf("%c", &op);

        i++;
    }
    return i;
}
