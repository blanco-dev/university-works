#include <stdio.h>
#include <stdlib.h>

int main() {

    int contador, num, convNum;


    printf("Ingrese la cantidad de veces que desea jugar: ");
    scanf("%i", &contador);

    for (int i=1; i <= contador; i++) {

        printf("Ingrese un numero: ");
        scanf("%i", &num);

        convNum = num * - 1 ;
        printf("El numero negativo es: %i", convNum);
    }

    return 0;
}
