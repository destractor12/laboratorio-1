#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*char palabra1[20]="Hola";
    FILE* pArchivo;

    pArchivo=fopen("texto","w");

    fprintf(pArchivo,"%s Como estan todos?", palabra1);

    fclose(pArchivo);
//---------------------------------------------lo que sigue es la lectura del archivo por consola con el puts
    char palabra[50];

   // FILE* pArchivo;

    pArchivo=fopen("texto","r");
    fgets(palabra,50,pArchivo);//se le agrega un \n al final de lo que se lee

    fclose(pArchivo);

    puts(palabra);*/

    FILE* archivo;

    archivo=fopen("texto2.txt","w");
    fprintf(archivo,"Hola\n");
    fprintf(archivo,"Chau");

    fclose(archivo);

    char p1[20];
    char p2[20];

    archivo=fopen("texto2.txt","r");
    fgets(p1,20,archivo);
    puts(p1);
    fgets(p2,20,archivo);
    puts(p2);

    return 0;
}
