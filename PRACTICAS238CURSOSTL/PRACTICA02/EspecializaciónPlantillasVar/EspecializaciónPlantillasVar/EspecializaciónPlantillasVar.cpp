#include <iostream>
#include "default_value.hpp"

int main() {
	std::cout << "DefaultValue<int>: " << DefaultValue<int> << std::endl;
	std::cout << "DefaultValue<std::string>: " << DefaultValue<std::string> << std::endl;
	std::cout << "DefaultValue<bool>: " << DefaultValue<bool> << std::endl;
	return 0;
}
