
// Funcion para encontrar minimos y maximos para un arreglo usando punteros
void encontrarMinMax(int *arreglo, int *minimo, int *maximo, int longitud) {
    *minimo = arreglo[0];
    *maximo = arreglo[0];

    for (int i = 1; i < longitud; i++) {
        if (arreglo[i] < *minimo) {
            *minimo = arreglo[i];
        }
        if (arreglo[i] > *maximo) {
            *maximo = arreglo[i];
        }
    }
}

