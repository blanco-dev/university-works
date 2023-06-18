#include <stdio.h>
#include <stdlib.h>
#include "../pila.h"


int main() {
    Pila pilota;
    int suma= 0, contador, numero, promedio, ac=0;
    char op = 's';
    inicpila(&pilota);

    do {
       leer(&pilota);
       ac = tope(&pilota) + ac;
       printf("%i", ac);
       mostrar(&pilota);
       fflush(stdin);
       printf("Ingrese s para continuar o otra letra para finalizar");
       scanf("%c", &op);
       contador++;
    } while(op == 's');


    promedio = ac / contador;
    printf("Tu promedio es %i", promedio);

    return 0;
}
