#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, contador, suma, cubo, cuarta;

    printf("Cuantas veces desea ingresar los numeros: ");
    scanf("%i", &contador);

    for (int i = 1; i <= contador; i++) {

        printf("Ingrese el numero: ");
        scanf("%i", &num);

        cubo = pow(num,3);
        cuarta = pow(num,4);
        printf("El cubo de su numero es: %i \n", cubo);
        printf("La cuarta de su numero es : %i \n", cuarta);

    }
    return 0;
}
