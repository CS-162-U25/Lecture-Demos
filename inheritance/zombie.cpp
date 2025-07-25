#include <iostream>

#include "zombie.hpp"

zombie::zombie() {
	std::cout << "Zombie constructor!" << std::endl;
}

zombie::zombie(int hp) : monster(hp) {}

void zombie::eat_brains() {
	std::cout << "Argh! Tasty brains!" << std::endl;
}

zombie::~zombie() {
	std::cout << "Zombie destructor!" << std::endl;
}
