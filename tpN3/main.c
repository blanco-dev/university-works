#include <stdio.h>
#include <stdlib.h>
#include "pila.h"


/// 3. Cargar desde teclado una pila DADA y pasar a la pila DISTINTOS todos aquellos elementos distintos al valor 8.

void cargarPila(Pila *dada);


int main() {

    Pila dada;
    inicpila(&dada);
    Pila distintos;
    inicpila(&distintos);
    Pila aux;
    inicpila(&aux);
    cargarPila(&dada);

    while(!pilavacia(&dada)) {
        if(tope(&dada) != 8){
            apilar(&distintos, desapilar(&dada));
        } else {
            apilar(&aux, desapilar(&dada));
        }
    }

    printf("--------DISTINTOS------");
    mostrar(&distintos);
        printf("--------aux------");
    mostrar(&aux);
        printf("--------dada------");
    mostrar(&dada);



    return 0;
}


void cargarPila(Pila *dada){
    char op = 's';

    while(op == 's') {
        leer(dada);

        printf("Desea continuar? (s/n) \n");
        fflush(stdin);
        scanf("%c", &op);
    }

}
