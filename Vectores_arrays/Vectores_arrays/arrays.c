#include <stdio.h>
#include <stdlib.h>
#include "arrays.h"

void inicializadorVector(int miVector[], int tam)
{
    int i;

    for(int=0;i<tam;i++)
    {
        miVector[i]=
    }
}

int sumarValores(int miVector[],int tam)
{
    int acumulador=0;
    int i;
    for(i=0;i<tam;i++)
    {
        if(miVector[i]!=-1)
        {
            acumulador= acumulador+miVector[i];
        }

    }
    return acumulador;
}

int menuArray()
{
    int opcion;
    printf("1.Cargar\n2.Mostrar\n3.Sumar\4.Salir\nElija una opcion: ");
    scanf("%d",&opcion);
    return opcion;
}
