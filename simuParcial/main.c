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

stPersona crearPersona ();
nodoPersona * inicListaSimple ();
nodoPersona *crearNodo (stPersona datoAux);
int buscarDocRecursivo (nodoPersona *lista, int dni);
int validarRangoDoc (int doc);
nodoPersona * agregarAlFinal (nodoPersona *lista, nodoPersona *nodoNuevo);
nodoPersona *buscarUltimo (nodoPersona *lista);
void mostrarPersona (stPersona persona);
void mostrarListaSimpleRecursivo (nodoPersona *lista);
nodoPersona *agregarAlPpio (nodoPersona *lista, nodoPersona *nodoNuevo);

//----------------------------------
void mostrarUnContacto (stContacto contacto);
int contarContactosActivos (nodoContacto *listaDoble);
void mostrarListaDobleRecursivo (nodoContacto *listaDoble, nodoContacto *ultimo);
nodoContacto * buscarUltimoDoble(nodoContacto *listaDoble);

int main() {
    nodoPersona *lista = inicListaSimple();
    int opsw = 0;
    char op = 's';




    return 0;
}

stPersona crearPersona () {
    stPersona persona;

    printf("Ingrese el nombre: \n");
    fflush(stdin);
    scanf("%s",&persona.nombre);

    printf("Ingrese el telefono: \n");
    fflush(stdin);
    scanf("%s",&persona.telefono);

    printf("Ingrese el DNI: \n");
    fflush(stdin);
    scanf("%i",&persona.DNI);


    return persona;
}

nodoPersona * inicListaSimple() {
    return NULL;
}

nodoPersona *crearNodo (stPersona datoAux) {
    nodoPersona *aux = (nodoPersona*) malloc(sizeof(nodoPersona));
    aux->dato = datoAux;
    aux->siguiente = NULL;

    return aux;
}
nodoPersona *buscarUltimo (nodoPersona *lista) {
    nodoPersona *ultimo = inicListaSimple();

    if(lista == NULL) {
        ultimo = lista;
    } else {
        while(lista->siguiente != NULL) {
            lista = lista->siguiente;
        }
        ultimo = lista;
    }

    return ultimo;
}


nodoPersona *agregarAlPpio (nodoPersona *lista, nodoPersona *nodoNuevo) {

    nodoNuevo->siguiente = lista;

    return nodoNuevo;
}


nodoPersona * agregarAlFinal (nodoPersona *lista, nodoPersona *nodoNuevo) {
    nodoPersona * ultimo = inicListaSimple();

    if (lista == NULL ) {
        lista = nodoNuevo;
    } else {
        ultimo = buscarUltimo(lista);
        ultimo->siguiente = nodoNuevo;
    }

    return lista;
}

/// 1) Hacer una función que dado un DNI evalúe si se encuentra en la lista de personas. Tiene que ser recursiva.

int buscarDocRecursivo (nodoPersona *lista, int dni) {
    int flag = 0;
    if (lista != NULL || flag != 1) {
        if (dni == lista->dato.DNI) {
            flag = 1;
        } else {
            flag = buscarDocRecursivo(lista->siguiente,dni);
        }
    }

    return flag;
}

/// 2) Hacer una función para crear un nodoPersona.
/// Hacer una función para que un usuario cargue una stPersona. Validar rango del DNI.

int validarRangoDoc (int doc) {
    int flag = 0;
    while(flag == 0) {
        if(doc > 100 || doc < 0) {
            flag = 1;
        }
    }

    return flag;
}

void mostrarPersona (stPersona persona) {
    printf("El nombre es: %s\n",persona.nombre);
    printf("El DNI es: %s\n",persona.DNI);
    printf("El telefono es: %s\n",persona.telefono);
}


void mostrarListaSimpleRecursivo (nodoPersona *lista) {
    if(lista != NULL) {
        mostrarPersona(lista->dato);
        mostrarListaSimpleRecursivo(lista->siguiente);
    }
}

/// 7) Hacer una función que muestre la lista doble de manera recursiva.
/// Empezar desde final y mostrar desde el último al primero.

/*nodoContacto * buscarUltimoDoble(nodoContacto *listaDoble) {
    nodoContacto *ultimo = inicListaDoble();
    if(listaDoble == NULL) {
        ultimo = listaDoble;
    } else {
        while(listaDoble->siguiente != NULL) {
            listaDoble = listaDoble->siguiente;
        }
        ultimo = listaDoble;
    }

    return ultimo;
}*/

void mostrarUnContacto (stContacto contacto) {
    printf("El tipo de actividad es: %i\n", contacto.activo);
    printf("El DNI es: %i\n", contacto.DNI);
    printf("El tipo de contacto es: %i\n", contacto.tipoContacto);

}

void mostrarListaDobleRecursivo (nodoContacto *listaDoble, nodoContacto * ultimo) {

    if(listaDoble != NULL) {
        mostrarUnContacto(listaDoble->dato);
        mostrarListaDobleRecursivo(ultimo->anterior,ultimo);
    }
}

int contarContactosActivos (nodoContacto *listaDoble) {
    int contador = 0;
    while(listaDoble != NULL) {
        if (listaDoble->dato.activo == 1){
            contador++;
        }
        listaDoble = listaDoble->siguiente;
    }
    return contador;
}

nodoContacto * agregarEnOrden (nodoContacto *listaDoble, nodoContacto *nuevoNodo) {
    nodoContacto *seg = listaDoble;
    if (listaDoble == NULL) {
        listaDoble = nuevoNodo;
    } else {
        if(listaDoble->dato.DNI > nuevoNodo->dato.DNI) {
            //listaDoble = agregarAlPpioDoble(listaDoble, nuevoNodo);
        } else {
            while(seg != NULL && seg->dato.DNI < nuevoNodo->dato.DNI) {
                    seg = seg->siguiente;
                }
                    seg->siguiente = nuevoNodo;
            }
        }

    }

    return listaDoble;
}
