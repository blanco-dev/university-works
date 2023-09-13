#include <stdio.h>
#include <stdlib.h>

int sumaRecursiva (int a[5],int pos);

int main() {
    int a[5] = {10,10,10,10,10};
    int suma = sumaRecursiva (a,5);
    printf("Suma total: %i",suma);


    return 0;
}


int sumaRecursiva (int a[5],int pos) {
    int ac;
    if (pos == 0) {
        ac = 0;
    } else {
        ac = a[pos-1] + sumaRecursiva(a,pos-1);
    }

    return ac;
}
