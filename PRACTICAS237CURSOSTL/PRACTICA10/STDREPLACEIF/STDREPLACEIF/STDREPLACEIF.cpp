#include <iostream>
#include <vector>
#include <list>
#include <algorithm>

int main()
{
    // Define un vector de enteros y una lista de cadenas
    std::vector<int> numeros = { 5, 2, 7, 1, 8 };
    std::list<std::string> palabras = { "perro", "gato", "elefante", "leon", "tigre" };

    // Define una función lambda que acepte un argumento y devuelva un valor booleano
    auto es_par = [](int n) { return n % 2 == 0; };
    auto es_letra_e = [](const std::string& s) { return s == "e"; };

    // Utiliza el algoritmo std::replace_if para reemplazar los elementos que cumplen con la condición
    std::replace_if(numeros.begin(), numeros.end(), es_par, 0);
    palabras.remove_if(es_letra_e);

    // Imprime los elementos modificados de cada contenedor
    std::cout << "Elementos modificados del vector de enteros: ";
    for (auto n : numeros)
    {
        std::cout << n << " ";
    }
    std::cout << std::endl;

    std::cout << "Elementos modificados de la lista de cadenas: ";
    for (auto p : palabras)
    {
        std::cout << p << " ";
    }
    std::cout << std::endl;

    return 0;
}


#if 0

//Versión con comentarios detallados
#include <iostream>
#include <vector>
#include <list>
#include <algorithm>

int main()
{
    // Define un vector de enteros y una lista de cadenas
    std::vector<int> numeros = { 5, 2, 7, 1, 8 };
    std::list<std::string> palabras = { "perro", "gato", "elefante", "leon", "tigre" };

    // Define una función lambda que acepte un argumento y devuelva un valor booleano
    auto es_par = [](int n) { return n % 2 == 0; };
    auto es_letra_e = [](const std::string& s) { return s == "e"; };

    // Utiliza el algoritmo std::replace_if para reemplazar los elementos que cumplen con la condición
    // En este caso, reemplaza los números pares del vector por 0 y elimina las cadenas que contienen "e" de la lista
    std::replace_if(numeros.begin(), numeros.end(), es_par, 0);
    palabras.remove_if(es_letra_e);

    // Imprime los elementos modificados de cada contenedor
    // En el caso del vector, utiliza un ciclo for y un rango para imprimir cada elemento modificado
    std::cout << "Elementos modificados del vector de enteros: ";
    for (auto n : numeros)
    {
        std::cout << n << " ";
    }
    std::cout << std::endl;

    // En el caso de la lista, utiliza un ciclo for y un iterador para imprimir cada elemento modificado
    std::cout << "Elementos modificados de la lista de cadenas: ";
    for (auto p : palabras)
    {
        std::cout << p << " ";
    }
    std::cout << std::endl;

    return 0;
}
#endif

