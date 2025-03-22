// Ejercicio 6.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>  // Incluye la librería que permite la entrada y salida estándar (como 'cout' para imprimir).
#include <vector>    // Incluye la librería que permite usar el contenedor 'vector'.

using namespace std;  // Usa el espacio de nombres estándar para evitar escribir 'std::' antes de cada función u objeto.

int main() {  // Función principal, punto de entrada del programa.
    int filas = 3, columnas = 4;  // Declara e inicializa las variables para las dimensiones de la matriz: 3 filas y 4 columnas.

    // Crea una matriz 2D de tamaño 3x4, inicializada con ceros.
    vector<vector<int>> matriz(filas, vector<int>(columnas));

    // Bucle anidado para recorrer cada elemento de la matriz y llenarla con valores.
    for (int i = 0; i < filas; i++) {  // Bucle exterior que recorre las filas (de 0 a 2, total de 3 filas).
        for (int j = 0; j < columnas; j++) {  // Bucle interior que recorre las columnas (de 0 a 3, total de 4 columnas).
            // Asigna a cada elemento de la matriz el valor de la multiplicación de los índices (i + 1) * (j + 1).
            matriz[i][j] = (i + 1) * (j + 1);
        }
    }

    // Bucle para imprimir cada fila de la matriz.
    for (const auto& fila : matriz) {  // Recorre cada fila en la matriz, 'fila' es una referencia constante a cada fila del vector.
        for (int valor : fila) {  // Recorre cada valor en la fila.
            cout << valor << "\t";  // Imprime el valor seguido de un tabulador para separar los valores en columnas.
        }
        cout << endl;  // Im
    }