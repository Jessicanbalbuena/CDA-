/*

int inicializar (EPersona* array, int cantidad); //recorre la lista y inicializar todo en uno (empty)
int altaPersona(EPersona* array, int indice, int cantidad);  //para dar el alta a una persona
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "fecha.h"


typedef struct
{
    int id;
    int isEmpty;
    char nombre[50];
    char apellido[50];
    EFecha nacimiento;
} EPersona;



int inicializar(EPersona* array, int cantidad);
