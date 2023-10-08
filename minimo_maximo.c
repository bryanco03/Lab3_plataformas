// Funcion para encontrar un minimo en un arreglo 
int encontrarMinimo(int arreglo[], int longitud) {
    int minimo = arreglo[0];

    for (int i = 1; i < longitud; i++) {
        if (arreglo[i] < minimo) {
            minimo = arreglo[i];
        }
    }

    return minimo;
}

// Funcion para encontrar un maximo en un arreglo
int encontrarMaximo(int arreglo[], int longitud) {
    int maximo = arreglo[0];

    for (int i = 1; i < longitud; i++) {
        if (arreglo[i] > maximo) {
            maximo = arreglo[i];
        }
    }

    return maximo;
}

