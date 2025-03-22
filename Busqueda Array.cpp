// Busqueda Array.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>  // Incluye la librería estándar para entrada y salida (como 'cout' y 'cin').

using namespace std;  // Usa el espacio de nombres estándar, para evitar escribir 'std::' antes de cada función u objeto.

int main() {  // Función principal, punto de inicio de la ejecución del programa.

    // Inicializa un arreglo de enteros con los valores {1, 5, 8, 2, 3, 9, 4}.
    int arreglo[] = { 1, 5, 8, 2, 3, 9, 4 };

    // Declara una variable para almacenar el número que el usuario quiere buscar en el arreglo.
    int clave;

    // Declara un booleano para indicar si el número fue encontrado o no. Se inicializa como 'false'.
    bool encontrado = false;

    // Pide al usuario que ingrese un número a buscar en el arreglo.
    cout << "Ingresa un numero a buscar: ";

    // Lee el número ingresado por el usuario y lo guarda en la variable 'clave'.
    cin >> clave;

    // Calcula el tamaño del arreglo dividiendo el tamaño total del arreglo entre el tamaño de un solo elemento.
    int tamano = sizeof(arreglo) / sizeof(arreglo[0]);

    // Bucle para recorrer cada elemento del arreglo.
    for (int i = 0; i < tamano; i++) {

        // Aquí hay un error. Se debe comparar 'arreglo[i]' (el elemento del arreglo en la posición 'i') con 'clave'.
        // Actualmente, se está comparando 'arreglo[1]' con 'clave', lo cual no tiene sentido porque siempre compara el segundo elemento (índice 1) del arreglo.
        if (arreglo[1] == clave) {  // ¡Error! La comparación debe ser 'arreglo[i] == clave' en lugar de 'arreglo[1] == clave'.

            // Si se encuentra el número, se imprime la posición en la que se encuentra.
            cout << "Numero encontrado en la posicion: " << i << endl;

            // Marca que el número ha sido encontrado.
            encontrado = true;

            // Sale del bucle una vez que se ha encontrado el número.
            break;
        }
    }

    // Si no se encontró el número en el arreglo (la variable 'encontrado' sigue siendo 'false').
    if (!encontrado) {

        // Imprime un mensaje indicando que el número no se encontró en el arreglo.
        cout << "Numero no encontrado en el array" << endl;

        // Termina la ejecución del programa (no es necesario, ya que la función 'main' terminaría aquí por defecto).
        return 0;
    }
}
