#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define DIM_MAX_COL 30
#define DIM_MAX_FILA 30

/// Hacer una función que reciba como parámetro una matriz de números enteros y la muestre por pantalla (en formato matricial)


int main() {
    int matriz[DIM_MAX_FILA][DIM_MAX_COL];


    return 0;
}


int cargarMatriz(int matriz[][]) {
    char op = 's';
    int i = 0;
    while(op == 's'){
        printf("Ingrese el dato: ");
        fflush(stdin);
        scanf("%i", &matriz[i]);

        printf("Ingrese el dato: ");
        fflush(stdin);
        scanf("%i", &matriz[j]);

    }


}
