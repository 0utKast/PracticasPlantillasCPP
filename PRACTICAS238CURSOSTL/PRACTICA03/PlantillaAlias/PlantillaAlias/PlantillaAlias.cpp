#include <iostream>
#include <vector>

using namespace std;

template <typename T>
double promedio(vector<T> vec) {
    double suma = 0.0;
    for (auto it = vec.begin(); it != vec.end(); ++it) {
        suma += static_cast<double>(*it);
    }
    return suma / vec.size();
}

template <typename T>
using promedio_t = decltype(promedio(std::declval<vector<T>>()));

int main() {
    int n;
    cout << "Ingrese el tam. del vector: ";
    cin >> n;

    vector<int> vec_int(n);
    vector<double> vec_double(n);

    cout << "Ingrese los elementos del vector de tipo entero, uno por uno (pulsa enter tras cada numero):\n";
    for (int i = 0; i < n; ++i) {
        cin >> vec_int[i];
    }

    cout << "Ingrese los elementos del vector de tipo real, uno por uno(pulasa enter tras cada numero):\n";
    for (int i = 0; i < n; ++i) {
        cin >> vec_double[i];
    }

    promedio_t<int> promedio_int = promedio(vec_int);
    promedio_t<double> promedio_double = promedio(vec_double);

    cout << "El promedio del vector de tipo entero es de tipo: " << typeid(promedio_int).name() << endl;
    cout << "El promedio del vector de tipo real es de tipo: " << typeid(promedio_double).name() << endl;

    cout << "El promedio del vector de tipo entero es: " << promedio_int << endl;
    cout << "El promedio del vector de tipo real es: " << promedio_double << endl;

    return 0;
}


#if 0
// Versión con comentarios detallados
#include <iostream> // Incluye la biblioteca para entrada y salida de datos
#include <vector> // Incluye la biblioteca para el uso de vectores

using namespace std; // Permite el uso de las funciones de la biblioteca estándar

// Define una plantilla de función para calcular el promedio de un vector de cualquier tipo numérico
template <typename T>
double promedio(vector<T> vec) {
    double suma = 0.0; // Inicializa una variable para almacenar la suma de los elementos del vector
    for (auto it = vec.begin(); it != vec.end(); ++it) { // Recorre el vector elemento por elemento
        suma += static_cast<double>(*it); // Convierte el elemento a tipo double y lo suma a la variable "suma"
    }
    return suma / vec.size(); // Retorna la suma dividida entre el tamaño del vector
}

// Define una plantilla de alias para crear un nuevo tipo que sea el tipo del promedio de un vector de tipo T
template <typename T>
using promedio_t = decltype(promedio(std::declval<vector<T>>()));

int main() {
    int n; // Declara una variable para almacenar el tamaño del vector
    cout << "Ingrese el tamaño del vector: "; // Muestra un mensaje en pantalla solicitando el tamaño del vector
    cin >> n; // Lee el tamaño del vector desde la entrada estándar y lo almacena en la variable "n"

    // Declara dos vectores, uno de tipo entero y otro de tipo double, ambos de tamaño "n"
    vector<int> vec_int(n);
    vector<double> vec_double(n);

    // Solicita al usuario que ingrese los elementos del vector de tipo entero, uno por uno
    cout << "Ingrese los elementos del vector de tipo entero, uno por uno:\n";
    for (int i = 0; i < n; ++i) {
        cin >> vec_int[i];
    }

    // Solicita al usuario que ingrese los elementos del vector de tipo real, uno por uno
    cout << "Ingrese los elementos del vector de tipo real, uno por uno:\n";
    for (int i = 0; i < n; ++i) {
        cin >> vec_double[i];
    }

    // Crea una instancia de la plantilla de alias "promedio_t" para el tipo de datos "int" y otra para el tipo de datos "double"
    promedio_t<int> promedio_int = promedio(vec_int);
    promedio_t<double> promedio_double = promedio(vec_double);

    // Muestra en pantalla el tipo de datos de las instancias de la plantilla de alias, junto con el promedio de los vectores ingresados por el usuario
    cout << "El promedio del vector de tipo entero es de tipo: " << typeid(promedio_int).name() << endl;
    cout << "El promedio del vector de tipo real es de tipo: " << typeid(promedio_double).name() << endl;
    cout << "El promedio del vector de tipo entero es: " << promedio_int << endl;
    cout << "El promedio del vector de tipo real es: " << promedio_double << endl;

    return 0; // Indica que el programa se ha ejecutado correctamente
}
#endif