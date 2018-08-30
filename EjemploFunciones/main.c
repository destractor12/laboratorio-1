#include <stdio.h>
#include <stdlib.h>


void sumar(void);


int main()
{
    sumar();
    return 0;
}

void sumar(void)
{
    int x;
    int y;
    int suma;

    printf("Ingrese un numero: ");
    scanf("%d",&x);

    printf("Ingrese otro numero: ");
    scanf("%d",&y);

    suma= x+y;
    printf("La suma es: %d", suma);
}
