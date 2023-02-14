
// solución práctica Nº 2
#include <iostream>
using namespace std;

template <typename T>
class Stack {
private:
    T* data;
    int top_index;
    int max_size;
public:
    Stack(int size) {
        data = new T[size];
        top_index = -1;
        max_size = size;
    }

    ~Stack() {
        delete[] data;
    }

    void push(T value) {
        if (top_index < max_size - 1) {
            data[++top_index] = value;
        }
    }

    T pop() {
        if (top_index >= 0) {
            return data[top_index--];
        }
        return T();
    }
};

int main() {
    Stack<int> pila(5);
    pila.push(1);
    pila.push(2);
    pila.push(3);
    cout << pila.pop() << endl; // Imprime 3
    cout << pila.pop() << endl; // Imprime 2
    cout << pila.pop() << endl; // Imprime 1
    return 0;
}



#if 0
// solución práctica Nº 2 con comentarios detallados.
#include <iostream>
using namespace std;

template <typename T>
class Stack {
private:
    T* data; // Arreglo dinámico para almacenar elementos de la pila
    int top_index; // Índice del elemento superior en la pila
    int max_size; // Tamaño máximo de la pila
public:
    Stack(int size) { // Constructor para inicializar la pila
        data = new T[size]; // Asigna memoria dinámica para el arreglo
        top_index = -1; // Inicializa el índice del elemento superior como -1
        max_size = size; // Asigna el tamaño máximo de la pila
    }

    ~Stack() { // Destructor para liberar la memoria asignada para el arreglo
        delete[] data; // Libera la memoria asignada para el arreglo
    }

    void push(T value) { // Método para insertar un elemento en la pila
        if (top_index < max_size - 1) { // Verifica si la pila no está llena
            data[++top_index] = value; // Inserta el elemento en la posición superior de la pila y actualiza el índice superior
        }
    }

    T pop() { // Método para sacar el elemento superior de la pila
        if (top_index >= 0) { // Verifica si la pila no está vacía
            return data[top_index--]; // Devuelve el elemento superior de la pila y actualiza el índice superior
        }
        return T(); // Devuelve un valor predeterminado si la pila está vacía
    }
};

int main() {
    Stack<int> pila(5); // Crea una pila de enteros con capacidad para cinco elementos
    pila.push(1); // Inserta el valor 1 en la pila
    pila.push(2); // Inserta el valor 2 en la pila
    pila.push(3); // Inserta el valor 3 en la pila
    cout << pila.pop() << endl; // Imprime el valor superior de la pila y lo saca (3)
    cout << pila.pop() << endl; // Imprime el valor superior de la pila y lo saca (2)
    cout << pila.pop() << endl; // Imprime el valor superior de la pila y lo saca (1)
    return 0; // Retorna 0 para indicar que el programa se ejecutó correctamente
}
#endif