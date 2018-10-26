#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero=4;

    FILE* pArchivo;

    pArchivo=fopen("archivoBinario.dat","wb");//wb es para escribir numeros

    fwrite(&numero,sizeof(int),1,pArchivo);//1.direccion de memoria donde esta guardado el valor 2.tamaño de la variable 3.cantidad de numeros 4.el puntero a FILE

    fclose(pArchivo);

//-----------------------------------------------------------------------

    //FILE* pArchivo;

    pArchivo=fopen("archivoBinario.dat","rb");

    fread(&numero,sizeof(int),1,pArchivo);

    fclose(pArchivo);

    printf("El numero es %d", numero);

    return 0;
}
