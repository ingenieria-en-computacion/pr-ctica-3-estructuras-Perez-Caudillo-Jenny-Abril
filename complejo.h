#ifndef __COMPLEJO_H__
#define __COMPLEJO_H__

typedef float DATO;

typedef struct Complejo{
    DATO real;
    DATO imaginario;
} COMPLEJO;

COMPLEJO * AsignaReal(COMPLEJO *, DATO);
COMPLEJO * AsignaImaginaria(COMPLEJO *, DATO);
DATO ParteReal(COMPLEJO);
DATO ParteImaginaria(COMPLEJO);
DATO Modulo(COMPLEJO);
COMPLEJO Suma(COMPLEJO, COMPLEJO);
void ImprimeComplejo(COMPLEJO);

#endif