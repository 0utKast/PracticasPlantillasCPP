#include <iostream>
#include "ClassTemplate.h"

int main() {
	ClassTemplate<int> obj(5);
	std::cout << obj.getValue() << std::endl;
	return 0;
}