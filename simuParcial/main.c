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
nodoContacto * agregarEnOrden (nodoContacto *listaDoble, nodoContacto *nuevoNodo);
nodoContacto *inicListaDoble();
void mostrarListaDoble(nodoContacto *listaDoble);
nodoContacto *crearNodoContacto (stContacto datoAux);
stContacto crearContacto ();
nodoContacto *agregarAlPpioDoble(nodoContacto* listaDoble, nodoContacto* nuevoNodo);

int main() {
    char op;
    int opsw=0,dato=0;

    nodoPersona*listaSimple = inicListaSimple();
    nodoContacto*listaDoble = inicListaDoble();
    do {
        puts("1. Agregar al principio Personas (Muchas)");
        puts("2. Agregar al final Personas (Muchas)");
        puts("3. Verificar si existe un DNI buscado");
        puts("4. Mostrar lista Personas de forma recursiva");
        puts("5. Agregar al principio Contacto (Muchos)");
        puts("6. Agregar al final Contacto(Muchos)");
        puts("7. Agregar de manera ordenada x DNI Contacto (Muchos)");
        puts("8. Mostrar contactos de manera Recursiva");
        puts("9. Mostrar contactos normal");
        puts("10. Contar contactos");
        puts("-------------------------------------------");
        printf("Que ejercicio elige: ");
        scanf("%i",&opsw);


        switch(opsw) {
        case 1:
            listaSimple = agregarAlPpio(listaSimple,crearNodo(crearPersona()));
            break;
        case 2:
            listaSimple = agregarAlFinal(listaSimple,crearNodo(crearPersona()));
            break;
        case 3:
            printf("Ingrese el dni que quiere buscar: ");
            scanf("%i",&dato);
            buscarDocRecursivo(listaSimple,dato) ? puts("Existe el DNI buscado") : puts("El DNI buscado no se encontro");
            break;
        case 4:
            mostrarListaSimpleRecursivo(listaSimple);
            break;
        case 5:
            listaDoble = agregarAlPpioDoble(listaDoble,crearNodoContacto(crearContacto()));
            break;
        case 6:
            //listaDoble = cargarMuchosAlFinalDoble(listaDoble,listaSimple);
            break;
        case 7:
            listaDoble = agregarEnOrden(listaDoble,crearNodoContacto(crearContacto()));
            break;
        case 8:
            mostrarListaDobleRecursivo(listaDoble,buscarUltimoDoble(listaDoble));
            break;
        case 9:
            mostrarListaDoble(listaDoble);
            break;
        case 10:
            dato = contarContactosActivos(listaDoble);
            printf("La cantidad de contactos son: %i",dato);
            break;
        default:
            break;
        }
        printf("Desea volver al menu principal? s/n: ");
        fflush(stdin);
        scanf("%c",&op);

        system("cls");
    } while(op == 's' || op == 'S');

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
    printf("El DNI es: %i\n",persona.DNI);
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


stContacto crearContacto () {
    stContacto contacto;

    printf("Ingrese el tipo de actividad (0/1): \n");
    fflush(stdin);
    scanf("%i",&contacto.activo);

    printf("Ingrese el tipo de contacto: \n");
    fflush(stdin);
    scanf("%i",&contacto.tipoContacto);

    printf("Ingrese el DNI: \n");
    fflush(stdin);
    scanf("%i",&contacto.DNI);


    return contacto;
}

nodoContacto *crearNodoContacto (stContacto datoAux) {
    nodoContacto *aux = (nodoContacto*) malloc(sizeof(nodoContacto));
    aux->dato = datoAux;
    aux->siguiente = NULL;
    aux->anterior = NULL;

    return aux;
}

nodoContacto * buscarUltimoDoble(nodoContacto *listaDoble) {
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
}

nodoContacto *inicListaDoble() {
    return NULL;
}

nodoContacto *agregarAlPpioDoble(nodoContacto* listaDoble, nodoContacto* nuevoNodo) {

    nuevoNodo->siguiente = listaDoble;

    return nuevoNodo;
}


void mostrarUnContacto (stContacto contacto) {
    printf("El tipo de actividad es: %i\n", contacto.activo);
    printf("El DNI es: %i\n", contacto.DNI);
    printf("El tipo de contacto es: %i\n", contacto.tipoContacto);

}

void mostrarListaDoble(nodoContacto *listaDoble) {
    while(listaDoble != NULL) {
        printf("El tipo de actividad es: %i\n", listaDoble->dato.activo);
        printf("El DNI es: %i\n", listaDoble->dato.DNI);
        printf("El tipo de contacto es: %i\n", listaDoble->dato.tipoContacto);
        listaDoble = listaDoble->siguiente;
    }

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
        if (listaDoble->dato.activo == 1) {
            contador++;
        }
        listaDoble = listaDoble->siguiente;
    }
    return contador;

nodoContacto * agregarEnOrden (nodoContacto *listaDoble, nodoContacto *nuevoNodo) {
    nodoContacto *seg = listaDoble;
    if (listaDoble == NULL) {
        listaDoble = nuevoNodo; // El caso en que no hayan datos en la lista
    } else {
        if(listaDoble->dato.DNI > nuevoNodo->dato.DNI) {
            listaDoble = agregarAlPpioDoble(listaDoble, nuevoNodo); // El caso en que el nuevo nodo sea el mas menor
        } else {
            while(seg != NULL && seg->dato.DNI < nuevoNodo->dato.DNI) { // El caso en que haya que meter el nuevo nodo en alguna parte de la mitad o final de la lista
                seg = seg->siguiente;
            }
            seg->siguiente = nuevoNodo;
        }
    }

    return listaDoble;
}
