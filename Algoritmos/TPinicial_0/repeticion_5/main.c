#include <stdio.h>
#include <stdlib.h>

int main() {

    int alumnos, calMin=0, calMax=0, notas, ac;
    float promedio;

    printf("Ingrese la cantidad de alumnos que hay: ");
    scanf("%i", &alumnos);

    for (int i=1; i <= alumnos; i++) {
            printf("Ingrese su nota: ");
            scanf("%i", &notas);
            ac = ac + notas;
            if (notas > calMax) {
                calMax = notas;
            }
            if (calMin == 0) {
                calMin = notas;
            } else if (notas < calMin) {
                calMin = notas;
            }
    }

    promedio = ac / alumnos;
    printf("Su promedio es: %.2f\n", promedio);

    printf("La nota mas chica es: %i\n", calMin);
    printf("La nota mas grande es: %i", calMax);
    return 0;
}
