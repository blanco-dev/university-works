#include <stdio.h>
#include <stdlib.h>
#include "../pila.h"


/**10  Cargar las pilas A y B, y luego compararlas, evaluando si son completamente iguales,
       (en cantidad de elementos, valores que contienen y posición de los mismos)
       Mostrar por pantalla el resultado  */

void cargarPila(Pila *a);
void compararTamanioPilas(Pila a, Pila b);

int main() {
    Pila a;
    inicpila(&a);
    Pila b;
    inicpila(&b);

    cargarPila(&a);
    cargarPila(&b);

    compararTamanioPilas(a, b);




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

void compararTamanioPilas(Pila a, Pila b){
    int i = 0;
    int j = 0;

    while(!pilavacia(&a)){
        desapilar(&a);
        i++;
    }

    while(!pilavacia(&b)){
        desapilar(&b);
        j++;
    }

    if(j>i){
        printf("La pila B es mayor con : %i elementos", j);
    } else if(j==i){
        printf("Ambas pilas son de la misma longitud. CON %i elementos y la otra con %i elementos",i,j);
    } else{
        printf("La pila A es mayor con : %i elementos", i);
    }

}


