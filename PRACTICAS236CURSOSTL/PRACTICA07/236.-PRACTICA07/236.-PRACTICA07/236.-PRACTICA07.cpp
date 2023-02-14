 #include <iostream>

template <typename T>
class ClassTemplate {
public:
	ClassTemplate(T value) : m_value(value) {}

	T getValue() const;

private:
	T m_value;
};

template <typename T>
T ClassTemplate<T>::getValue() const {
	return m_value;
}

int main() {
	ClassTemplate<int> obj(5);
	std::cout << obj.getValue() << std::endl;
	return 0;
}



#if 0
//Versión del código con comentarios detallados
#include <iostream>

// Se define una plantilla de clase "ClassTemplate" que tomará un argumento de tipo "T".
template <typename T>
class ClassTemplate {
public:
	// Se define un constructor que tomará un argumento "value" y lo asignará a la variable de instancia "m_value".
	ClassTemplate(T value) : m_value(value) {}

	// Se define una función miembro "getValue" que devolverá el valor de "m_value".
	T getValue() const;

private:
	// Se define una variable de instancia "m_value" de tipo "T".
	T m_value;
};

// Se define la implementación completa de la función miembro "getValue" como una plantilla de función.
template <typename T>
T ClassTemplate<T>::getValue() const {
	// Se devuelve el valor de "m_value".
	return m_value;
}

int main() {
	// Se crea un objeto "obj" de "ClassTemplate<int>" con un argumento "5".
	ClassTemplate<int> obj(5);
	// Se imprime el valor devuelto por "getValue".
	std::cout << obj.getValue() << std::endl;
	// Se devuelve 0 para indicar una salida exitosa.
	return 0;
}

#endif