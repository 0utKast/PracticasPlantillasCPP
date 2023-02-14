#include <iostream>

template <typename T>
class Stack {
public:
    Stack() {};
    void push(T element) {};
    T pop() { return T(); };
    bool empty() { return true; };
};

template<>
class Stack<char> {
private:
    static const int max_size = 100;
    char elements[max_size];
    int top;

public:
    Stack() : top(-1) {};
    void push(char element) {
        if (top < max_size - 1) {
            elements[++top] = element;
        }
    }
    char pop() {
        if (top >= 0) {
            return elements[top--];
        }
        else {
            return '\0';
        }
    }
    bool empty() {
        return top < 0;
    }
};

int main() {
    Stack<int> intStack;
    Stack<char> charStack;

    intStack.push(1);
    intStack.push(2);
    intStack.push(3);

    while (!intStack.empty()) {
        std::cout << intStack.pop() << std::endl;
    }

    charStack.push('a');
    charStack.push('b');
    charStack.push('c');

    while (!charStack.empty()) {
        std::cout << charStack.pop() << std::endl;
    }

    return 0;
}



#if 0

#include <iostream>

// Definimos la plantilla de clase "Stack"
template <typename T>
class Stack {
public:
    // Constructor por defecto
    Stack() {};

    // Método para agregar un elemento a la pila
    void push(T element) {};

    // Método para eliminar el elemento más recientemente agregado a la pila
    T pop() {
        // Devolvemos un elemento vacío de tipo T
        return T();
    };

    // Método para verificar si la pila está vacía
    bool empty() {
        // Devolvemos "true" si la pila está vacía
        return true;
    };
};

// Definimos la especialización de la clase "Stack" para el tipo "char"
template<>
class Stack<char> {
private:
    // Capacidad máxima de la pila de caracteres
    static const int max_size = 100;

    // Array de caracteres que almacena los elementos de la pila
    char elements[max_size];

    // Índice que indica la posición del elemento más recientemente agregado a la pila
    int top;

public:
    // Constructor
    Stack() : top(-1) {};

    // Método para agregar un carácter a la pila
    void push(char element) {
        // Verificamos que la pila no esté llena
        if (top < max_size - 1) {
            // Incrementamos el índice "top" y agregamos el carácter
            elements[++top] = element;
        }
    }

    // Método para eliminar el carácter más recientemente agregado a la pila
    char pop() {
        // Verificamos que la pila no esté vacía
        if (top >= 0) {
            // Decrementamos el índice "top" y devolvemos el carácter
            return elements[top--];
        }
        else {
            // Devolvemos un carácter nulo si la pila está vacía
            return '\0';
        }
    }

    // Método para verificar si la pila de caracteres está vacía
    bool empty() {
        // Devolvemos "true" si el índice "top" es menor a 0
        return top < 0;
    }
};

int main() {
    // Instanciamos la clase "Stack" con tipo "int"
    Stack<int> intStack;
    // Instanciamos la clase "Stack" con tipo "char"
    Stack<char> charStack;

    // Agregamos tres números a la pila de enteros
    intStack.push(1);
    intStack.push(2);
    intStack.push(3);

    // Imprimimos los elementos de la pila de enteros hasta que esta esté vacía
    while (!intStack.empty()) {
        std::cout << intStack.pop() << std::endl;
    }

    // Agregamos tres caracteres a la pila de caracteres
    charStack.push('a');
    charStack.push('b');
    charStack.push('c');

    // Imprimimos los elementos de la pila de caracteres hasta que esta esté vacía
    while (!charStack.empty()) {
        std::cout << charStack.pop() << std::endl;
    }

    // Finalizamos el programa
    return 0;


    Este programa utiliza una plantilla de clase `Stack` para implementar una pila de elementos.La plantilla se especializa para el tipo `char` para implementar una pila 
    de caracteres con una capacidad máxima de 100 elementos.Finalmente, se escribe un pequeño programa de prueba que instancia la plantilla `Stack` con diferentes tipos 
    de datos, incluyendo `char`, y muestra el comportamiento de la clase con diferentes tipos de datos.


#endif
