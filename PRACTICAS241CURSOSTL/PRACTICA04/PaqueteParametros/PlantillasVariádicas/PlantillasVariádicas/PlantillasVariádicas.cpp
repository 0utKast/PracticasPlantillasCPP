#include <iostream>
#include <string>

template<typename... Args>
class PrintVariadic {
public:
    PrintVariadic(Args... args) {
        print(args...);
    }

private:
    template<typename T>
    void print(T arg) {
        std::cout << arg << std::endl;
    }

    template<typename T, typename... Rest>
    void print(T arg, Rest... rest) {
        std::cout << arg << ", ";
        print(rest...);
    }
};

int main() {
    PrintVariadic<int, double, char, std::string> pv(10, 3.14, 'a', "hello");
    return 0;
}
