#include <iostream>

#include "person.hpp"

person::person() {
	std::cout << "Person default constructor!" << std::endl;
}

person::person(const std::string& name) : name(name) {
	std::cout << "Person nondefault constructor!" << std::endl;
}
