#include <stdio.h>
#include "complejo.h"

int main(){

    COMPLEJO c1, c2;
    AsignaReal(&c1, 4);
    AsignaImaginaria(&c1, 7);
    AsignaReal(&c2, 5);
    AsignaImaginaria(&c2, 6);
    
    printf("\nPrimer numero complejo:");
    ImprimeComplejo(c1);
    printf("Segundo numero complejo: ");
    ImprimeComplejo(c2);
    
    printf("\nSuma de los dos anteriores numeros:");
    ImprimeComplejo(Suma(c1, c2));
    
    printf("\nModulo del primer numero complejo: %.2f\n", Modulo(c1));
    printf("Modulo del segundo numero complejo: %.2f\n\n", Modulo(c2));
    
    return 0;
}