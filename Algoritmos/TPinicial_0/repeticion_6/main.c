#include <stdio.h>
#include <stdlib.h>

int main() {

        int cantMulti, num, tabla, ac;

        printf("Ingrese la cantidad de veces a multiplicar: ");
        scanf("%i", &cantMulti);

        printf("Ingrese el numero a multiplicar: ");
        scanf("%i", &num);


      for (int i=1; i <= cantMulti; i++) {
            tabla = num * i;
            printf("%i x %i = %i\n", num, i, tabla);
      }

    return 0;
}
