#include <iostream>
#include <iostream>

// Definimos una plantilla de variable para la gravedad en la Luna
template <typename T>
const T GRAVITY_MOON = 1.62; // m/s²

// Definimos una función para calcular el peso de un objeto en la Luna
template <typename T>
T peso_en_luna(T masa) {
    T gravedad = GRAVITY_MOON<T>;
    return masa * gravedad;
}

// Programa principal
int main() {
    // Solicitamos la masa del objeto al usuario
    double masa;
    std::cout << "Introduce la masa del objeto en kg: ";
    std::cin >> masa;

    // Calculamos el peso del objeto en la Luna
    double peso = peso_en_luna(masa);

    // Mostramos el resultado en pantalla
    std::cout << "El peso del objeto en la Luna es de " << peso << " N.\n";

    return 0;
}

