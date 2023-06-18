#include <stdio.h>
#include <stdlib.h>
#include "../pila.h"

/// Sumar los elementos de una pila (usar variables enteras)


int main()
{
    Pila pilota;
    int suma= 0, contador, numero;
    char op = 's';
    inicpila(&pilota);

    printf("Cuantos numeros desea sumar? ");
    scanf("%i", &contador);


    for (int i=0; i < contador; i++)
    {
        leer(&pilota);
        numero = tope(&pilota);
        suma = suma + numero;
        desapilar(&pilota);

    }
    printf("%i", suma);



    return 0;
}
