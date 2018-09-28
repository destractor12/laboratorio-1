#include <stdio.h>
#include <stdlib.h>
#include "UsuarioSeries.h"
#define TAMSERIE 20
#define TAMUSUARIO 100

int main()
{




    int opcion;
    eSerie listaDeSeries[TAMSERIE];
    eUsuario listaDeUsuarios[TAMUSUARIO];

    inicializarSeriesEstado(listaDeSeries, TAMSERIE);
    inicializarSeriesHardCode(listaDeSeries);

    inicializarUsuariosEstado(listaDeUsuarios,TAMUSUARIO);
    inicializarUsuariosHardCode(listaDeUsuarios);



    do
    {
        opcion = mostrarMenu();

        switch(opcion)
        {
            case 1:
            break;

            case 2:
            break;

            case 3:
            break;

            case 4:
            break;

            case 5: opcion=5;
            break;
        }

    }while(opcion!=5);
    return 0;
}
