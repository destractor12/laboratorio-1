#include <stdio.h>
#include <stdlib.h>
#define T 3
#include "Funciones.h"
/*a)Cargar los datos (carga aleatoria)
b)Modificar: Se ingresa el legajo, lo busca y si lo encuentra modifica la nota 1
c)Informes:
1-Los alumnos con promedio 6 o mas
2- El/Los alumnos con maximo promedio
3-La/s alumna/s con minimo promedio
4-Cantidad de alumnos desaprobados (se aprueba con 6 o mas en el promedio)
5-Cantidad de alumnos aprobados
6-Porcentaje de aprobados y desaprobados
7-Los alumnos que se llamen Juan
8-Ordenar los datos alfabeticamente por nombre
9-Ordenar por nombre y ante igualdad de nombre por promedio
10-Mostrar los alumnos cuyo nombre comience con P
11-Ordenar alumnos por sexo
12-Realizar un grafico que muestre:
    Alumnos entre 15-18(Inclusive)
                  19-25(Inclusive)
                  26 o mas
*/


int main()
{
    char nombreCompleto[T][50];
    int nota1[T];
    int nota2[T];
    int nota3[T];
    int edad[T];
    float promedio[T];
    int i;


    cargarAlumnos(nombreCompleto,nota1,nota2,nota3,promedio,T);


        for(i=0;i<T;i++)
        {
            printf("%20s %2d %2d %2d %.2f\n",nombreCompleto[i],nota1[i],nota2[i],nota3[i],promedio[i]);
        }


    return 0;
}
