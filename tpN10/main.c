#include <stdio.h>
#include <stdlib.h>
#include "pila.h"


/**10  Cargar las pilas A y B, y luego compararlas, evaluando si son completamente iguales,
       (en cantidad de elementos, valores que contienen y posición de los mismos)
       Mostrar por pantalla el resultado  */

void cargarPila(Pila *a);
void compararLongitudPilas(Pila a, Pila b);
void compararValoresPila(Pila a, Pila b);


int main() {
    Pila a;
    inicpila(&a);
    Pila b;
    inicpila(&b);

    cargarPila(&a);
    cargarPila(&b);

    compararLongitudPilas(a, b);
    compararValoresPila(a, b);

    return 0;
}


void cargarPila(Pila *a){
    char op = 's';

    while(op == 's'){
        leer(a);
        printf("Desea continuar? (s/n)");
        fflush(stdin);
        scanf("%c", &op);
    }
}

void compararLongitudPilas(Pila a, Pila b){

    while(!pilavacia(&a) && !pilavacia(&b)){
        desapilar(&a);
        desapilar(&b);
    }

    if(pilavacia(&a) && pilavacia(&b)){
        printf("Tu pila son de la misma longitud\n");
    } else {
        printf("Tu pila NO son de la misma longitud\n");
    }
}


void compararValoresPila(Pila a, Pila b){

    while(!pilavacia(&a) && !pilavacia(&b)){
            if (tope(&a) == tope(&b)){
                desapilar(&a);
                desapilar(&b);
            }
    }

    if(pilavacia(&a) && pilavacia(&b)){
        printf("Ambas pilas son totalmente identicas\n");
    } else {
        printf("Tu pila NO son identicas\n");
    }

}
