#include <iostream>
#include <array>

// Función que calcula el tamaño de cada tipo de dato
template<typename... Args>
constexpr auto get_type_sizes()
{
    // Imprimimos el número de tipos de datos
    std::cout << "Número de tipos de datos: " << sizeof...(Args) << '\n';

    // Devolvemos un array con el tamaño de cada tipo de dato
    return std::array<std::size_t, sizeof...(Args)>{sizeof(Args)...};
}

int main()
{
    setlocale(LC_ALL, "es_ES.utf-8");
    // Obtenemos el tamaño de cada tipo de dato
    auto sizes = get_type_sizes<int, char, float, double, long long>();

    // Imprimimos el tamaño de cada tipo de dato
    std::cout << "Tamaño de int: " << sizes[0] << '\n';
    std::cout << "Tamaño de char: " << sizes[1] << '\n';
    std::cout << "Tamaño de float: " << sizes[2] << '\n';
    std::cout << "Tamaño de double: " << sizes[3] << '\n';
    std::cout << "Tamaño de long long: " << sizes[4] << '\n';

    // Obtenemos el tamaño de una variable de tipo double
    std::size_t double_size = sizeof(double);

    // Imprimimos el tamaño de la variable de tipo double
    std::cout << "Tamaño de una variable de tipo double: " << double_size << '\n';

    return 0;
}

#if 0
//Versión con comentarios detallados
#include <iostream>
#include <array>

// Función que devuelve un array con los tamaños en bytes de cada tipo
template<typename... Args>
constexpr auto get_type_sizes()
{
    // Imprimimos el número de tipos
    std::cout << "Número de tipos: " << sizeof...(Args) << std::endl;

    // Creamos un array con los tamaños de cada tipo y lo devolvemos
    return std::array<std::size_t, sizeof...(Args)>{sizeof(Args)...};
}

int main()
{
    // Configuramos la salida para imprimir caracteres especiales en la consola
    setlocale(LC_ALL, "es_ES.utf-8");

    // Llamamos a la función get_type_sizes con diferentes tipos como argumentos y guardamos el resultado en un array
    auto sizes = get_type_sizes<short, int, long, long long>();

    // Imprimimos los tamaños de los tipos
    std::cout << "Tamaño de short: " << sizes[0] << std::endl;
    std::cout << "Tamaño de int: " << sizes[1] << std::endl;
    std::cout << "Tamaño de long: " << sizes[2] << std::endl;
    std::cout << "Tamaño de long long: " << sizes[3] << std::endl;

    return 0;
}
#endif

