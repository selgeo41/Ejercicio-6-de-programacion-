// Ordenamiento de burbuja.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>  // Incluye la librería estándar para entrada y salida (como 'cout' y 'cin').

using namespace std;  // Usa el espacio de nombres estándar para no tener que escribir 'std::' antes de funciones y objetos.

void bubbleSort(int arr[], int n) {  // Función que implementa el algoritmo de ordenamiento Bubble Sort. Recibe un arreglo 'arr' y su tamaño 'n'.

    // Bucle externo: recorre el arreglo desde 0 hasta n-1.
    for (int i = 0; i < n - 1; i++) {

        // Bucle interno: recorre el arreglo desde 0 hasta n-i-1 (esto reduce el rango de elementos por cada paso del bucle externo).
        for (int j = 0; j < n - i - 1; j++) {

            // Si el elemento actual es mayor que el siguiente, realiza un intercambio.
            if (arr[j] > arr[j + 1]) {

                // Intercambia los elementos 'arr[j]' y 'arr[j + 1]' utilizando la función 'swap'.
                swap(arr[j], arr[j + 1]);

            }

        }

    }

}

void printArray(int arr[], int n) {  // Función para imprimir los elementos del arreglo. Recibe el arreglo 'arr' y su tamaño 'n'.

    // Bucle que recorre el arreglo e imprime cada elemento seguido de un espacio.
    for (int i = 0; i < n; i++) cout << arr[i] << " ";

    // Imprime un salto de línea al final para mejorar la presentación de los resultados.
    cout << endl;

}

int main() {  // Función principal, punto de inicio del programa.

    // Define un arreglo de enteros con los valores {5, 2, 9, 1, 5, 6}.
    int arr[] = { 5, 2, 9, 1, 5, 6 };

    // Calcula el tamaño del arreglo dividiendo el tamaño total de memoria ocupada por el arreglo entre el tamaño de un solo elemento.
    int n = sizeof(arr) / sizeof(arr[0]);

    // Llama a la función 'bubbleSort' para ordenar el arreglo 'arr'.
    bubbleSort(arr, n);

    // Llama a la función 'printArray' para imprimir el arreglo ordenado.
    printArray(arr, n);

    // La función main termina y el programa finaliza correctamente con valor 0.
    return 0;
}