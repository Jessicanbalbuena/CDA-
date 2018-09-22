
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "persona.h"

int main()
{
    int CANT_PERSONAS = 50;

    EPersona arrayPersonas[CANT_PERSONAS];
    if (inicializar(arrayPersonas,CANT_PERSONAS))
    {
        printf("ERROR");
    }
    return 0;
}
