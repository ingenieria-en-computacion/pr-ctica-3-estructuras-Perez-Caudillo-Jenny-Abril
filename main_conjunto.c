#include <stdio.h>
#include "conjunto.h"

int main(){
    CONJUNTO c, d, e;
    c = conjunto_vacio();
    d = conjunto_vacio();
    e = conjunto_vacio();

    printf("\nConjuntos c, d y e:\n");
    print_conjunto(c);
    print_conjunto(d);
    print_conjunto(e);

    printf("\nEl conjunto c esta vacio %d\n", es_vacio(c));

    printf("\nSe agregaron elementos a los conjuntos c y d:\n");

    c = agregar(c, 2);
    c = agregar(c, 3);
    c = agregar(c, 19);
    c = agregar(c, 11);
    c = agregar(c, 15);
    print_conjunto(c);

    d = agregar(d, 12);
    d = agregar(d, 22);
    d = agregar(d, 32);
    d = agregar(d, 2);
    print_conjunto(d);

    printf("\nUnion de los dos anteriores conjuntos:\n");
    e = _union(c, d);
    print_conjunto(e);
    printf("\n");

    return 0;
}