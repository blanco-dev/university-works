#include <stdio.h>
#include <stdlib.h>
#include "../pila.h"

/// Contar los elementos de una pila (usar variables enteras)

int main()
{

    Pila pilota;

    int contador=0, promedio=0;
    int suma = 0;
    inicpila(&pilota);

    char op = 's';

    do
    {
        leer(&pilota);
        suma = suma + tope(&pilota);
        contador++;
        printf("Ingrese s para continuar, o ingrese otra letra: \n");
        fflush(stdin);
        scanf("%c",&op);
    } while (op == 's');

    promedio = suma / contador;

    printf("El promedio es: %d\n", promedio);

    return 0;
}
