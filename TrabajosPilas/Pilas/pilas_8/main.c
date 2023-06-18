#include <stdio.h>
#include <stdlib.h>
#include "../pila.h"

int main()
{

Pila mazo, jugador1, jugador2;

char seguir = 's';
inicpila (&mazo);
inicpila (&jugador1);
inicpila (&jugador2);


do {

    leer (&mazo);
    printf ("Quiere sumar más cartas?\n");
    fflush (stdin);
    scanf("%c",&seguir);


}while (seguir == 's');



while (!pilavacia(&mazo)){


    apilar(&jugador1, desapilar(&mazo));
    apilar(&jugador2, desapilar(&mazo));



}
mostrar(&jugador1);
mostrar(&jugador2);


    return 0;
}
