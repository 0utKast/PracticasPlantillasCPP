#if 0
#include <iostream>
#include <tuple>

// Función que utiliza std::tuple como plantilla variádica para sumar n argumentos
template<typename... Ts>
auto sumar(Ts... args) {
    return (args + ...);
}

int main() {
    // Llamada a la función sumar con tres argumentos de tipo int
    int resultado1 = sumar(1, 2, 3);
    std::cout << "El resultado de la suma es: " << resultado1 << std::endl;

    // Llamada a la función sumar con cuatro argumentos de tipo double
    double resultado2 = sumar(1.5, 2.5, 3.5, 4.5);
    std::cout << "El resultado de la suma es: " << resultado2 << std::endl;

    // Llamada a la función sumar con dos argumentos de tipo char
    char resultado3 = sumar('a', 1);
    std::cout << "El resultado de la suma es: " << resultado3 << std::endl;

    // Llamada a la función sumar con un argumento de tipo std::tuple<int, double>
    std::tuple<int, double> tupla = std::make_tuple(1, 2.5);
    auto resultado4 = std::apply(sumar<int, double>, tupla);
    std::cout << "El resultado de la suma es: " << resultado4 << std::endl;

    return 0;
}



#include <iostream>
#include <string>

// Función que utiliza std::tuple como plantilla variádica para multiplicar n argumentos
template<typename... Ts>
auto multiplicar(Ts... args) {
    return (args * ...);
}

int main() {
    setlocale(LC_ALL, "es_ES.utf-8");
    int resultado1 = multiplicar(2, 3, 4, 5);
    std::cout << "El resultado de la multiplicación es: " << resultado1 << std::endl;

    float resultado2 = multiplicar(1.5f, 2.5f, 3.5f);
    std::cout << "El resultado de la multiplicación es: " << resultado2 << std::endl;

    double resultado3 = multiplicar(2.5, 3.5, 4.5);
    std::cout << "El resultado de la multiplicación es: " << resultado3 << std::endl;

    return 0;
}

#endif
#include <iostream>
#include <type_traits>

// Función que utiliza std::tuple como plantilla variádica para restar n argumentos
template<typename T, typename... Ts>
auto restar(T a, Ts... args) {
    // Verificar que el primer argumento es numérico
    static_assert(std::is_arithmetic_v<T>, "El primer argumento debe ser numérico");

    if constexpr (sizeof...(args) > 0) {
        // Utilizar la recursividad para restar los argumentos
        return a - restar(args...);
    }
    else {
        // Devolver el valor del primer argumento si no hay más argumentos
        return a;
    }
}

int main() {
    // Restar dos números enteros
    int resultado1 = restar(10, 2);
    std::cout << "El resultado de la resta es: " << resultado1 << std::endl;

    // Restar tres números de punto flotante
    float resultado2 = restar(1.5f, 0.5f, 0.25f);
    std::cout << "El resultado de la resta es: " << resultado2 << std::endl;

    // Intentar restar un número y una cadena de texto
    // El programa debe devolver un mensaje de error en tiempo de compilación
    // static_assert fallará y mostrará el mensaje de error
    // "El primer argumento debe ser numérico"
    // static_assert(std::is_arithmetic_v<std::string>, "El primer argumento debe ser numérico");

    return 0;
}
