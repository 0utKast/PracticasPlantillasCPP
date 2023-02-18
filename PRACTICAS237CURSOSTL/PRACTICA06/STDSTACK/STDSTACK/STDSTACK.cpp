#if 0
En este ejemplo, primero creamos una pila vacía utilizando el constructor predeterminado de std::stack.Luego, 
agregamos tres números enteros a la pila usando el método push.Después, usamos size para obtener el tamaño 
actual de la pila y top para obtener el elemento superior de la pila.
Luego, eliminamos el elemento superior de la pila utilizando pop.Finalmente, usamos un bucle while para 
mostrar todos los elementos de la pila, utilizando el método empty para comprobar si la pila está vacía 
y top para acceder al elemento superior de la pila y mostrarlo en la pantalla.




#include <iostream>
#include <stack>

int main() {
    setlocale(LC_ALL, "es_ES.utf-8");
    std::stack<int> pila;

    // Añadir elementos a la pila
    pila.push(5);
    pila.push(10);
    pila.push(15);

    // Obtener el tamaño de la pila
    std::cout << "Tamaño de la pila: " << pila.size() << std::endl;

    // Acceder al elemento superior de la pila
    std::cout << "Elemento superior de la pila: " << pila.top() << std::endl;

    // Eliminar el elemento superior de la pila
    pila.pop();

    // Mostrar todos los elementos de la pila
    std::cout << "Elementos de la pila: ";
    while (!pila.empty()) {
        std::cout << pila.top() << " ";
        pila.pop();
    }
    std::cout << std::endl;

    return 0;
}
#endif

#include <iostream>
#include <stack>
#include <limits>

int main() {
    setlocale(LC_ALL, "es_ES.utf-8");
    int numero, base;
    std::stack<int> pila;

    std::cout << "Introduzca un número decimal: ";
    std::cin >> numero;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    std::cout << "Introduzca la base a la que desea convertir el número: ";
    std::cin >> base;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    if (base <= 0) {
        std::cout << "La base debe ser mayor que cero" << std::endl;
        return 1;
    }

    while (numero != 0) {
        pila.push(numero % base);
        numero /= base;
    }

    std::cout << "Número convertido a base " << base << ": ";
    while (!pila.empty()) {
        std::cout << pila.top();
        pila.pop();
    }
    std::cout << std::endl;

    return 0;
}


#if 0
//Versión del programa con comentarios detallados
#include <iostream>
#include <stack>
#include <limits>

int main() {
    // Configuración de la localización para usar caracteres con acentos
    setlocale(LC_ALL, "es_ES.utf-8");

    // Declaración de variables necesarias
    int numero, base;
    std::stack<int> pila;

    // Solicitar al usuario un número decimal y leerlo desde la entrada estándar
    std::cout << "Introduzca un número decimal: ";
    std::cin >> numero;

    // Descartar cualquier entrada adicional en el buffer de entrada
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    // Solicitar al usuario la base a la que se quiere convertir el número y leerla desde la entrada estándar
    std::cout << "Introduzca la base a la que desea convertir el número: ";
    std::cin >> base;

    // Descartar cualquier entrada adicional en el buffer de entrada
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    // Verificar que la base sea mayor que cero
    if (base <= 0) {
        std::cout << "La base debe ser mayor que cero" << std::endl;
        return 1;
    }

    // Convertir el número decimal a la base indicada utilizando una pila
    while (numero != 0) {
        pila.push(numero % base);
        numero /= base;
    }

    // Mostrar el número convertido en la pantalla
    std::cout << "Número convertido a base " << base << ": ";
    while (!pila.empty()) {
        std::cout << pila.top();
        pila.pop();
    }
    std::cout << std::endl;

    // Indicar que el programa finalizó correctamente
    return 0;
}
#endif

