#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero;
    int numerosneg = 0;
    int numerospos = 0;
    int sumneg = 0;
    int sumpos = 0;
    int cantceros = 0;
    int cantpares = 0;
    int difnegpos;
    int maximo;
    int minimo;
    int flag = 0;
    int flag1 = 0;
    float prompos;
    float promneg;
    char respuesta;

    printf("¿Desea ingresar numeros? s/n: ");
    scanf("%c",&respuesta);


    while(respuesta=='s')
    {
        printf("Ingrese un numero: ");
        scanf("%d",&numero);

        if(numero>0)
        {
            numerospos++;
            sumpos=numero+sumpos;
        }
        else if(numero<0)
        {
            numerosneg++;
            sumneg=sumneg+numero;
        }
        else
        {
            cantceros++;
        }
        if(numero%2==0)
        {
            cantpares++;
        }

        if(flag==0 || numero>maximo)
        {
            maximo = numero;
            flag = 1;
        }
        if(flag1==0 || numero<minimo)
        {
            minimo = numero;
            flag1 = 1;
        }


        fflush(stdin);
        printf("¿Desea ingresar numeros? s/n");
        scanf("%c",&respuesta);
    }

    promneg=(float)sumneg/numerosneg;
    prompos=(float)sumpos/numerospos;
    difnegpos=sumpos-(sumneg);
    printf("\nla suma de los numeros positivos es: %d", sumpos);
    printf("\nla suma de los numeros negativos es: %d", sumneg);
    printf("\nla cantidad de numeros positivos es: %d", numerospos);
    printf("\nla cantidad de numeros negativos es: %d", numerosneg);
    printf("\nel promedio de los numeros positivos es: %.2f", prompos);
    printf("\nel promedio de los numeros negativos es: %.2f", promneg);
    printf("\nla cantidad de ceros es: %d",cantceros);
    printf("\nla cantidad de numeros pares es: %d", cantpares);
    printf("\nla diferencia entre los numeros positivos y negativos  es: %d", difnegpos);


    return 0;
}
