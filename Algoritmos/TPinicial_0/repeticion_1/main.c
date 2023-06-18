#include <stdio.h>
#include <stdlib.h>

int main() {

    float num, materia, nota, promedio;
    int contador;
    printf("Ingrese la cantidad de veces que desea: ");
    scanf("%i", &contador);

    for (int i = 1; i <= contador; i++) {
        printf("Ingrese su nota: ");
        scanf("%f", &nota);
        num += nota;
    }

    promedio = num / contador;
    printf("Su promedio es: %.2f", promedio);

    return 0;
}
