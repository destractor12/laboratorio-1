#include <stdlib.h>
#include <stdio.h>


int cargarAlumnos(char nombreCompleto[][50], int nota1[],int nota2[],int nota3[],float promedio[],int tam)
{
    int i;

    for(i=0; i<T; i++)
    {
        printf("Ingrese su nombre completo: ");
        fflush(stdin);
        gets(nombreCompleto[i]);
        printf("Ingrese la nota 1: ");
        scanf("%d",&nota1[i]);
        printf("Ingrese la nota 2: ");
        scanf("%d",&nota2[i]);
        printf("Ingrese la nota 3: ");
        scanf("%d",&nota3[i]);

        promedio[i]=calcularPromedio(nota1[i],nota2[i],nota3[i]);

    }

    return 0;
}

float calcularPromedio(int nota1, int nota2, int nota3)
{
    float promedio;

    promedio=(float)(nota1+nota2+nota3/3);

    return promedio;
}
