#include <iostream>
#include <cmath>

using namespace std;

template <typename T>
T Max(T a, T b) {
    return (a > b) ? a : b;
}

template<>
double Max<double>(double a, double b) {
    if (fabs(a) < fabs(b)) {
        return a;
    }
    else {
        return b;
    }
}

int main() {
    int a = 5, b = 10;
    double c = -0.5, d = 0.7;

    cout << "Max(a, b) = " << Max(a, b) << endl;
    cout << "Max(c, d) = " << Max(c, d) << endl;

    return 0;
}



#if 0
//Código con comentarios detallados
#include <iostream>
#include <cmath>

// Incluimos el espacio de nombres "std" para usar la función "fabs"
using namespace std;

// Definimos la plantilla de función genérica "Max"
template <typename T>
T Max(T a, T b) {
    // Devolvemos el valor máximo entre los dos argumentos
    return (a > b) ? a : b;
}

// Definimos la especialización de la plantilla "Max" para el tipo "double"
template<>
double Max<double>(double a, double b) {
    // Devolvemos el valor más cercano a cero
    if (fabs(a) < fabs(b)) {
        return a;
    }
    else {
        return b;
    }
}

int main() {
    // Declaramos dos variables enteras
    int a = 5, b = 10;
    // Declaramos dos variables dobles
    double c = -0.5, d = 0.7;

    // Mostramos el resultado de la llamada a la plantilla "Max" con las variables enteras
    cout << "Max(a, b) = " << Max(a, b) << endl;
    // Mostramos el resultado de la llamada a la plantilla "Max" con las variables dobles
    cout << "Max(c, d) = " << Max(c, d) << endl;

    // Finalizamos el programa
    return 0;
}
#endif
