
#include <iostream>
#include <deque>
#include <algorithm>
#include <vector>

// Función para imprimir los elementos del deque
void imprimir_deque(const std::deque<int>& deque)
{
    std::cout << "Deque actual: [";
    std::copy(deque.begin(), deque.end(), std::ostream_iterator<int>(std::cout, ", "));
    std::cout << "]" << std::endl;
}

int main()
{
    setlocale(LC_ALL, "es_ES.utf-8");
    std::deque<int> deque;

    // Pedir al usuario que ingrese los elementos del deque
    std::cout << "Ingrese los elementos del deque (separados por espacios): ";
    int elemento;
    while (std::cin >> elemento) {
        deque.push_back(elemento);
    }

    // Mostrar el deque inicial
    imprimir_deque(deque);

    // Menú de opciones
    int opcion = 0;
    while (opcion != 5) {
        std::cout << "\n¿Qué acción desea realizar?\n"
            << "1. Insertar un elemento\n"
            << "2. Eliminar un elemento\n"
            << "3. Ordenar los elementos\n"
            << "4. Mostrar el contenido del deque\n"
            << "5. Salir\n\n"
            << "Seleccione una opción: ";

        std::cin >> opcion;

        switch (opcion) {
        case 1: // Insertar un elemento
        {
            int valor, posicion;
            std::cout << "\nIngrese el elemento a insertar: ";
            std::cin >> valor;
            std::cout << "Ingrese la posición donde insertar el elemento (0 a " << deque.size() << "): ";
            std::cin >> posicion;

            if (posicion >= 0 && posicion <= deque.size()) {
                deque.insert(deque.begin() + posicion, valor);
                imprimir_deque(deque);
            }
            else {
                std::cout << "Posición inválida." << std::endl;
            }
            break;
        }
        case 2: // Eliminar un elemento
        {
            int posicion;
            std::cout << "\nIngrese la posición del elemento a eliminar (0 a " << deque.size() - 1 << "): ";
            std::cin >> posicion;

            if (posicion >= 0 && posicion < deque.size()) {
                deque.erase(deque.begin() + posicion);
                imprimir_deque(deque);
            }
            else {
                std::cout << "Posición inválida." << std::endl;
            }
            break;
        }
        case 3: // Ordenar los elementos
        {
            std::vector<int> temp(deque.begin(), deque.end());
            std::sort(temp.begin(), temp.end());
            deque.assign(temp.begin(), temp.end());
            std::cout << "\nDeque ordenado: [";
            std::copy(deque.begin(), deque.end(), std::ostream_iterator<int>(std::cout, ", "));
            std::cout << "]" << std::endl;
            break;
        }
        case 4: // Mostrar el contenido del deque
        {
            imprimir_deque(deque);
            break;
        }
        case 5: // Salir
        {
            std::cout << "\n¡Hasta la vista! 😃" << std::endl;
            break;
        }
        default:
        {
            std::cout << "\nOpción inválida." << std::endl;
            break;
        }
        }
    }

    return 0;
}

#if 0
// Versión del código con comentarios detallados.
#include <iostream>
#include <deque>  // Para std::deque
#include <algorithm> // Para std::sort 
#include <vector>  // para std::vector (temporal)

// Función para imprimir los elementos del deque
void imprimir_deque(const std::deque<int>& deque)
{
    // Imprime los elementos del deque encerrados entre corchetes
    std::cout << "Deque actual: [";
    for (const auto& elemento : deque) {
        std::cout << elemento << ", ";
    }
    std::cout << "]" << std::endl;
}

int main()
{
    std::deque<int> deque; // Crea un deque vacío para almacenar los elementos

    // Pide al usuario que ingrese los elementos del deque
    std::cout << "Ingrese los elementos del deque (separados por espacios): ";
    int elemento;
    while (std::cin >> elemento) {
        deque.push_back(elemento);
    }

    // Muestra el deque inicial
    imprimir_deque(deque);

    // Menú de opciones
    int opcion = 0;
    while (opcion != 5) {
        std::cout << "\n¿Qué acción desea realizar?\n"
            << "1. Insertar un elemento\n"
            << "2. Eliminar un elemento\n"
            << "3. Ordenar los elementos\n"
            << "4. Mostrar el contenido del deque\n"
            << "5. Salir\n\n"
            << "Seleccione una opción: ";

        std::cin >> opcion;

        switch (opcion) {
        case 1: // Insertar un elemento
        {
            int valor, posicion;
            std::cout << "\nIngrese el elemento a insertar: ";
            std::cin >> valor;
            std::cout << "Ingrese la posición donde insertar el elemento (0 a " << deque.size() << "): ";
            std::cin >> posicion;

            if (posicion >= 0 && posicion <= deque.size()) {
                // Inserta el elemento en la posición indicada
                deque.insert(deque.begin() + posicion, valor);
                imprimir_deque(deque);
            }
            else {
                std::cout << "Posición inválida." << std::endl;
            }
            break;
        }
        case 2: // Eliminar un elemento
        {
            int posicion;
            std::cout << "\nIngrese la posición del elemento a eliminar (0 a " << deque.size() - 1 << "): ";
            std::cin >> posicion;

            if (posicion >= 0 && posicion < deque.size()) {
                // Elimina el elemento de la posición indicada
                deque.erase(deque.begin() + posicion);
                imprimir_deque(deque);
            }
            else {
                std::cout << "Posición inválida." << std::endl;
            }
            break;
        }
        case 3: // Ordenar los elementos
        {
            // Crea un vector temporal y copia los elementos del deque
            std::vector<int> temp(deque.begin(), deque.end());

            // Ordena los elementos del vector temporal
            std::sort(temp.begin(), temp.end());

            // Borra los elementos del deque y copia los del vector temporal
            deque.assign(temp.begin(), temp.end());

            // Muestra el deque ordenado
            std::cout << "\nDeque ordenado: [";
            for (const auto& elemento : deque) {
                std::cout << elemento << ", ";
            }
            std::cout << "]" << std::endl;
            break;
        }
        case 4: // Mostrar el contenido del deque
        {
            // Muestra el deque actual
            imprimir_deque(deque);
            break;
        }
        case 5: // Salir
        {
            std::cout << "\n¡Hasta la vista! 😃" << std::endl;
            break;
        }
        default:
        {
            std::cout << "\nOpción inválida." << std::endl;
            break;
        }
        }
    }

    return 0;

#endif