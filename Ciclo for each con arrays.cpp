// Ciclo for each con arrays.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>  // Incluye la librería que permite usar las funciones de entrada y salida estándar, como 'cout'.
#include <vector>    // Incluye la librería que permite trabajar con vectores (contenedores dinámicos).

using namespace std;  // Usa el espacio de nombres estándar para evitar escribir 'std::' antes de cada función u objeto (como 'cout').

int main() {  // Función principal del programa, donde comienza la ejecución.

    // Se declara e inicializa un vector llamado 'numeros' con los valores 1, 2, 3, 4, 5.
    vector<int> numeros{ 1, 2, 3, 4, 5 };

    // Imprime el mensaje "Elementos del vector: ".
    cout << "Elementos del vector: ";

    // Bucle para recorrer cada elemento del vector 'numeros'.
    for (const auto& num : numeros) {  // Usamos 'auto' para deducir el tipo de 'num' automáticamente. 'const' asegura que 'num' no se modifique.

        cout << num << " ";  // Imprime cada número seguido de un espacio en la consola.
    }

    // Imprime un salto de línea después de imprimir todos los elementos del vector.
    cout << endl;

    // Bucle para modificar los elementos del vector 'numeros'.
    for (auto& num : numeros) {  // Usamos 'auto' para deducir el tipo y 'num' como una referencia, para modificar directamente los elementos.

        num += 1;  // Suma 1 a cada elemento del vector.
    }

    // Imprime el mensaje "Elementos modificados: ".
    cout << "Elementos modificados: ";

    // Bucle para imprimir los elementos modificados del vector.
    for (const auto& num : numeros) {  // Recorre el vector 'numeros' nuevamente, usando 'const' para no modificar los elementos.

        cout << num << " ";  // Imprime cada número modificado seguido de un espacio.
    }

    // Imprime un salto de línea después de imprimir todos los elementos modificados.
    cout << endl;

    // La función 'main' termina y devuelve 0, indicando que el programa finalizó correctamente.
    return 0;
}
