#include <stdio.h>
#include <stdlib.h>
#define MAX_DIM 25

typedef struct {
    int legajo;
    char nombreYapellido [30];
    int edad;
    int anio;
} stAlumno;

void cargarAlumno(char archivoAlumnos[]);
void mostrarArchivo(char archivoAlumnos[]);
void cantidadRegistros(char archivoAlumnos[]);
void busquedaXNombreXEdad (char archivoAlumnos[]);
void buscarMayorAlumno(char archivoAlumnos[]);
void mostrarUnAlumno(stAlumno aux);
int buscarAlumnoXAnio(int datoAnio, char archivoAlumnos[]);

int main() {
    char archivoAlumnos[] = "archivos";
    int datoEdad = 0;
    int datoAnio = 0;
    cargarAlumno(archivoAlumnos);

    mostrarArchivo(archivoAlumnos);
    cantidadRegistros(archivoAlumnos);

    printf("Indique la edad de busqueda: \n");
    fflush(stdin);
    scanf("%i", &datoEdad);

    int cantAlumnosMayores = cantidadMayoresDeEdad(archivoAlumnos, datoEdad);
    printf("Cantidad de alumnos mayores a %i: %i\n", datoEdad, cantAlumnosMayores);

    busquedaXNombreXEdad(archivoAlumnos);
    buscarMayorAlumno(archivoAlumnos);

    printf("Indique el anio que desea buscar: \n");
    fflush(stdin);
    scanf("%i", &datoAnio);

    int cantidadPorAnio = buscarAlumnoXAnio(datoAnio, archivoAlumnos);

    printf("La cantidad de alumnos que cursan en el mismo anio son: %i\n", cantidadPorAnio);

    return 0;
}

void cargarAlumno(char archivoAlumnos[]) {
    char op = 's';
    stAlumno alumno;
    FILE *archi = fopen(archivoAlumnos,"ab");
    if (archi != NULL) {
        while(op=='s') {
            printf("Ingrese el legajo: ");
            fflush(stdin);
            scanf("%i", &alumno.legajo);

            printf("Ingrese el nombre y apellido: ");
            fflush(stdin);
            gets(alumno.nombreYapellido);

            printf("Ingrese la edad: ");
            fflush(stdin);
            scanf("%i", &alumno.edad);

            printf("Ingrese el anio: ");
            fflush(stdin);
            scanf("%i", &alumno.anio);

            fwrite(&alumno,sizeof(stAlumno),1,archi);

            printf("Desea continuar? (s/n) ");
            fflush(stdin);
            scanf("%c", &op);
        }
        fclose(archi);
    }
}

void mostrarArchivo(char archivoAlumnos[]) {
    stAlumno aux;
    FILE *buffer = fopen(archivoAlumnos, "rb");
    if (buffer != NULL) {
        while(fread(&aux,sizeof(stAlumno),1,buffer) > 0) {
            puts("-------------------------------------------");
            printf("El legajo es: %i\n", aux.legajo);
            printf("El edad es: %i\n", aux.edad);
            printf("El anio es: %i\n", aux.anio);
            printf("El nombre y apellido es: %s\n", aux.nombreYapellido);
            puts("-------------------------------------------");
        }
        fclose(buffer);
    }
}

void cantidadRegistros(char archivoAlumnos[]) {
    stAlumno aux;
    int cantRegistros = 0;
    FILE *archi = fopen(archivoAlumnos,"rb");
    if (archi != NULL) {
        while(fread(&aux,sizeof(stAlumno),1,archi) > 0) {
            cantRegistros = ftell(archi) / sizeof(stAlumno);
        }
        fclose(archi);
    }
    printf("Cantidad de Registros: %i\n", cantRegistros);
}

/*void archivoToPila(Pila *pilita, char archivoAlumnos[]) {
    stAlumno aux;
    FILE * buffer = fopen(archivoAlumnos, "r+b");
    if (buffer != NULL) {
        while (fread(&aux,sizeof(stAlumno),1,buffer) > 0) {
            if (aux.edad > 18) {
                apilar(pilita, aux.legajo);
            }
        }
        fclose(buffer);
    }
}
*/

int cantidadMayoresDeEdad(char archivoAlumnos[], int datoEdad) {
    stAlumno aux;
    FILE *archi = fopen(archivoAlumnos,"rb");
    int cantMayores = 0;
    if (archi != NULL) {
        while(fread(&aux,sizeof(stAlumno),1,archi) > 0) {
            if(aux.edad > datoEdad) {
                cantMayores++;
            }
        }
        fclose(archi);
    }
    return cantMayores;
}

void busquedaXNombreXEdad (char archivoAlumnos[]) {
    stAlumno aux;
    FILE *archi = fopen(archivoAlumnos, "rb");
    if(archi != NULL) {
        while(fread(&aux, sizeof(stAlumno),1,archi) > 0) {
            if((aux.edad > 15) && (aux.edad < 32)) {
                printf("Nombre del estudiante entre el rango de edad: %s\n", aux.nombreYapellido);
            }
        }
        fclose(archi);
    }
}

void buscarMayorAlumno(char archivoAlumnos[]) {
    int pos;
    stAlumno aux;
    stAlumno mayor;
    int i=0;
    FILE *archi = fopen(archivoAlumnos,"rb");

    if (archi != NULL) {
        fread(&mayor,sizeof(stAlumno),1,archi);
        while(fread(&aux,sizeof(stAlumno),1,archi) > 0) {
            if (aux.edad > mayor.edad) {
                mayor = aux;
            }
        }
        fclose(archi);
    }
    mostrarUnAlumno(mayor);
}

void mostrarUnAlumno(stAlumno aux) {
    printf("----------------------------------\n");
    printf("Nombre y apellido: %s\n", aux.nombreYapellido);
    printf("La edad es: %i\n", aux.edad);
    printf("El anio es: %i\n", aux.anio);
    printf("El legajo es: %i\n", aux.legajo);
    printf("----------------------------------");
}

int buscarAlumnoXAnio(int datoAnio, char archivoAlumnos[]){
    stAlumno aux;
    FILE * archi = fopen(archivoAlumnos,"rb");
    int cantCursados = 0;
    if (archi != NULL){
        while(fread(&aux,sizeof(stAlumno),1,archi) > 0){
            if (aux.anio == datoAnio){
                cantCursados++;
            }
        }
        fclose(archi);
    }
    return cantCursados;
}
