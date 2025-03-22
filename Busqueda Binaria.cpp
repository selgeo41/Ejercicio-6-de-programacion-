// Busqueda Binaria.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>  // Incluye la librería estándar para entrada y salida (como 'cout' y 'cin').
#include <algorithm> // Incluye la librería estándar que proporciona funciones como 'sort' para ordenar.

using namespace std;  // Usa el espacio de nombres estándar, así no es necesario escribir 'std::' antes de cada función u objeto.

int main() {  // Función principal, punto de entrada del programa.

    // Declara e inicializa un arreglo de enteros con los valores 1, 5, 8, 2, 3, 9, 4.
    int arreglo[] = { 1, 5, 8, 2, 3, 9, 4 };

    // Declara una variable para almacenar el número que se desea buscar en el arreglo.
    int clave;

    // Variable para indicar si el número fue encontrado.
    bool encontrado = false;

    // Variable para almacenar el índice donde se encuentra el número, inicialmente se establece en -1.
    int indice = -1;

    // Calcula el tamaño del arreglo dividiendo el tamaño total de la memoria ocupada por el arreglo entre el tamaño de un solo elemento.
    int tamano = sizeof(arreglo) / sizeof(arreglo[0]);

    // Ordena el arreglo de menor a mayor utilizando la función 'sort' de la librería <algorithm>.
    sort(arreglo, arreglo + tamano);

    // Imprime el mensaje "Array ordenado: ".
    cout << "Array ordenado: ";

    // Bucle que recorre el arreglo e imprime cada uno de los elementos, separados por un espacio.
    for (int n : arreglo) cout << n << " ";

    // Imprime un salto de línea después de imprimir todos los elementos del arreglo.
    cout << endl;

    // Imprime el mensaje pidiendo al usuario que ingrese un número para buscar en el arreglo.
    cout << "Ingresa un numero a buscar:";

    // Lee el número que el usuario desea buscar en el arreglo.
    cin >> clave;

    // Inicializa los índices de búsqueda binaria: 'izquierda' en 0 (inicio) y 'derecha' en el último índice del arreglo.
    int izquierda = 0;
    int derecha = tamano - 1;

    // Bucle que implementa la búsqueda binaria.
    while (izquierda <= derecha) {  // El bucle continúa mientras el índice izquierdo sea menor o igual al derecho.

        // Calcula el índice medio del arreglo.
        int medio = izquierda + (derecha - izquierda) / 2;

        // Compara si el valor en el medio del arreglo es igual al número buscado.
        if (arreglo[medio] == clave) {

            // Si se encuentra el número, se marca 'encontrado' como verdadero y se guarda el índice.
            encontrado = true;
            indice = medio;

            // Sale del bucle, ya que el número ha sido encontrado.
            break;
        }
        // Si el número en el medio es menor que la clave, la clave debe estar a la derecha, por lo que movemos el índice izquierdo.
        else if (arreglo[medio] < clave) {
            izquierda = medio + 1;
        }
        // Si el número en el medio es mayor que la clave, la clave debe estar a la izquierda, por lo que movemos el índice derecho.
        else {
            derecha = medio - 1;
        }
    }

    // Si se encontró el número, imprime la posición en la que se encuentra.
    if (encontrado) {
        cout << "Numero encontrado en la posicion: " << indice << endl;
    }
    // Si no se encontró el número, imprime un mensaje indicando que no se encontró.
    else {
        cout << "Numero no encontrado" << endl;
    }

    // La función 'main' termina y el programa finaliza correctamente.
    return 0;
}
