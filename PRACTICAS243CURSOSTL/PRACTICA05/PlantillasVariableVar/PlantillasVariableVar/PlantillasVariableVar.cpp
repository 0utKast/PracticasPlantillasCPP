#include <iostream>

template <int N, int... Args>
struct Promedio {
    static constexpr double value = (static_cast<double>(N) + Promedio<Args...>::value * sizeof...(Args)) / (sizeof...(Args) + 1);
};

template <int N>
struct Promedio<N> {
    static constexpr double value = N;
};

template <int... Args>
constexpr double PromedioDouble = Promedio<Args...>::value;

int main() {
    std::cout << "El promedio de 1 es " << PromedioDouble<1> << std::endl;
    std::cout << "El promedio de 1 y 2 es " << PromedioDouble<1, 2> << std::endl;
    std::cout << "El promedio de 1, 2, 3, 4, 5 es " << PromedioDouble<1, 2, 3, 4, 5> << std::endl;
    return 0;
}


