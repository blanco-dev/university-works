#include <stdio.h>
#include <stdlib.h>
#include "pila.h"

/**2. Cargar desde el teclado la pila ORIGEN e inicializar en vacío la pila DESTINO.
Pasar todos los elementos de la pila ORIGEN a la pila DESTINO. */

void cargarPila(Pila* origen);

int main() {

    Pila origen;
    inicpila(&origen);
    cargarPila(&origen);
    Pila destino;
    inicpila(&destino);
    printf("PILA ORIGEN");
    mostrar(&origen);

    while(!pilavacia(&origen)){
        apilar(&destino, desapilar(&origen));
    }
    printf("PILA DESTINO");
    mostrar(&destino);
    printf("PILA ORIGEN");
    mostrar(&origen);

    return 0;
}


void cargarPila(Pila* origen) {

    char op = 's';

    while(op == 's'){
        leer(origen);
        printf("Desea continuar? (s/n)");
        fflush(stdin);
        scanf("%c", &op);
    }
}
