#include <iostream>

template <typename T, typename... Args>
T producto(T a, Args... args)
{
    T result = a;
    (result *= ... *= args);
    return result;
}


template <typename T, typename... Args>
T sum_of_products(T a, Args... args)
{
    T result = producto(a, args...);
    if constexpr (sizeof...(args) > 1)
    {
        result += sum_of_products(args...);
    }
    return result;
}

int main()
{
    std::cout << "Producto de 1, 2, 3, 4, 5: " << producto(1, 2, 3, 4, 5) << '\n';
    std::cout << "Producto de 1.5, 2.5, 3.5, 4.5: " << producto(1.5, 2.5, 3.5, 4.5) << '\n';
    std::cout << "Suma de los productos de 1, 2, 3, 4, 5: " << sum_of_products(1, 2, 3, 4, 5) << '\n';
    std::cout << "Suma de los productos de 1.5, 2.5, 3.5, 4.5: " << sum_of_products(1.5, 2.5, 3.5, 4.5) << '\n';
    return 0;
}

#if 0
//Versión con comentarios detallados
#include <iostream>

// Definir la función producto
template <typename T, typename... Args>
T producto(T a, Args... args)
{
    // Inicializar una variable de tipo T con el valor del primer argumento
    T result = a;

    // Utilizar una expansión de paquetes de parámetros para multiplicar la variable por cada argumento adicional
    (result *= ... *= args);

    // Devolver el resultado
    return result;
}

// Definir la función sum_of_products
template <typename T, typename... Args>
T sum_of_products(T a, Args... args)
{
    // Calcular el producto de los argumentos
    T result = producto(a, args...);

    // Si hay al menos dos argumentos, calcular el producto de los pares restantes de argumentos consecutivos y sumar los resultados
    if constexpr (sizeof...(args) > 1)
    {
        result += sum_of_products(args...);
    }

    // Devolver el resultado
    return result;
}

// Función principal
int main()
{
    // Llamar a la función producto con diferentes tipos de argumentos y mostrar el resultado
    std::cout << "Producto de 1, 2, 3, 4, 5: " << producto(1, 2, 3, 4, 5) << '\n';
    std::cout << "Producto de 1.5, 2.5, 3.5, 4.5: " << producto(1.5, 2.5, 3.5, 4.5) << '\n';

    // Llamar a la función sum_of_products con diferentes tipos de argumentos y mostrar el resultado
    std::cout << "Suma de los productos de 1, 2, 3, 4, 5: " << sum_of_products(1, 2, 3, 4, 5) << '\n';
    std::cout << "Suma de los productos de 1.5, 2.5, 3.5, 4.5: " << sum_of_products(1.5, 2.5, 3.5, 4.5) << '\n';

    return 0;
}
#endif
