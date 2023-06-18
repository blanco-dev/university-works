#include <stdio.h>
#include <stdlib.h>

int main() {

    int num1, num2, operacion;

    printf("Ingresar el primer numero: ");
    scanf("%i", &num1);

    printf("Ingresar el segundo numero: ");
    scanf("%i", &num2);

    if (num1 == num2) {
        operacion = num1 * num2;
    } else if (num1 > num2) {
        operacion = num1 - num2;
    } else if (num2 > num1) {
        operacion = num2 + num1;
    }

    printf("El numero es: %i", operacion);
    return 0;
}
