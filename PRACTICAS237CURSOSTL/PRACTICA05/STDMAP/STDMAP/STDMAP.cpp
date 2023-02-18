#if 0
#include <iostream>
#include <map>
#include <string>

int main() {
    setlocale(LC_ALL, "es_ES.utf-8");
    // Crear un std::map de std::strings
    std::map<std::string, int> map;

    // Usa insert para añadir varios elementos con std::pair
    map.insert(std::make_pair("Juan", 20));
    map.insert(std::make_pair("María", 22));
    map.insert(std::make_pair("Pedro", 21));
    map.insert(std::make_pair("Ana", 19));

    // Usa size para recuperar su tamaño
    std::cout << "Tamaño del mapa: " << map.size() << std::endl;

    // Elimina uno de los elementos
    map.erase("Pedro");

    // Usa un loop for each y first y second de std::pair para mostrar la información contenido por el std::map.
    std::cout << "Elementos del mapa:" << std::endl;
    for (const auto& par : map) {
        std::cout << par.first << ": " << par.second << std::endl;
    }

    return 0;
}
#endif

#include <iostream>
#include <map>
#include <string>

int main() {
    setlocale(LC_ALL, "es_ES.utf-8");
    // Crear un std::multimap de std::strings
    std::multimap<std::string, int> multimap;

    // Usa insert para añadir varios elementos con std::pair
    multimap.insert(std::make_pair("Juan", 20));
    multimap.insert(std::make_pair("María", 22));
    multimap.insert(std::make_pair("Pedro", 21));
    multimap.insert(std::make_pair("Ana", 19));
    multimap.insert(std::make_pair("Juan", 24));

    // Usa size para recuperar su tamaño
    std::cout << "Tamaño del multimap: " << multimap.size() << std::endl;

    // Usa un loop for each y first y second de std::pair para mostrar la información contenido por el std::multimap.
    std::cout << "Elementos del multimap:" << std::endl;
    for (const auto& par : multimap) {
        std::cout << par.first << ": " << par.second << std::endl;
    }

    // Utiliza la función equal_range() para obtener los elementos con clave "Juan"
    std::cout << "Elementos con clave Juan:" << std::endl;
    auto range = multimap.equal_range("Juan");
    for (auto it = range.first; it != range.second; ++it) {
        std::cout << it->first << ": " << it->second << std::endl;
    }

    // Utiliza la función count() para obtener el número de elementos con clave "María"
    std::cout << "Número de elementos con clave María: " << multimap.count("María") << std::endl;

    return 0;
}
