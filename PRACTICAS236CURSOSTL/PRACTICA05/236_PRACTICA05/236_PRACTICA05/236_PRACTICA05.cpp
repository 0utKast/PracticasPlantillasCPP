#include <iostream>

class Producto
{
private:
    std::string m_nombre;
    int m_precio;

public:
    Producto(const std::string& nombre, int precio)
        : m_nombre{ nombre }, m_precio{ precio }
    {
    }

    friend bool operator< (const Producto& a, const Producto& b)
    {
        return a.m_precio < b.m_precio;
    }

    friend std::ostream& operator<< (std::ostream& ostr, const Producto& p)
    {
        ostr << p.m_nombre << " - " << p.m_precio;
        return ostr;
    }
};

template <typename T>
const T& mas_caro(T x, T y)
{
    return (x < y) ? y : x;
}

int main()
{
    setlocale(LC_ALL, "es_ES.utf-8");
    Producto p1("Producto 1", 10);
    Producto p2("Producto 2", 20);

    Producto mas_caro = ::mas_caro(p1, p2);
    std::cout << mas_caro << " es el más caro\n";

    return 0;
}

#if 0
// Versión del código con comentarios detallados.
#include <iostream>

// Definimos la clase Producto con un nombre y un precio.
class Producto
{
private:
    // Atributos privados de la clase.
    std::string m_nombre; // Nombre del producto.
    int m_precio; // Precio del producto.

public:
    // Constructor de la clase que asigna valores a los atributos.
    Producto(const std::string& nombre, int precio)
        : m_nombre{ nombre }, m_precio{ precio }
    {
    }

    // Sobrecarga del operador "<" para comparar los precios de dos objetos de la clase.
    friend bool operator< (const Producto& a, const Producto& b)
    {
        return a.m_precio < b.m_precio;
    }

    // Sobrecarga del operador "<<" para imprimir los objetos de la clase en cout.
    friend std::ostream& operator<< (std::ostream& ostr, const Producto& p)
    {
        ostr << p.m_nombre << " - " << p.m_precio;
        return ostr;
    }
};

// Plantilla de función que compara dos objetos y devuelve el objeto con el precio más alto.
template <typename T>
const T& mas_caro(T x, T y)
{
    // Devolvemos una referencia constante al objeto con el precio más alto.
    return (x < y) ? y : x;
}

int main()
{
    // Creamos dos objetos de la clase Producto.
    Producto p1("Producto 1", 10);
    Producto p2("Producto 2", 20);

    // Usamos la plantilla mas_caro para encontrar el objeto con el precio más alto.
    Producto mas_caro = ::mas_caro(p1, p2);

    // Imprimimos el nombre y el precio del objeto con el precio más alto.
    std::cout << mas_caro << " es el más caro\n";

    return 0;
}
#endif
