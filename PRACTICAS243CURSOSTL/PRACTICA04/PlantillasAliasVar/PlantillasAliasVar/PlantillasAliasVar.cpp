#include <iostream>
#include <type_traits>

template <typename T, typename... Args>
struct MiClase {
    static int contador;
    static void incrementar(int n) {
        contador += n;
    }
};

template <typename... Args>
using MiClaseInt = MiClase<int, Args...>;

template <typename T, typename... Args>
int MiClase<T, Args...>::contador = 0;

int main() {
    MiClaseInt<char, double> c1;
    MiClaseInt<int, float, bool> c2;
    c1.incrementar(5);
    c2.incrementar(10);
    std::cout << "El valor del contador de c1 es " << c1.contador << std::endl;
    std::cout << "El valor del contador de c2 es " << c2.contador << std::endl;
    return 0;
}
