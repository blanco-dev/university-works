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
nodoPersona * agregarAlFinal (nodoPersona * lista, nodoPersona *nuevoNodo);
nodoPersona * buscarUltimo  (nodoPersona *lista);
nodoPersona *cargarLista(nodoPersona *lista);
int verificarExistenciaPersona (nodoPersona *lista, nodoPersona *nodo);
//---------------------------------
int validarDocSiExiste (nodoPersona *lista, int dni);
nodoContacto *crearNodoContacto (stContacto dato);
nodoContacto *inicListaContacto();


int main () {

    nodoPersona *lista = inicLista();
    //stPersona persona = crearPersona();
    //lista = crearNodo(persona);
    //lista = buscarUltimo (lista);
    lista = cargarLista(lista);
    //int flag = verificarExistenciaPersona (lista, crearNodo(crearPersona()));
    /*int flag = buscarDocRecursivo (lista, 45);
    if(flag == 1 ){
        puts("se encontro");
    } else {
        puts("NO se encontro");
    }*/
    mostrarListaRecursiva (lista);
    //int verificarExistenciaPersona (lista, nodo);

    return 0;
}

stPersona crearPersona() { /// funciona
    stPersona persona;
    int flag = 0;

        printf("Ingrese el nombre: \n");
        fflush(stdin);
        scanf("%s", &persona.nombre);

        printf("Ingrese el telefono: \n");
        fflush(stdin);
        scanf("%s", &persona.telefono);

        printf("Ingrese el DNI: \n");
        fflush(stdin);
        scanf("%i", &persona.DNI);
        //flag = validarDoc(persona.DNI);
        /*while (flag == 0) {
            printf("Ingrese el DNI: \n");
            fflush(stdin);
            scanf("%i", &persona.DNI);
            flag = validarDoc(persona.DNI);
        }*/

    return persona;
}

void mostrarPersona (stPersona dato) { /// funciona
    printf("El nombre es: %s\n",dato.nombre);
    printf("El DNI es: %i\n",dato.DNI);
    printf("El telefono es: %s\n",dato.telefono);
}

nodoPersona *inicLista() { /// funciona
    return NULL;
}

nodoPersona *crearNodo (stPersona dato) { /// funciona
    nodoPersona *aux = (nodoPersona*) malloc(sizeof(nodoPersona));
    aux->dato = dato;
    aux->siguiente = NULL;

    return aux;
}

void mostrarLista(nodoPersona *lista) { /// funciona
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

int buscarDocRecursivo (nodoPersona *lista, int documento) { /// funciona
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

int validarDoc (int dni) { /// funciona
    int flag = 0;
    if (dni > 100 || dni < 0) {
        flag = 0;
    } else {
        flag = 1;
    }

    return flag;
}

/// 3) Hacer una función que muestre las personas de la lista. Tiene que ser recursiva.

void mostrarListaRecursiva (nodoPersona *lista) { /// funciona

    if (lista != NULL) {
        mostrarPersona(lista->dato);
        mostrarListaRecursiva(lista->siguiente);
    }
}

nodoPersona * buscarUltimo  (nodoPersona *lista) { /// funciona
    nodoPersona *ultimo = inicLista();
    if (lista == NULL ) {
        ultimo = lista;
    }
    while(lista != NULL) {
        lista = lista->siguiente;
        ultimo = lista;
    }

    return ultimo;
}

/// 4) Hacer una función que agregue un nodoPersona al final de una lista de personas.
/// Hacer una función para cargar varias personas.
/// Verificar antes si está repetida en la lista usando el punto 1.

nodoPersona *agregarAlFinal (nodoPersona * lista, nodoPersona *nuevoNodo) { /// funciona

    if (lista == NULL) {
        lista = nuevoNodo;
    } else {
        while(lista->siguiente != NULL) {
            lista = lista->siguiente;
        }
        lista->siguiente = nuevoNodo;
    }

    return lista;
}

nodoPersona *cargarLista(nodoPersona *lista) { /// funciona
    nodoPersona *aux = inicLista();
    char op = 's';
    do {
        aux = crearNodo(crearPersona());
        lista = agregarAlFinal(lista,aux);

        printf("Desea continuar? (s/n)");
        fflush(stdin);
        scanf("%c",&op);
    } while(op == 's');

    return lista;
}


int verificarExistenciaPersona (nodoPersona *lista, nodoPersona *nodo) { /// funciona, falta aplicarla en la creacion de personas
    int flag = 0;
    if(lista->dato.DNI == nodo->dato.DNI) {
        printf("La persona ya existe, ingrese otra persona distinta");
        flag = 1;
    } else {
        flag = 0;
    }

    return flag;
}

/// 5) Hacer una función para crear un nodoContacto.
/// Hacer una función para cargar un stContacto.
/// Validar tipoContacto que sea 1-2-3. Validar que el DNI exista en la lista personas simple.

nodoContacto *inicListaContacto() {
    return NULL;
}

nodoContacto *crearNodoContacto (stContacto dato) {
    nodoContacto *aux = (nodoContacto*) malloc(sizeof(nodoContacto));
    aux->dato = dato;
    aux->anterior = NULL;
    aux->siguiente = NULL;

    return aux;
}

int validarDocSiExiste (nodoPersona *lista, int dni) {
    int flag=0;
    while(lista != NULL) {
        if(lista->dato.DNI == dni) {
            flag = 1;
        } else {
            flag=0;
        }
    }

    return flag;
}
