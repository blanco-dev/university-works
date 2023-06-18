#include <stdio.h>
#include <stdlib.h>
#include "pila.h"

/***4. Cargar desde el teclado la pila ORIGEN e inicializar en vacío la pila DESTINO.
       Pasar los elementos de la pila ORIGEN a la pila DESTINO, pero dejándolos en el mismo orden. */

void cargarPila(Pila *pilita);
void pasajeDePila(Pila pilita, Pila *destino);

int main() {
    Pila pilita;
    inicpila(&pilita);

    Pila destino;
    inicpila(&destino);

    Pila aux;
    inicpila(&aux);
    cargarPila(&pilita);

    printf("-------PILITA--------");
    mostrar(&pilita);


    pasajeDePila(pilita, &destino);

    printf("-------DESTINO--------");
    mostrar(&destino);

    printf("-------AUX--------");
    mostrar(&aux);

    printf("-------PILITA--------");
    mostrar(&pilita);



    return 0;
}

void cargarPila(Pila *pilita){

    char op = 's';

    while (op == 's'){

        leer(pilita);
        printf("Desea continuar? (s/n)");
        fflush(stdin);
        scanf("%c", &op);
    }
}

void pasajeDePila(Pila pilita, Pila *destino){
    Pila aux;
    inicpila(&aux);

    while(!pilavacia(&pilita)){
        apilar(&aux, desapilar(&pilita));

    }

    while(!pilavacia(&aux)){
        apilar(destino, desapilar(&aux));
    }

}
