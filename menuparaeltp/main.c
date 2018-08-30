#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int pedirnumeroentero(char[]);

int main()
{
    /*char opcion;

    do
    {
     printf("(A)lta usuario\n");
     printf("(B)aja usuario\n");
     printf("(M)odificacion usuario\n");
     printf("(S)alir\n");
     printf("Elija una opcion: ");
     fflush(stdin);
     scanf("%c",&opcion);

     opcion=toupper(opcion);

     switch(opcion)
     {
        case 'A':   printf("Estoy dando de Alta...\n");
        break;

        case 'B':   printf("Estoy dando de Baja...\n");
        break;


        case 'M':   printf("Estoy Modificando...\n");
        break;

     }
    system("pause");
    system("cls");


    }while(opcion!='S');
    */
    //int numero;

    //numero=pedirnumero();

    int legajo;
    int nota;
    int edad;

    legajo=pedirnumeroentero("Ingrese un legajo: ");
    nota=pedirnumeroentero("Ingrese una nota: ");
    edad=pedirnumeroentero("Ingrese una edad: ");

    printf("%d\n",legajo);
    printf("%d\n",nota);
    printf("%d",edad);

    return 0;
}


int pedirnumeroentero(char texto[])
{
    int numero;

    printf("%s", texto);
    scanf("%d",&numero);

    return numero;
}

