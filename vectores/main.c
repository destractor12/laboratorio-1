#include <stdio.h>
#include <stdlib.h>

//int miFuncion(int*);

int main()
{
  /*  int miEntero=3;
    int estado;

    estado=miFuncion(&miEntero);

    printf("El nuevo valor es: %d\n",miEntero);

    if(estado==1)
    {
        printf("El valor es mayor a 15\n");
    }
    else
    {
        printf("El valor es menor o igual a 15");
    }*/

    int miVector[5];
    int i;

    for(i=0;i<5;i++)
    {
      printf("Ingrese un numero: ");
      scanf("%d", &miVector[i]);
    }

    //printf("%d\n", miVector);

    for(i=0;i<5;i++)
    {
        if(miVector[i]%2==0)
        {
           printf("%d\n", miVector[i]);
        }

    }

    return 0;
}

/*int miFuncion(int* pValor)
{
    int queDevuelve = 0;
    int aux;
    aux=(*pValor);

    aux+=10;

    if(aux>15)
    {
        queDevuelve=1;
    }

    (*pValor)=aux;

    return queDevuelve;
}
*/
