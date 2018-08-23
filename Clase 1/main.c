#include <stdio.h>
#include <stdlib.h>

int main()
{
    int unNumero;
    float otroNumero;
    char unCaracter;

    /*printf("%d--%p",unNumero,&unNumero);

    printf("\nPara German que lo mira por tv: %d y %.2f\n",unNumero,otroNumero);
    printf("\nEl caracter es: %c\n",unCaracter);*/

    printf("Ingrese un numero: ");
    scanf("%d",&unNumero);

    printf("Ingrese un numero flotante: ");
    scanf("%f",&otroNumero);
    fflush(stdin);

    printf("Ingrese un caracter: ");
    scanf("%c",&unCaracter);

    printf("\nEl numero que ingreso es: %d",unNumero);

    printf("\nEl numero flotante que ingreso es: %f",otroNumero);

    printf("\nEl caracter que ingreso es: %c",unCaracter);

    return 0;
}
