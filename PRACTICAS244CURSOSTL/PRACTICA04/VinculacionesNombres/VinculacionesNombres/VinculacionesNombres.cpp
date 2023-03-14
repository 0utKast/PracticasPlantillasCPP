#include <iostream>

template <typename T>
class Calculadora {
public:
    T valor;

    void sumar(T valor2) {
        valor += valor2;
    }

    void restar(T valor2) {
        valor -= valor2;
    }

    void multiplicar(T valor2) {
        valor *= valor2;
    }

    void dividir(T valor2) {
        valor /= valor2;
    }
};

template <typename T, typename Operacion>
void operar(T valor1, T valor2, Operacion op) {
    Calculadora<T> calculadora;
    calculadora.valor = valor1;
    op(calculadora, valor2);
    std::cout << "Resultado: " << calculadora.valor << std::endl;
}

int main() {
    operar(2, 3, [](Calculadora<int>& calc, int valor) { calc.sumar(valor); });
    operar(5.5, 2.2, [](Calculadora<double>& calc, double valor) { calc.restar(valor); });
    operar(10, 5, [](Calculadora<int>& calc, int valor) { calc.multiplicar(valor); });
    operar(100, 4, [](Calculadora<int>& calc, int valor) { calc.dividir(valor); });

    return 0;
}





