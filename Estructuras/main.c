#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define A 5

typedef struct
{
    int legajo;
    char nombre[50];
    float promedio;
    char direccion[20];
}eAlumno;

void mostrarAlumno(eAlumno);
eAlumno cargarAlumno();
void cargarListado(eAlumno[], int);
void mostrarListado(eAlumno[],int);

int main()
{
   // eAlumno miAlumno;
    eAlumno listaAlumnos[A];

   cargarListado(listaAlumnos,A);
   mostrarListado(listaAlumnos,A);


   /* miAlumno.legajo=231;
    strcpy(miAlumno.nombre,"Juan");
    miAlumno.promedio= 6.79;
    */

    //miAlumno=cargarAlumno();


   // mostrarAlumno(miAlumno);



    return 0;
}


void mostrarAlumno(eAlumno alumnoParametro)
{
    printf("%d--%s--%.2f--%s",alumnoParametro.legajo,alumnoParametro.nombre,alumnoParametro.promedio,alumnoParametro.direccion);
}

eAlumno cargarAlumno()
{
    eAlumno miAlumno;

     printf("Ingrese un legajo: ");
    scanf("%d",&miAlumno.legajo);

    printf("Ingrese un nombre: ");
    fflush(stdin);
    gets(miAlumno.nombre);

    printf("Ingrese un promedio: ");
    scanf("%f",&miAlumno.promedio);

    printf("Ingrese una direccion: ");
    fflush(stdin);
    gets(miAlumno.direccion);

}

void cargarListado(eAlumno listado[], int tam)
{
    int i;
    for(i=0;i<tam;i++)
   {
       listado[i]=cargarAlumno();
       system("cls");
   }
}

void mostrarListado(eAlumno listado[],int tam)
{
    int i;
     for(i=0;i<tam;i++)
   {
        mostrarAlumno(listado[i]);
   }
}
