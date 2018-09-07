#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char nombre[20];
    //char otronombre[20]="Pedro";
    int cantidad;
    //int compara;

    printf("Ingrese su nombre: ");
    fgets(nombre,20,stdin);
    //scanf("%[^\n]",nombre);


    puts(nombre);

    nombre[strlen(nombre)-1]='\0';

    cantidad=strlen(nombre);

    printf("cantidad %d", cantidad);

    /*int i=0;

    while(nombre[i]!='\0')
    {
        i++;
    }
    printf("%d",i);//esto es el codigo de strlen*/

    /*for(i=0;i<strlen(nombre);i++)//separo una cadena en caracteres y puedo contar la cantidad de una letra en especifico
    {
        if(tolower(nombre[i])=='a')
        {
            printf("%c",nombre[i]);
        }
    }*/





    /*strupr(otronombre);

    strlwr(nombre);

    strcat(otronombre," ");

    strcat(otronombre,nombre);

    printf("%s\n",otronombre);*/

    //printf("%s",nombre);

    /*strcpy(nombre,otronombre);

    printf("Ingrese su nombre: ");
    fflush(stdin);
    gets(nombre);//no necesita una mascara
    scanf("%s",nombre);no es necesario el & en el scanf cuando se utiliza un vector
    printf("%s\n",nombre);

    compara=strcmp(nombre,otronombre);//compara dos cadenas

    if(compara==0)
    {
        printf("Son iguales");
    }
    else//origen-destino
    {
        if(compara<0)
        {
            printf("%s esta despues de %s",otronombre,nombre);
        }
        else
        {
            printf("%s esta despues de %s",nombre,otronombre);

        }
    }
*/

    //printf("comparacion: %d",compara);

    /*cantidad=strlen(nombre);

    printf("\nLa cantidad de caracteres ingresados es: %d", cantidad);
*/
    return 0;
}
