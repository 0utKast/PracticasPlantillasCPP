#include <iostream>
#include <functional>

template <typename T>
T promedio(T valor)
{
    return valor;
}

template <typename T, typename... Args>
T promedio(T valor, Args... args)
{
    return (valor + promedio(args...)) / (sizeof...(args) + 1);
}

int main()
{
    int a = 10, b = 20, c = 30, d = 40;
    double e = 1.5, f = 2.5, g = 3.5, h = 4.5;

    std::cout << "Promedio de a, b, c, d = " << promedio(a, b, c, d) << '\n';
    std::cout << "Promedio de e, f, g, h = " << promedio(e, f, g, h) << '\n';

    std::function<double(double)> cuadrado = [](double x) { return x * x; };
    std::function<double(double)> cubo = [](double x) { return x * x * x; };
    std::function<double(double)> sqrt = [](double x) { return std::sqrt(x); };

    std::cout << "Promedio de cuadrado, cubo, sqrt de 2 = " << promedio(cuadrado(2), cubo(2), sqrt(2)) << '\n';

    return 0;
}




#if 0
//versión con comentarios detallados
#include <iostream>      // Librería estándar de C++ para entrada/salida por consola
#include <functional>    // Librería estándar de C++ para funciones

// Función de plantilla variádica que calcula el promedio de una lista de valores
template <typename T>
T promedio(T valor)
{
    return valor;   // Si solo se proporciona un valor, ese valor es el promedio
}

// Función de plantilla variádica que calcula el promedio de una lista de valores
template <typename T, typename... Args>
T promedio(T valor, Args... args)
{
    // La función utiliza la recursión para calcular el promedio de una lista de valores.
    // En cada llamada recursiva, se suma el valor actual al resultado de la llamada recursiva
    // con el resto de los argumentos de entrada, y se divide el resultado total por la cantidad
    // de argumentos de entrada más uno (el valor actual).
    return (valor + promedio(args...)) / (sizeof...(args) + 1);
}

int main()
{
    // Ejemplos de uso de la función promedio con diferentes tipos de datos y argumentos de entrada

    int a = 10, b = 20, c = 30, d = 40;
    double e = 1.5, f = 2.5, g = 3.5, h = 4.5;

    // Promedio de cuatro valores enteros
    std::cout << "Promedio de a, b, c, d = " << promedio(a, b, c, d) << '\n';

    // Promedio de cuatro valores de punto flotante
    std::cout << "Promedio de e, f, g, h = " << promedio(e, f, g, h) << '\n';

    // Promedio de tres valores obtenidos a partir de funciones
    std::function<double(double)> cuadrado = [](double x) { return x * x; };
    std::function<double(double)> cubo = [](double x) { return x * x * x; };
    std::function<double(double)> sqrt = [](double x) { return std::sqrt(x); };

    std::cout << "Promedio of square, cube, sqrt of 2 = " << promedio(cuadrado(2), cubo(2), sqrt(2)) << '\n';

    return 0;
}
#endif
