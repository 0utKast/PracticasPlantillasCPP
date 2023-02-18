#include <iostream>
#include <vector>
#include <list>
#include <algorithm>

int main()
{
    // Define un vector de enteros y una lista de cadenas
    std::vector<int> numeros = { 5, 2, 7, 1, 8 };
    std::list<std::string> palabras = { "perro", "gato", "elefante", "leon", "tigre" };

    // Ordena los elementos de cada contenedor utilizando std::sort y std::greater
    std::sort(numeros.begin(), numeros.end(), std::greater<int>());
    palabras.sort(std::greater<std::string>());

    // Imprime los elementos ordenados de cada contenedor
    std::cout << "Elementos ordenados del vector de enteros: ";
    for (auto n : numeros)
    {
        std::cout << n << " ";
    }
    std::cout << std::endl;

    std::cout << "Elementos ordenados de la lista de cadenas: ";
    for (auto p : palabras)
    {
        std::cout << p << " ";
    }
    std::cout << std::endl;

    // Muestra los elementos ordenados utilizando iteradores para cada contenedor
    std::cout << "Elementos ordenados del vector de enteros (usando iteradores): ";
    for (auto iter = numeros.begin(); iter != numeros.end(); ++iter)
    {
        std::cout << *iter << " ";
    }
    std::cout << std::endl;

    std::cout << "Elementos ordenados de la lista de cadenas (usando iteradores): ";
    for (auto iter = palabras.begin(); iter != palabras.end(); ++iter)
    {
        std::cout << *iter << " ";
    }
    std::cout << std::endl;

    return 0;
}

#if 0

// Código con comentarios detallados

#include <iostream>
#include <vector>
#include <list>
#include <algorithm>

int main()
{
    // Define un vector de enteros y una lista de cadenas
    std::vector<int> numeros = { 5, 2, 7, 1, 8 };
    std::list<std::string> palabras = { "perro", "gato", "elefante", "leon", "tigre" };

    // Ordena los elementos de cada contenedor utilizando std::sort y std::greater
    // El comparador std::greater ordena los elementos en orden descendente
    std::sort(numeros.begin(), numeros.end(), std::greater<int>());
    palabras.sort(std::greater<std::string>());

    // Imprime los elementos ordenados de cada contenedor utilizando un ciclo for y un iterador
    // El uso de iteradores proporciona una forma más flexible de acceder a los elementos de un contenedor
    std::cout << "Elementos ordenados del vector de enteros: ";
    for (auto n : numeros)
    {
        std::cout << n << " ";
    }
    std::cout << std::endl;

    std::cout << "Elementos ordenados de la lista de cadenas: ";
    for (auto p : palabras)
    {
        std::cout << p << " ";
    }
    std::cout << std::endl;

    // Muestra los elementos ordenados utilizando iteradores para cada contenedor
    // Los iteradores permiten acceder a los elementos de un contenedor y recorrerlos de forma flexible
    std::cout << "Elementos ordenados del vector de enteros (usando iteradores): ";
    for (auto iter = numeros.begin(); iter != numeros.end(); ++iter)
    {
        std::cout << *iter << " ";
    }
    std::cout << std::endl;

    std::cout << "Elementos ordenados de la lista de cadenas (usando iteradores): ";
    for (auto iter = palabras.begin(); iter != palabras.end(); ++iter)
    {
        std::cout << *iter << " ";
    }
    std::cout << std::endl;

    return 0;
}
#endif
