#include <iostream>
#include <vector>
#include <list>

template<typename Container>
void print_reversed(const Container& cont)
{
    typename Container::const_iterator it;
    for (it = cont.cend(); it != cont.cbegin(); )
    {
        --it;
        std::cout << *it << std::endl;
    }
}

int main()
{
    std::vector<int> v = { 1, 2, 3, 4, 5 };
    std::list<int> l = { 10, 20, 30, 40, 50 };

    std::cout << "Elementos del vector en orden inverso:" << std::endl;
    print_reversed(v);

    std::cout << "\nElementos de la lista en orden inverso:" << std::endl;
    print_reversed(l);

    return 0;
}



#if 0
//Versión del código con comentarios detallados

#include <iostream>
#include <vector>
#include <list>

// Definimos una función genérica que acepta cualquier contenedor
// que tenga definido el tipo de iterador const_iterator
template<typename Container>
void print_reversed(const Container& cont)
{
    // Declaramos una variable de tipo const_iterator para el contenedor
    typename Container::const_iterator it;

    // Recorremos el contenedor desde el último elemento hasta el primero
    for (it = cont.cend(); it != cont.cbegin(); )
    {
        // Decrementamos el iterador para apuntar al elemento anterior
        --it;

        // Imprimimos el valor del elemento actual por pantalla
        std::cout << *it << std::endl;
    }
}

int main()
{
    // Creamos un std::vector con los elementos 1, 2, 3, 4, 5
    std::vector<int> v = { 1, 2, 3, 4, 5 };

    // Creamos una std::list con los elementos 10, 20, 30, 40, 50
    std::list<int> l = { 10, 20, 30, 40, 50 };

    // Imprimimos los elementos del std::vector en orden inverso
    std::cout << "Elementos del vector en orden inverso:" << std::endl;
    print_reversed(v);

    // Imprimimos los elementos de la std::list en orden inverso
    std::cout << "\nElementos de la lista en orden inverso:" << std::endl;
    print_reversed(l);

    return 0;
}
#endif