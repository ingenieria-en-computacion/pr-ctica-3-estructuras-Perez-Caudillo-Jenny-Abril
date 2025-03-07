#include "complejo.h"
#include <stdio.h>
#include <math.h>

COMPLEJO* AsignaReal(COMPLEJO *c, DATO r){
    (*c).real = r;
    return c;
}

COMPLEJO* AsignaImaginaria(COMPLEJO *c, DATO i) {
    (*c).imaginario = i;
    return c;
}

DATO ParteReal(COMPLEJO c) {
    return c.real;
}

DATO ParteImaginaria(COMPLEJO c) {
    return c.imaginario;
}

DATO Modulo(COMPLEJO c) {
    return sqrtf(c.real * c.real + c.imaginario * c.imaginario);
}

COMPLEJO Suma(COMPLEJO c1, COMPLEJO c2) {
    COMPLEJO resultado;
    resultado.real = c1.real + c2.real;
    resultado.imaginario = c1.imaginario + c2.imaginario;
    return resultado;
}

void ImprimeComplejo(COMPLEJO c) {
    printf("\n%.2f + %.2fi\n", c.real, c.imaginario);
}

