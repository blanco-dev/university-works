#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char nombre[50];
    char telefono[50];
    int DNI; // valores del 1 al 100
} stPersona;

typedef struct {
    stPersona dato;
    struct nodoPersona* siguiente;
} nodoPersona;

typedef struct {
    int DNI;
    int tipoContacto; //1-familia 2-trabajo 3-amigos
    int activo; //1-true 0-false
} stContacto;

typedef struct nodoCliente {
    stContacto dato;
    struct nodoContacto* siguiente;
    struct nodoContacto* anterior;
} nodoContacto;

nodoPersona *inicLista();
stPersona crearPersona ();
int buscarDocRecursivo (nodoPersona *lista, int documento);
nodoPersona *crearNodo (stPersona dato);
void mostrarLista(nodoPersona *lista);
void mostrarListaRecursiva(lista);
int validarDoc (int dni);
void mostrarPersona (stPersona dato);


int main () {

    nodoPersona *lista = inicLista();
    stPersona persona = crearPersona();
    lista = crearNodo(persona);
    //mostrarLista(lista);
    int buscarDoc = buscarDocRecursivo (lista, 45);
    mostrarListaRecursiva (lista);

    return 0;
}

stPersona crearPersona() {
    stPersona persona;
    char op = 's';
    int flag = 0;

    do {
        printf("Ingrese el nombre: \n");
        fflush(stdin);
        scanf("%s", &persona.nombre);

        printf("Ingrese el telefono: \n");
        fflush(stdin);
        scanf("%s", &persona.telefono);

        printf("Ingrese el DNI: \n");
        fflush(stdin);
        scanf("%i", &persona.DNI);
        flag = validarDoc(persona.DNI);
        while (flag == 0) {
            printf("Ingrese el DNI: \n");
            fflush(stdin);
            scanf("%i", &persona.DNI);
            flag = validarDoc(persona.DNI);
        }
        printf("Desea continuar? (s/n) \n");
        fflush(stdin);
        scanf("%c", &op);

    } while(op == 's');

    return persona;
}

void mostrarPersona (stPersona dato) {
    printf("El nombre es: %s\n",dato.nombre);
    printf("El DNI es: %i\n",dato.DNI);
    printf("El telefono es: %s\n",dato.telefono);
}

nodoPersona *inicLista() {
    return NULL;
}

nodoPersona *crearNodo (stPersona dato) {
    nodoPersona *aux = (nodoPersona*)malloc(sizeof(nodoPersona));
    aux->dato = dato;
    aux->siguiente = NULL;

    return aux;
}

void mostrarLista(nodoPersona *lista) {
    while(lista != NULL) {
        puts("-----------------------------------");
        printf("El DNI es: %i \n",lista->dato.DNI);
        printf("El nombre es: %s \n",lista->dato.nombre);
        printf("El telefono es: %s \n",lista->dato.telefono);
        lista = lista->siguiente;
    }
}

/// Hacer una funcion que dado un DNI evalue si se encuentra en la lista de personas.
/// Tiene que ser recursiva

int buscarDocRecursivo (nodoPersona *lista, int documento) {
    int flag = 0;
    if(lista != NULL) {
        if(documento == lista->dato.DNI) {
            flag = 1;
        } else {
            flag = buscarDocRecursivo(lista->siguiente,documento);
        }
    }

    return flag;
}

/// 2) Hacer una función para crear un nodoPersona.
/// Hacer una función para que un usuario cargue una stPersona.
/// Validar rango del DNI.


int validarDoc (int dni) {
    int flag = 0;
    if (dni > 100 || dni < 0) {
        flag = 0;
    } else {
        flag = 1;
    }

    return flag;
}
/// 3) Hacer una función que muestre las personas de la lista. Tiene que ser recursiva.

void mostrarListaRecursiva (nodoPersona *lista) {

    if (lista != NULL) {
        mostrarPersona(lista->dato);
        mostrarListaRecursiva(lista->siguiente);
    }
}
