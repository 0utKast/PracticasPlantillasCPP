#include <iostream>
#include <list>
#include <algorithm>

// Clase Estudiante
class Estudiante {
public:
    Estudiante(const std::string& nombre, int edad, double promedio, const std::string& matricula)
        : m_nombre(nombre), m_edad(edad), m_promedio(promedio), m_matricula(matricula) {}

    std::string getNombre() const { return m_nombre; }
    int getEdad() const { return m_edad; }
    double getPromedio() const { return m_promedio; }
    std::string getMatricula() const { return m_matricula; }

private:
    std::string m_nombre;
    int m_edad;
    double m_promedio;
    std::string m_matricula;
};

// Función compararEstudiantes
bool compararEstudiantes(const Estudiante& e1, const Estudiante& e2) {
    return e1.getPromedio() > e2.getPromedio();
}

// Función principal
int main() {
    // Crear la lista de estudiantes
    std::list<Estudiante> listaEstudiantes;

    // Agregar estudiantes a la lista
    listaEstudiantes.push_back(Estudiante("Juan", 20, 8.5, "1234"));
    listaEstudiantes.push_back(Estudiante("Ana", 19, 9.0, "5678"));
    listaEstudiantes.push_back(Estudiante("Pedro", 22, 7.0, "9012"));
    listaEstudiantes.push_back(Estudiante("Maria", 21, 8.0, "3456"));

    // Ordenar la lista por promedio
    listaEstudiantes.sort(compararEstudiantes);

    // Eliminar el último estudiante de la lista
    listaEstudiantes.pop_back();

    // Agregar un nuevo estudiante al inicio de la lista
    listaEstudiantes.push_front(Estudiante("Luis", 18, 9.5, "7890"));

    // Mostrar los datos de todos los estudiantes de la lista
    for (auto it = listaEstudiantes.begin(); it != listaEstudiantes.end(); ++it) {
        std::cout << it->getNombre() << " " << it->getEdad() << " " << it->getPromedio() << " " << it->getMatricula() << std::endl;
    }

    return 0;
}

#if 0
//Versión con comentarios detallados
#include <iostream>
#include <list>
#include <algorithm> // Para usar la función sort

// Clase Estudiante
class Estudiante {
public:
    // Constructor
    Estudiante(const std::string& nombre, int edad, double promedio, const std::string& matricula)
        : m_nombre(nombre), m_edad(edad), m_promedio(promedio), m_matricula(matricula) {}

    // Getters
    std::string getNombre() const { return m_nombre; }
    int getEdad() const { return m_edad; }
    double getPromedio() const { return m_promedio; }
    std::string getMatricula() const { return m_matricula; }

private:
    std::string m_nombre;
    int m_edad;
    double m_promedio;
    std::string m_matricula;
};

// Función compararEstudiantes
// Esta función compara los promedios de dos estudiantes y devuelve true si el promedio del primer estudiante es mayor que el del segundo
bool compararEstudiantes(const Estudiante& e1, const Estudiante& e2) {
    return e1.getPromedio() > e2.getPromedio();
}

// Función principal
int main() {
    // Crear la lista de estudiantes
    std::list<Estudiante> listaEstudiantes;

    // Agregar estudiantes a la lista
    listaEstudiantes.push_back(Estudiante("Juan", 20, 8.5, "1234"));
    listaEstudiantes.push_back(Estudiante("Ana", 19, 9.0, "5678"));
    listaEstudiantes.push_back(Estudiante("Pedro", 22, 7.0, "9012"));
    listaEstudiantes.push_back(Estudiante("Maria", 21, 8.0, "3456"));

    // Ordenar la lista por promedio
    listaEstudiantes.sort(compararEstudiantes);

    // Eliminar el último estudiante de la lista
    listaEstudiantes.pop_back();

    // Agregar un nuevo estudiante al inicio de la lista
    listaEstudiantes.push_front(Estudiante("Luis", 18, 9.5, "7890"));

    // Mostrar los datos de todos los estudiantes de la lista
    for (auto it = listaEstudiantes.begin(); it != listaEstudiantes.end(); ++it) {
        // Mostrar el nombre, edad, promedio y matrícula de cada estudiante
        std::cout << it->getNombre() << " " << it->getEdad() << " " << it->getPromedio() << " " << it->getMatricula() << std::endl;
    }

    return 0;
}
#endif