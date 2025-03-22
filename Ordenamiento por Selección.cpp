// Ordenamiento por Selección.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>  // Incluye la librería estándar para entrada y salida (como 'cout' y 'cin').

using namespace std;  // Usa el espacio de nombres estándar, para evitar escribir 'std::' antes de funciones y objetos.

void selectionSort(int arr[], int n) {  // Función que implementa el algoritmo de ordenamiento Selection Sort. Recibe el arreglo 'arr' y su tamaño 'n'.

    // Bucle externo: recorre el arreglo desde 0 hasta n-1, para ir seleccionando el menor elemento en cada iteración.
    for (int i = 0; i < n - 1; i++) {

        // Asume que el primer elemento no ordenado es el más pequeño.
        int minIdx = i;

        // Bucle interno: recorre los elementos restantes después del índice 'i'.
        for (int j = i + 1; j < n; j++) {

            // Si encuentra un elemento menor que el actual mínimo, actualiza 'minIdx' para que apunte a la posición de ese elemento.
            if (arr[j] < arr[minIdx]) {

                // Actualiza el índice del elemento mínimo.
                minIdx = j;

            }
        }

        // Intercambia el elemento en la posición 'i' con el mínimo encontrado en el resto del arreglo.
        swap(arr[i], arr[minIdx]);

    }

}

int main() {  // Función principal, punto de inicio de la ejecución del programa.

    // Define un arreglo de enteros con los valores {64, 25, 12, 22, 11}.
    int arr[] = { 64, 25, 12, 22, 11 };

    // Calcula el tamaño del arreglo dividiendo el tamaño total del arreglo entre el tamaño de un solo elemento.
    int n = sizeof(arr) / sizeof(arr[0]);

    // Llama a la función 'selectionSort' para ordenar el arreglo 'arr'.
    selectionSort(arr, n);

    // Bucle que recorre el arreglo y lo imprime en la consola.
    for (int i = 0; i < n; i++) cout << arr[i] << " ";

    // Retorna 0, indicando que el programa terminó correctamente.
    return 0;
}
