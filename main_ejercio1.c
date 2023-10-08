#include <stdio.h>
#include "busqueda.h"

int main() {
    int arreglo[] = {2, 4, 6, 23, 56, 79};
    int longitud = sizeof(arreglo) / sizeof(arreglo[0]);
    int valorBuscado;

    printf("Ingrese un valor entero: ");
    scanf("%d", &valorBuscado);

    int posicionLineal = busquedaLineal(valorBuscado, arreglo, longitud);
    if (posicionLineal != -1) {
        printf("Búsqueda lineal: El valor %d se encuentra en la posición %d del arreglo.\n", valorBuscado, posicionLineal);
    } else {
        printf("Búsqueda lineal: El valor %d no fue encontrado en el arreglo.\n", valorBuscado);
    }

    int posicionBinaria = busquedaBinaria(valorBuscado, arreglo, longitud);
    if (posicionBinaria != -1) {
        printf("Búsqueda binaria: El valor %d se encuentra en la posición %d del arreglo.\n", valorBuscado, posicionBinaria);
    } else {
        printf("Búsqueda binaria: El valor %d no fue encontrado en el arreglo.\n", valorBuscado);
    }

    int posicionBinariaRecursiva = busquedaBinariaRecursiva(valorBuscado, arreglo, 0, longitud - 1);
    if (posicionBinariaRecursiva != -1) {
        printf("Búsqueda binaria recursiva: El valor %d se encuentra en la posición %d del arreglo.\n", valorBuscado, posicionBinariaRecursiva);
    } else {
        printf("Búsqueda binaria recursiva: El valor %d no fue encontrado en el arreglo.\n", valorBuscado);
    }

    return 0;
}

