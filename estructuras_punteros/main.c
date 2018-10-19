#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int a;
    char b;

}eDato;

eDato* Funcion();

//eAlumno* cargar();

int main()
{
    eDato* d;
    d= Funcion();
    if(d==NULL)
    {
        printf("NO hay espacio");
    }
    else
    {
        printf("%d--%c",d->a,d->b);
    }

    /*eAlumno* pAlumno;
   pAlumno=cargar();
    int i;

    for(i=0;i<2;i++)
    {
        printf("%c--%d",pAlumno->nombre,pAlumno->nota);
    }*/
    return 0;
}

/*eDato* cargar()
{
    eAlumno auxAlumno;
    eAlumno* pAlumno;
    pAlumno=&auxAlumno;

    int i;

    for(i=0;i<2;i++)
    {
        printf("Ingrese el nombre: \n");
        fflush(stdin);
        scanf("%c",pAlumno->nombre);

         printf("Ingrese la nota: \n");
         fflush(stdin);
         scanf("%d",pAlumno->nota);
    }
    return pAlumno;
}*/

eDato* Funcion()
{

    eDato* pDato;

    pDato=(eDato*) malloc(sizeof(eDato));
    if(pDato!=NULL)
    {
        pDato->a = 4;
        pDato->b = 'f';
    }

    return pDato;
}
