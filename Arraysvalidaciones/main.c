#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>//para isspace

int main()
{
    char nombre[20];
    char apellido[20];
    char nombreCompleto[200];
    char buffer[1000];
    int i;

    puts("Ingrese su nombre");
    fflush(stdin);
    gets(buffer);
    whille(strlen(buffer)>19)
    {
        puts("Reingrese su nombre");
        fflush(stdin);
        gets(buffer);
    }







    strcpy(apellido, buffer);

    strcpy(nombreCompleto, apellido);
    strcat(nombreCompleto,", ");
    strcat(nombreCompleto,nombre);

    strlwr(nombreCompleto);

    nombreCompleto[0]=toupper(nombreCompleto[0]);

    for(i=0; i<strlen(nombreCompleto);i++)
    {
        //if(nombreCompleto[i]==' ')
        if(isspace(nombreCompleto[i]))
        {
            nombreCompleto[i+1]=toupper(nombreCompleto[i+1]);
        }
    }

    return 0;
}
