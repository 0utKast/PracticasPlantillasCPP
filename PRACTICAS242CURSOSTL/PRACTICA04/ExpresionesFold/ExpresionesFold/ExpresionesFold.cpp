#include <iostream>

// Función para la suma usando una expresión fold binaria izquierda
template<typename... T>
int sum(T... args) {
    return (args + ...);
}

// Función para la resta usando una expresión fold binaria izquierda
template<typename... T>
int sub(T... args) {
    return (args - ...);
}

// Función para el producto usando una expresión fold binaria izquierda
template<typename... T>
int mult(T... args) {
    return (args * ...);
}

// Función para la potencia usando una expresión fold binaria izquierda
template<typename... T>
int pow(int base, T... exps) {
    return ((base ^ exps) ^ ...);
}

// Función para la suma usando una expresión fold unaria derecha
template<typename... T>
int sum_unary(T... args) {
    return (args + ... + 0);
}

int main() {
    // Pruebas para la función sum
    std::cout << sum(1, 2, 3, 4) << '\n';  // Salida esperada: 10
    std::cout << sum(5, 10, 15, 20, 25) << '\n';  // Salida esperada: 75
    std::cout << sum(3, 5) << '\n';  // Salida esperada: 8

    // Pruebas para la función sub
    std::cout << sub(10, 2, 3) << '\n';  // Salida esperada: 5
    std::cout << sub(20, 5, 3, 1) << '\n';  // Salida esperada: 11
    std::cout << sub(8, 2, 2) << '\n';  // Salida esperada: 4

    // Pruebas para la función mult
    std::cout << mult(2, 3, 4) << '\n';  // Salida esperada: 24
    std::cout << mult(5, 6, 7, 2) << '\n';  // Salida esperada: 420
    std::cout << mult(3, 4) << '\n';  // Salida esperada: 12

    // Pruebas para la función pow
    std::cout << pow(2, 3, 4) << '\n';  // Salida esperada: 4096
    std::cout << pow(5, 6, 2) << '\n';  // Salida esperada: 15625
    std::cout << pow(3, 2) << '\n';  // Salida esperada: 9

    // Pruebas para la función sum_unary
    std::cout << sum_unary(1, 2, 3, 4) << '\n';  // Salida esperada: 10
    std::cout << sum_unary(5, 10, 15, 20, 25) << '\n';  // Salida esperada: 75
    std::cout << sum_unary(3, 5) << '\n';  // Salida esperada: 8

    return 0;
}

