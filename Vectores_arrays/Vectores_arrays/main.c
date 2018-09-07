#include <stdio.h>
#include <stdlib.h>
#include "arrays.h"
#define T 100

int main()
{
    int miVector[T];
    int suma;
    int opcion;

    inicializadorVector(miVector,T);

    opcion=menuArray();

    cargarVector(miVector,T);

    mostrarVector(miVector,T);




    return 0;
}
