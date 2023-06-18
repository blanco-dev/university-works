#include <stdio.h>
#include <stdlib.h>

int main()
{
    float num1, num2, numeroMayor;

    printf("Ingrese el primer numero: ");
    scanf("%f", &num1);

    printf("Ingrese el segundo numero: ");
    scanf("%f", &num2);

    if (num1 > num2 ) {
        printf("Los numeros en forma ascendente son: %.2f y %.2f ",num1, num2);
    } else if (num2 > num1 ) {
        printf("Los numeros en forma ascendente son: %.2f y %.2f ",num2, num1);
    } else {
        printf("Has ingresado un dato incorrecto, revisalo");
    }
    return 0;
}
