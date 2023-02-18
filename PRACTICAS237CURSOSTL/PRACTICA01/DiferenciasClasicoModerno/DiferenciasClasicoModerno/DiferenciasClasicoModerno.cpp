#include <iostream>
#include <array>
#include <algorithm>

int main() {
    setlocale(LC_ALL, "es_ES.utf-8");
    // Ejemplo de uso de un array clásico y un loop for para sumar los elementos del array.
    int array[] = { 1, 2, 3, 4, 5 };
    int sum = 0;

    for (int i = 0; i < 5; i++) {
        sum += array[i];
    }

    std::cout << "La suma es: " << sum << std::endl;

    // Ejemplo de uso de std::array y un loop for-each para sumar los elementos del array.
    std::array<int, 5> array_std = { 1, 2, 3, 4, 5 };
    int sum_std = 0;

    for (int i : array_std) {
        sum_std += i;
    }

    std::cout << "La suma es: " << sum_std << std::endl;

    // Ejemplo de búsqueda en un array clásico y un loop for.
    int search_element = 3;
    int index = -1;

    for (int i = 0; i < 5; i++) {
        if (array[i] == search_element) {
            index = i;
            break;
        }
    }

    if (index != -1) {
        std::cout << "El elemento " << search_element << " se encuentra en la posición " << index << " del array." << std::endl;
    }
    else {
        std::cout << "El elemento " << search_element << " no se encuentra en el array." << std::endl;
    }

    // Ejemplo de búsqueda en un std::array y un loop for-each.
    int search_element_std = 3;
    int index_std = -1;

    for (int i : array_std) {
        if (i == search_element_std) {
            index_std = std::distance(array_std.begin(), std::find(array_std.begin(), array_std.end(), i));
            break;
        }
    }

    if (index_std != -1) {
        std::cout << "El elemento " << search_element_std << " se encuentra en la posición " << index_std << " del array." << std::endl;
    }
    else {
        std::cout << "El elemento " << search_element_std << " no se encuentra en el array." << std::endl;
    }

    return 0;
}
