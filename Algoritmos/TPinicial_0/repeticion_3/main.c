#include <stdio.h>
#include <stdlib.h>

int main() {

    int num, contador, suma;

    printf("Cuantas veces desea ingresar los numeros: ");
    scanf("%i", &contador);

    for (int i = 1; i < contador; i++) {
            printf("Ingrese un numero para saber si es positivo o negativo: ");
            scanf("%i", &num);
        if (num > 0 ) {
            printf("Tu numero es positivo: %i ", num );
        } else {
            printf("Tu numero es negativo");
        }
    }

    return 0;
}
