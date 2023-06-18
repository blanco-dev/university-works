#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, num2, num3, op;

    printf("Ingrese el primer numero: ");
    scanf("%i", &num1);

    printf("Ingrese el segundo numero: ");
    scanf("%i", &num2);

    printf("Ingrese el tercer numero: ");
    scanf("%i", &num3);


    if (num1 > num2 && num1 > num3) {
        printf("El numero mayor es : %i", num1);
    } else if (num2 > num1 && num2 > num3) {
        printf("El numero mayor es : %i", num2);
    } else if (num3 > num1 && num3 > num2) {
        printf("El numero mayor es : %i", num3);
    }

    return 0;
}
