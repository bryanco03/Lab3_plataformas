
// Función recursiva para búsqueda binaria


int busquedaBinariaRecursiva(int valor, int arreglo[], int izquierda, int derecha) {
    if (izquierda <= derecha) {
        int medio = izquierda + (derecha - izquierda) / 2;
        
        if (arreglo[medio] == valor) {
            return medio;
        }
        if (arreglo[medio] < valor) {
            return busquedaBinariaRecursiva(valor, arreglo, medio + 1, derecha);
        } else {
            return busquedaBinariaRecursiva(valor, arreglo, izquierda, medio - 1);
        }
    }
    
    return -1; // Valor no encontrado
}

