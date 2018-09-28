#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Usuario.h"

void inicializarUsuariosEstado(eUsuario usuarios[], int cant)
{
    int i;

    for(i=0; i<cant; i++)
    {
        usuarios[i].estado = 0;
    }
}
void inicializarUsuariosHardCode(eUsuario usuarios[])
{


    int id[15] = {1000,1001,1002,1003,1004, 1005,1006,1007,1008,1009, 1010,1011,1012,1013,1014};
    char nombre[][50]= {"Juan","Maria","Pedro","Vanesa","Jose","Luisa","Laura","Marcelo","German","Victoria","Dafne","Antonela","Gisele","Dario","Pedro"};

    int serie[15] = {100,100,101,101,102,100,100,103,101,102,103,101,100,100,101};



    int i;

    for(i=0; i<15; i++)
    {
        usuarios[i].idUsuario=id[i];
        usuarios[i].idSerie=serie[i];
        usuarios[i].estado = 1;
        strcpy(usuarios[i].nombre, nombre[i]);

    }

}

void mostrarListaUsuarios(eUsuario usuario[], int tam)
{
    int i;
    for(i=0; i<tam;i++)
    {
        printf("%d -- %s \n",usuario[i].idUsuario,usuario[i].nombre );
    }

}

int mostrarMenu()
{
    int opcion;

    printf("1. Mostrar el listado de series\n");
    printf("2. Mostrar el listado de usuarios\n");
    printf("3. Mostrar el listado de Usuarios con el nombre de la serie que ve\n");
    printf("4. Mostrar por cada serie, el nombre de los usuarios que la ven\n");
    printf("5. Salir\n");
    printf("Ingrese una opcion: ");
    scanf("%d",&opcion);

    opcion=validarEntero(opcion,"una opcion: ",1,5);

    return opcion;

}

int validarEntero(int numero,char texto[],int min,int max)
{
    while(numero<min || numero>max)
    {

        printf("\nReingrese %s",texto);
        scanf("%d",&numero);
    }
    return numero;
}

