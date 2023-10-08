
// Funcion para búsqueda binaria 
int busquedaBinaria(int valor, int arreglo[], int longitud) {
    int izquierda = 0;
    int derecha = longitud - 1;

    while (izquierda <= derecha) {
        int medio = izquierda + (derecha - izquierda) / 2;
        
        if (arreglo[medio] == valor) {
            return medio;
        }
        if (arreglo[medio] < valor) {
            izquierda = medio + 1;
        } else {
            derecha = medio - 1;
        }
    }
    
    return -1; // Valor no encontrado
}

