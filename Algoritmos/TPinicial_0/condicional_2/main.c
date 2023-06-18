#include <stdio.h>
#include <stdlib.h>

int main()
{
    float compraInicial, descuento, total;
    descuento = 0.20;

    printf("Ingrese el total de su compra: ");
    scanf("%f", &compraInicial);

    if (compraInicial > 5000) {
        total = compraInicial - (compraInicial * descuento);
    }

    printf("Tu compra total es: %.2f", total);
    return 0;
}
