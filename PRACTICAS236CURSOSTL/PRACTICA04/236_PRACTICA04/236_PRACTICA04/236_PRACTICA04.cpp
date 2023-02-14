#include <iostream>
#include <cmath>
using namespace std;

// Plantilla de función que usa tipos definidos dentro de los paréntesis angulares y que devuelve un tipo definido dentro de los paréntesis angulares.
template<typename T>
T suma(T a, T b) {
    return a + b;
}

// Plantilla de función que usa tipos definidos dentro de los paréntesis angulares y que devuelve el tipo de retorno auto.
template<typename T>
auto resta(T a, T b) {
    return a - b;
}

// Plantilla de función que usa tipos de parámetros auto y que devuelve un tipo definido dentro de los paréntesis angulares.
template<typename T>
T multiplicacion(auto a, T b) {
    return a * b;
}

// Plantilla de función que usa tipos de parámetros auto y que devuelve el tipo de retorno auto.
template<typename T, typename U>
auto division(T a, U b) {
    return a / b;
}

// Plantilla de función que usa tipos definidos dentro de los paréntesis angulares y que devuelve un tipo de retorno definido dentro de los paréntesis angulares.
template<typename T>
T potencia(T base, T exponente) {
    return pow(base, exponente);
}

int main() {
    // Ejemplos de uso de las plantillas de función
    cout << "5 + 3 = " << suma<int>(5, 3) << endl;
    cout << "5.5 - 2.3 = " << resta<double>(5.5, 2.3) << endl;
    cout << "3 * 6.7 = " << multiplicacion<double>(3, 6.7) << endl;
    cout << "10 / 2 = " << division<int, int>(10, 2) << endl;
    cout << "2 ^ 8 = " << potencia<int>(2, 8) << endl;

    return 0;
}



#if 0
//Código con comentarios detallados
#include <iostream>
#include <cmath>
using namespace std;

// Plantilla de función que usa tipos definidos dentro de los paréntesis angulares y que devuelve un tipo definido dentro de los paréntesis angulares.
template<typename T>
T suma(T a, T b) {
    return a + b;
}

// Plantilla de función que usa tipos definidos dentro de los paréntesis angulares y que devuelve el tipo de retorno auto.
template<typename T>
auto resta(T a, T b) {
    return a - b;
}

// Plantilla de función que usa tipos de parámetros auto y que devuelve un tipo definido dentro de los paréntesis angulares.
template<typename T>
T multiplicacion(auto a, T b) {
    return a * b;
}

// Plantilla de función que usa tipos de parámetros auto y que devuelve el tipo de retorno auto.
template<typename T, typename U>
auto division(T a, U b) {
    return a / b;
}

// Plantilla de función que usa tipos definidos dentro de los paréntesis angulares y que devuelve un tipo de retorno definido dentro de los paréntesis angulares.
template<typename T>
T potencia(T base, T exponente) {
    return pow(base, exponente);
}

int main() {
    // Ejemplos de uso de las plantillas de función

    // Ejemplo de uso de la plantilla suma con enteros
    cout << "5 + 3 = " << suma<int>(5, 3) << endl;

    // Ejemplo de uso de la plantilla resta con flotantes
    cout << "5.5 - 2.3 = " << resta<double>(5.5, 2.3) << endl;

    // Ejemplo de uso de la plantilla multiplicacion con auto y flotantes
    cout << "3 * 6.7 = " << multiplicacion<double>(3, 6.7) << endl;

    // Ejemplo de uso de la plantilla division con enteros
    cout << "10 / 2 = " << division<int, int>(10, 2) << endl;

    // Ejemplo de uso de la plantilla potencia con enteros
    cout << "2 ^ 8 = " << potencia<int>(2, 8) << endl;

    return 0;
}
#endif
