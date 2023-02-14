#include <iostream>
#include <string>

class ClassTemplate {
public:
	ClassTemplate(std::string name) : m_name(name) {}

	std::string greet() { return "Hola, soy " + m_name; }

private:
	std::string m_name;
};

int main() {
	ClassTemplate obj("mi nombre");
	std::cout << obj.greet() << std::endl;
	return 0;
}
