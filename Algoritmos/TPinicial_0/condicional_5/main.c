#include <stdio.h>
#include <stdlib.h>

int main()
{
        float totalCompra, descuento, cantidadCamisas, precio;

        printf("Ingrese la cantidad de camisas a comprar: ");
        scanf("%f", &cantidadCamisas);

        printf("Ingrese el monto a pagar: ");
        scanf("%f", &precio);

        if (cantidadCamisas >= 3) {
            descuento = 0.20;
        } else if (cantidadCamisas < 3) {
            descuento = 0.10;
        }

        totalCompra = precio - (precio * descuento);
        printf("El total de tu compra es: %.2f", totalCompra);

    return 0;
}
