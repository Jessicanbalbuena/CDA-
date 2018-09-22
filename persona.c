#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "persona.h"
//siempre que esta en el if 1 es falso

int inicializar(EPersona* array, int cantidad)  //recibimos un puntero
{
    int retorno = 0,i ;// 1; //valor que retorna si esta todo mal
    if ( array != NULL && cantidad > 0 ) //siempre tenemos que hacer eso cuando recibimos un array
    {
        retorno = 1;
        for ( i = 0; i < cantidad; i++)
        {
            array[i]. isEmpty = 1;
            printf("%d\n",array [i].isEmpty);
        }
    }
    return retorno;
}

int altaPersona(EPersona array[], int indice, int cantidad) //epersona* listadepersonas
{
    EPersona auxPersonsa;
    int retorno;
}
