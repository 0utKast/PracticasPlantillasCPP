//Solución Práctica Nº 1.
#include <iostream>

using namespace std;

template<typename T>
T maximo(T a, T b) {
    return (a > b) ? a : b;
}

int main() {
    setlocale(LC_ALL, "es_ES.utf-8");
    int max_int = maximo(10, 20);
    float max_float = maximo(3.14, 2.71);
    cout << "El máximo de 10 y 20 es: " << max_int << endl;
    cout << "El máximo de 3.14 y 2.71 es: " << max_float << endl;
    return 0;
}


#if 0
//Solución Práctica Nº 1 con comentarios detallados
#include <iostream>
#include <locale.h> // Incluye la biblioteca locale.h para usar setlocale
using namespace std;

template<typename T>
T maximo(T a, T b) {
    return (a > b) ? a : b; // Devuelve el valor máximo de a y b
}

int main() {
    setlocale(LC_ALL, "es_ES.utf-8"); // Configura la región local para usar la configuración regional del sistema
    int max_int = maximo(10, 20); // Encuentra el valor máximo de 10 y 20
    float max_float = maximo(3.14, 2.71); // Encuentra el valor máximo de 3.14 y 2.71
    cout << "El máximo de 10 y 20 es: " << max_int << endl; // Imprime el valor máximo de 10 y 20
    cout << "El máximo de 3.14 y 2.71 es: " << max_float << endl; // Imprime el valor máximo de 3.14 y 2.71
    return 0; // Retorna 0 para indicar que el programa se ejecutó correctamente
}
#endif