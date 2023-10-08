#include <stdio.h>
#include "funciones.h"

int main() {
    int arreglo[] = {21, 24, 65, 3, 56, 12, 35, 15};
    int longitud = sizeof(arreglo) / sizeof(arreglo[0]);
    int minimo, maximo;

    minimo = encontrarMinimo(arreglo, longitud);
    maximo = encontrarMaximo(arreglo, longitud);

    printf("Mínimo: %d\n", minimo);
    printf("Máximo: %d\n", maximo);

    encontrarMinMax(arreglo, &minimo, &maximo, longitud);

    printf("Mínimo (usando punteros): %d\n", minimo);
    printf("Máximo (usando punteros): %d\n", maximo);

    return 0;
}

