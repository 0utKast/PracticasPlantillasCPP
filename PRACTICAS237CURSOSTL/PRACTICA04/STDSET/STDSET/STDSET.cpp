#if 0
#include <iostream>
#include <set>

int main() {
    std::set<char> mySet = { 'a', 'b', 'c', 'c', 'd', 'e', 'e', 'e' };

    // Insertamos algunos elementos adicionales
    mySet.insert('f');
    mySet.insert('g');

    // Recorremos el conjunto y mostramos los elementos
    for (const char& c : mySet) {
        std::cout << c << " ";
    }
    std::cout << std::endl;

    // Eliminamos un elemento del conjunto
    mySet.erase('e');

    // Recorremos el conjunto de nuevo y mostramos los elementos
    for (const char& c : mySet) {
        std::cout << c << " ";
    }
    std::cout << std::endl;

    return 0;
}
#endif


//versión usando std::multiset, en lugar de std::set
#include <iostream>
#include <set>

int main() {
    std::multiset<char> myMultiSet = { 'a', 'b', 'c', 'c', 'd', 'e', 'e', 'e' };

    // Insertamos algunos elementos adicionales
    myMultiSet.insert('f');
    myMultiSet.insert('g');

    // Recorremos el multiconjunto y mostramos los elementos
    for (const char& c : myMultiSet) {
        std::cout << c << " ";
    }
    std::cout << std::endl;

    // Eliminamos un elemento del multiconjunto
    myMultiSet.erase('e'); //Observa que elimina todos los elementos char coincidentes

    // Recorremos el multiconjunto de nuevo y mostramos los elementos
    for (const char& c : myMultiSet) {
        std::cout << c << " ";
    }
    std::cout << std::endl;

    return 0;
}


