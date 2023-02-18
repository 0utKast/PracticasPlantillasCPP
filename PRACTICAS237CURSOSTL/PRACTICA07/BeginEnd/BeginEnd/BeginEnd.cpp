#include <iostream>
#include <vector>

int main()
{
    setlocale(LC_ALL, "es_ES.utf-8");
    std::vector<int> numeros;
    int n;

    std::cout << "Ingrese una lista de números enteros separados por espacios. Ingrese -1 para terminar: ";
    while (std::cin >> n && n != -1)
    {
        numeros.push_back(n);
    }

    int suma_pares = 0;
    for (auto iter = numeros.begin(); iter != numeros.end(); ++iter)
    {
        if (*iter % 2 == 0)
        {
            suma_pares += *iter;
        }
    }

    std::cout << "La suma de los números pares es: " << suma_pares << std::endl;

    return 0;
}

#if 0
//Versión del Código con comentarios detallados.
#include <iostream>  // Incluye la biblioteca de entrada y salida estándar
#include <vector>    // Incluye la biblioteca para el uso de vectores

int main()
{
    setlocale(LC_ALL, "es_ES.utf-8");  // Establece la localización para mostrar caracteres especiales en español
    std::vector<int> numeros;         // Declara un vector vacío para almacenar los números ingresados por el usuario
    int n;                            // Declara una variable entera para almacenar los números ingresados

    // Solicita al usuario que ingrese una lista de números separados por espacios y que ingrese -1 para terminar la entrada
    std::cout << "Ingrese una lista de números enteros separados por espacios. Ingrese -1 para terminar: ";

    // Lee los números ingresados por el usuario y los agrega al vector hasta que se ingrese -1
    while (std::cin >> n && n != -1)
    {
        numeros.push_back(n);
    }

    int suma_pares = 0;  // Declara una variable entera para almacenar la suma de los números pares del vector

    // Recorre el vector utilizando un iterador y suma los números pares a la variable acumuladora
    for (auto iter = numeros.begin(); iter != numeros.end(); ++iter)
    {
        if (*iter % 2 == 0)  // Verifica si el número es par
        {
            suma_pares += *iter;  // Si es par, lo agrega a la variable acumuladora
        }
    }

    // Imprime la suma de los números pares en el vector
    std::cout << "La suma de los números pares es: " << suma_pares << std::endl;

    return 0;  // Indica que el programa ha terminado correctamente
}
#endif
