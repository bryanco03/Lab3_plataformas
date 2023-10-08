//Funcion de Búsqueda lineal

int busquedaLineal(int valor, int arreglo[], int longitud) {
    for (int i = 0; i < longitud; i++) {
        if (arreglo[i] == valor) {
            return i;
        }
    }
    return -1; // Valor no encontrado
}


