#include <stdio.h>
#include <stdlib.h>
#define T 5

int main()
{
    //int* pEntero;
    int* pvector;
    int* pAux;
    int i;


    //pEntero =(int*) malloc(sizeof(int));

    pvector =(int*) malloc(sizeof(int)*T);//multiplicando el sizeof se obtiene el espacio para simular un array
    //calloc(sizeof(int),T); inicializa los 0.
    if(pvector!=NULL)
    {
        /*pEntero = 9;
        printf("%p--%d\n",pEntero,*pEntero);
        free(pEntero);
        printf("%p--%d",pEntero,*pEntero);*/

        for(i=0; i<T; i++)
        {
            *(pvector + i) = i+1;
        }
        for(i=0; i<T; i++)
        {
            printf("%d\n", *(pvector + i));

        }
        system("pause");

        pAux = (int*) realloc(pvector,sizeof(int)* (T+5));

        if(pAux!= NULL)
        {
            pvector=pAux;
            for(i=T; i<T+5; i++)
            {
                *(pvector + i) = i+1;
            }

            printf("\n ACA MUESTRO TODOS\n");

            for(i=0; i<T+5; i++)
            {
                printf("%d\n", *(pvector + i));

            }
            system("pause");

            printf("\nACA TENGO 3\n");
            pvector = realloc(pvector, sizeof(int)*3);
            for(i=0; i<3; i++)
            {
                printf("%d\n", *(pvector + i));
            }

        }


    }
    else
    {
        printf("No hay suficiente espacio");
    }

    return 0;
}
