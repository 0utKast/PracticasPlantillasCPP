#include <iostream>
using namespace std;

template <typename T, typename U>
void intercambiar(T& a, U& b) {
    T temp = a;
    a = static_cast<T>(b);
    b = static_cast<U>(temp);
}

int main() {
    setlocale(LC_ALL, "es_ES.utf-8");
    int a = 10;
    float b = 3.14;
    cout << "Antes del intercambio: a = " << a << ", b = " << b << endl;
    intercambiar(a, b);
    cout << "Después del intercambio: a = " << a << ", b = " << b << endl;
    return 0;
}


//Versión del código con comentarios detallados
#if 0
#include <iostream>
using namespace std;

// Definir plantilla de función para intercambiar valores de dos variables de diferentes tipos
template <typename T, typename U>
void intercambiar(T& a, U& b) {
    // Declarar una variable temporal para almacenar el valor de a
    T temp = a;

    // Asignar el valor de b a a, convirtiéndolo al tipo de a usando static_cast
    a = static_cast<T>(b);

    // Asignar el valor temporal de a a b, convirtiéndolo al tipo de b usando static_cast
    b = static_cast<U>(temp);
}

int main() {
    // Establecer localización para imprimir caracteres con tilde
    setlocale(LC_ALL, "es_ES.utf-8");

    // Definir dos variables de diferentes tipos
    int a = 10;
    float b = 3.14;

    // Imprimir los valores de las variables antes del intercambio
    cout << "Antes del intercambio: a = " << a << ", b = " << b << endl;

    // Llamar a la plantilla de función para intercambiar los valores de las variables
    intercambiar(a, b);

    // Imprimir los valores de las variables después del intercambio
    cout << "Después del intercambio: a = " << a << ", b = " << b << endl;

    return 0;
}
#endif