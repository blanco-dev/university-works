#include <stdio.h>
#include <stdlib.h>
#include "../pila.h"

/// 8. Repartir los elementos de la pila MAZO en las pilas JUGADOR1 y JUGADOR2 en forma alternativa.

void cargarPila(Pila *mazo);
void mostrarPila(Pila mazo);
void pilaToPila(Pila *mazo, Pila *jugador1, Pila *jugador2);

int main() {
    Pila mazo;
    inicpila(&mazo);

    Pila jugador1;
    inicpila(&jugador1);

    Pila jugador2;
    inicpila(&jugador2);

    cargarPila(&mazo);

    pilaToPila(&mazo, &jugador1, &jugador2);
    printf("-----JUGADOR 1-----\n");
    mostrarPila(jugador1);
    printf("-----JUGADOR 2-----\n");
    mostrarPila(jugador2);


    return 0;
}

void cargarPila(Pila *mazo){
    char op  = 's';

    while(op == 's'){
        leer(mazo);
        printf("Desea continuar? (s/n)");
        fflush(stdin);
        scanf("%c", &op);
    }
}

void pilaToPila(Pila *mazo, Pila *jugador1, Pila *jugador2){
    while(!pilavacia(mazo)){
            apilar(jugador1, desapilar(mazo));
        if(!pilavacia(mazo)){
            apilar(jugador2, desapilar(mazo));
        }
    }
}

void mostrarPila(Pila mazo){
    int aux = 0;
    while(!pilavacia(&mazo)){
        aux = desapilar(&mazo);
        printf("Elemento : %i\n", aux);
    }
}
