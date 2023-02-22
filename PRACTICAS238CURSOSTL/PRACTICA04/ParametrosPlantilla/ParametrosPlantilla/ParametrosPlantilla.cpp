
#include <iostream>
#include <string>

template <typename T>
class Node {
public:
    Node(T value) : value(value), next(nullptr) {}

    T value;
    Node<T>* next;
};

template <typename T>
class LinkedList {
public:
    LinkedList() : head(nullptr), tail(nullptr), count(0) {}

    void insert(T element) {
        Node<T>* newNode = new Node<T>(element);
        if (head == nullptr) {
            head = newNode;
            tail = newNode;
        }
        else {
            tail->next = newNode;
            tail = newNode;
        }
        count++;
    }

    void print() {
        Node<T>* currentNode = head;
        while (currentNode != nullptr) {
            std::cout << currentNode->value << " ";
            currentNode = currentNode->next;
        }
        std::cout << std::endl;
    }

    int size() {
        return count;
    }

private:
    Node<T>* head;
    Node<T>* tail;
    int count;
};

template <typename LinkedListType>
class ListPrinter {
public:
    ListPrinter(LinkedListType list) : list(list) {}

    void print() {
        list.print();
    }

private:
    LinkedListType list;
};

int main() {
    LinkedList<int> intList;
    intList.insert(1);
    intList.insert(2);
    intList.insert(3);

    ListPrinter<LinkedList<int>> intPrinter(intList);
    std::cout << "Int list: ";
    intPrinter.print();
    std::cout << "Size: " << intList.size() << std::endl;

    LinkedList<std::string> stringList;
    stringList.insert("hello");
    stringList.insert("world");
    stringList.insert("!");

    ListPrinter<LinkedList<std::string>> stringPrinter(stringList);
    std::cout << "String list: ";
    stringPrinter.print();
    std::cout << "Size: " << stringList.size() << std::endl;

    return 0;
}


#if 0
#include <iostream> // Incluimos el encabezado iostream para poder utilizar cout y endl.
#include <string> // Incluimos el encabezado string para poder utilizar cadenas de texto.

// Definimos la plantilla de clase Node.
template <typename T>
class Node {
public:
    Node(T value) : value(value), next(nullptr) {} // Constructor que inicializa el valor del nodo y el puntero al siguiente nodo.

    T value; // Valor del nodo.
    Node<T>* next; // Puntero al siguiente nodo.
};

// Definimos la plantilla de clase LinkedList.
template <typename T>
class LinkedList {
public:
    LinkedList() : head(nullptr), tail(nullptr), count(0) {} // Constructor que inicializa los punteros a nodos y el contador de elementos.

    void insert(T element) { // Método que agrega un nuevo elemento a la lista.
        Node<T>* newNode = new Node<T>(element); // Creamos un nuevo nodo.
        if (head == nullptr) { // Si la lista está vacía...
            head = newNode; // El nuevo nodo se convierte en el primer nodo de la lista.
            tail = newNode; // Y también en el último nodo.
        }
        else { // Si la lista no está vacía...
            tail->next = newNode; // El último nodo de la lista apunta al nuevo nodo.
            tail = newNode; // El nuevo nodo se convierte en el último nodo de la lista.
        }
        count++; // Aumentamos el contador de elementos.
    }

    void print() { // Método que imprime todos los elementos de la lista.
        Node<T>* currentNode = head; // Empezamos por el primer nodo de la lista.
        while (currentNode != nullptr) { // Recorremos todos los nodos de la lista.
            std::cout << currentNode->value << " "; // Imprimimos el valor del nodo actual.
            currentNode = currentNode->next; // Avanzamos al siguiente nodo.
        }
        std::cout << std::endl; // Imprimimos un salto de línea al final de la lista.
    }

    int size() { // Método que devuelve el número de elementos en la lista.
        return count; // Devolvemos el valor actual del contador de elementos.
    }

private:
    Node<T>* head; // Puntero al primer nodo de la lista.
    Node<T>* tail; // Puntero al último nodo de la lista.
    int count; // Contador de elementos en la lista.
};

// Definimos la plantilla de clase ListPrinter.
template <typename LinkedListType>
class ListPrinter {
public:
    ListPrinter(LinkedListType list) : list(list) {} // Constructor que inicializa la lista.

    void print() { // Método que imprime los elementos de la lista enlazada.
        list.print(); // Utilizamos el método print de la lista.
    }

private:
    LinkedListType list; // Lista enlazada que queremos imprimir.
};

// Función principal.
int main() {
    // Creamos una lista enlazada de enteros.
    LinkedList<int> intList;
    intList.insert(1);
    intList.insert(2);
    intList.insert(3);

    // Creamos un objeto ListPrinter para imprimir la lista de enteros.
    ListPrinter<LinkedList<int>> intPrinter(intList);
    std::cout << "Int list: ";
    intPrinter.print();
    std::cout << "Size: " << intList.size() << std::endl;
    // Creamos una lista enlazada de cadenas de texto.
    LinkedList<std::string> stringList;
    stringList.insert("hello");
    stringList.insert("world");
    stringList.insert("!");

    // Creamos un objeto ListPrinter para imprimir la lista de cadenas de texto.
    ListPrinter<LinkedList<std::string>> stringPrinter(stringList);
    std::cout << "String list: ";
    stringPrinter.print();
    std::cout << "Size: " << stringList.size() << std::endl;

    return 0; // Indicamos que la función ha finalizado sin errores.
}




Este código define tres plantillas de clase : `Node`, `LinkedList` y `ListPrinter`. La plantilla `Node` define un nodo simple en una lista enlazada, la plantilla `LinkedList` 
define una lista enlazada completa y la plantilla `ListPrinter` define una clase que imprime los elementos de una lista enlazada.
En la función `main`, se crean dos objetos `LinkedList`: uno para almacenar enteros y otro para almacenar cadenas de texto.Luego se crean dos objetos `ListPrinter`: 
uno para imprimir los enteros y otro para imprimir las cadenas de texto.Los resultados se imprimen en la consola.
#endif





















#if 0

#include <iostream>
#include <vector>

template <typename T>
class Container {
public:
    Container() {}

    void insert(T element) {
        data.push_back(element);
    }

    void print() {
        for (T element : data) {
            std::cout << element << " ";
        }
        std::cout << std::endl;
    }

private:
    std::vector<T> data;
};

template <typename ContainerType>
class Printer {
public:
    Printer(ContainerType container) : container(container) {}

    void print() {
        container.print();
    }

private:
    ContainerType container;
};

int main() {
    Container<int> intContainer;
    intContainer.insert(1);
    intContainer.insert(2);
    intContainer.insert(3);

    Printer<Container<int>> intPrinter(intContainer);
    std::cout << "Int container: ";
    intPrinter.print();

    Container<std::string> stringContainer;
    stringContainer.insert("hello");
    stringContainer.insert("world");
    stringContainer.insert("!");

    Printer<Container<std::string>> stringPrinter(stringContainer);
    std::cout << "String container: ";
    stringPrinter.print();

    return 0;
}
#endif
