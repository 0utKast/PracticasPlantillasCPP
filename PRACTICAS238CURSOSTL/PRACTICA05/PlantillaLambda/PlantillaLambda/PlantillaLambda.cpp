#if 0
#include <iostream>
#include <numbers>


int main() {
    setlocale(LC_ALL, "es_ES.utf-8");
    // Tarea 1: Lambda que calcula el área de un círculo dado su radio.
    std::cout << "Tarea 1: Lambda que calcula el área de un círculo dado su radio." << std::endl;

    auto lambdaAreaCirculo = [](double r) {
        return std::numbers::pi * r * r;
    };

    std::cout << "El área del círculo con radio 5.0 es " << lambdaAreaCirculo(5.0) << std::endl;
    std::cout << "El área del círculo con radio 10.0 es " << lambdaAreaCirculo(10.0) << std::endl;

    std::cout << std::endl;

    // Tarea 2: Lambda genérica que devuelve el máximo de dos valores.
    std::cout << "Tarea 2: Lambda genérica que devuelve el máximo de dos valores." << std::endl;

    auto lambdaMaximo = [](auto a, auto b) {
        return a > b ? a : b;
    };

    std::cout << "El máximo entre 2 y 3 es " << lambdaMaximo(2, 3) << std::endl;
    std::cout << "El máximo entre 7.5 y 4.2 es " << lambdaMaximo(7.5, 4.2) << std::endl;

    std::cout << std::endl;

    // Tarea 3: Plantilla lambda que calcula la potencia de un número dado una base y un exponente.
    std::cout << "Tarea 3: Plantilla lambda que calcula la potencia de un número dado una base y un exponente." << std::endl;

    auto lambdaPotencia = []<typename T>(T base, T exponente) {
        return pow(base, exponente);
    };

    std::cout << "2 elevado a 3 es " << lambdaPotencia(2, 3) << std::endl;
    std::cout << "5.0 elevado a 2 es " << lambdaPotencia(5.0, 2.0) << std::endl;

    return 0;
}
#endif


//versión con comentarios detallados.

#include <iostream>
#include <numbers> // Biblioteca para acceder a la constante pi y otras constantes matemáticas.

int main() {
    setlocale(LC_ALL, "es_ES.utf-8"); // Cambia la configuración regional para que se utilice el formato de fecha y hora en español.

    // Tarea 1: Lambda que calcula el área de un círculo dado su radio.
    std::cout << "Tarea 1: Lambda que calcula el área de un círculo dado su radio." << std::endl;

    auto lambdaAreaCirculo = [](double r) { // Declara la lambda para calcular el área de un círculo.
        return std::numbers::pi * r * r; // Utiliza la constante pi de la biblioteca numbers para calcular el área.
    };

    std::cout << "El área del círculo con radio 5.0 es " << lambdaAreaCirculo(5.0) << std::endl; // Ejecuta la lambda con radio = 5.0.
    std::cout << "El área del círculo con radio 10.0 es " << lambdaAreaCirculo(10.0) << std::endl; // Ejecuta la lambda con radio = 10.0.

    std::cout << std::endl;

    // Tarea 2: Lambda genérica que devuelve el máximo de dos valores.
    std::cout << "Tarea 2: Lambda genérica que devuelve el máximo de dos valores." << std::endl;

    auto lambdaMaximo = [](auto a, auto b) { // Declara la lambda genérica para encontrar el máximo.
        return a > b ? a : b; // Devuelve el valor máximo de a y b utilizando el operador ternario.
    };

    std::cout << "El máximo entre 2 y 3 es " << lambdaMaximo(2, 3) << std::endl; // Ejecuta la lambda con a = 2 y b = 3.
    std::cout << "El máximo entre 7.5 y 4.2 es " << lambdaMaximo(7.5, 4.2) << std::endl; // Ejecuta la lambda con a = 7.5 y b = 4.2.

    std::cout << std::endl;

    // Tarea 3: Plantilla lambda que calcula la potencia de un número dado una base y un exponente.
    std::cout << "Tarea 3: Plantilla lambda que calcula la potencia de un número dado una base y un exponente." << std::endl;

    auto lambdaPotencia = []<typename T>(T base, T exponente) { // Declara la plantilla lambda para calcular la potencia de un número.
        return pow(base, exponente); // Utiliza la función pow() de la biblioteca cmath para calcular la potencia.
    };

    std::cout << "2 elevado a 3 es " << lambdaPotencia(2, 3) << std::endl; // Ejecuta la lambda con base = 2 y exponente = 3.
    std::cout << "5.0 elevado a 2 es " << lambdaPotencia(5.0, 2.0) << std::endl; // Ejecuta la lambda con base = 5.0 y exponente = 2.0.

    return 0;
}








#if 0

#include <iostream>
#include <string>

int main() {
	auto lambdaLongitud = [](std::string str) { return str.length(); };
	int v1 = lambdaLongitud("Hola, mundo!");

	auto lambdaSuma = [](auto a, auto b) { return a + b; };
	int v2 = lambdaSuma(2, 3);
	double v3 = lambdaSuma(2.5, 3.8);

	auto lambdaProducto = []<typename T>(T a, T b) { return a * b; };
	int v4 = lambdaProducto(2, 3);
	double v5 = lambdaProducto(2.5, 3.8);

	std::cout << "v1 = " << v1 << std::endl;
	std::cout << "v2 = " << v2 << std::endl;
	std::cout << "v3 = " << v3 << std::endl;
	std::cout << "v4 = " << v4 << std::endl;
	std::cout << "v5 = " << v5 << std::endl;

	return 0;
}

#endif
