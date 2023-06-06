#include <stdio.h>
#include <stdlib.h>
#include "../../pila.h"

void cargarPila(Pila *pilita);
int encontrarMenor(Pila *pilita);
void ordenamientoSeleccion(Pila *origen, Pila *destino);
int main() {

    Pila pilita;
    inicpila(&pilita);
    Pila ordenada;
    inicpila(&ordenada);


    cargarPila(&pilita);

    ordenamientoSeleccion(&pilita, &ordenada);

    mostrar(&ordenada);

    return 0;
}


void cargarPila(Pila *pilita){
    char op = 's';

    while(op == 's'){
        leer(pilita);
        printf("Desea continuar? (s/n)");
        fflush(stdin);
        scanf("%c", &op);
    }
}


int encontrarMenor(Pila *pilita){
        Pila aux;
        inicpila(&aux);
        int menor = desapilar(pilita);

        while(!pilavacia(pilita)){
             if(tope(pilita) > menor){
                apilar(&aux, desapilar(pilita));
             } else {
                apilar(&aux, menor);
                menor = desapilar(pilita);
             }
        }

        while(!pilavacia(&aux)){
            apilar(pilita, desapilar(&aux));
        }


        return menor;
}

void ordenamientoSeleccion(Pila *origen, Pila *destino){

        while(!pilavacia(origen)){
            int menor = encontrarMenor(origen);
            apilar(destino, menor);
        }
}
