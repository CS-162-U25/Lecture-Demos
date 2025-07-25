#include <iostream>

#include "zombie.hpp"

zombie::zombie() {
	std::cout << "Zombie constructor!" << std::endl;
}

zombie::zombie(int hp) : monster(hp) {}

void zombie::eat_brains() {
	std::cout << "Argh! Tasty brains!" << std::endl;
	this->sanity -= 0.1;
}

zombie::~zombie() {
	std::cout << "Zombie destructor!" << std::endl;
}

void zombie::print() {
	this->monster::print(); // This calls the monster::print() member function
	std::cout << "My sanity is: " << this->sanity << std::endl;
}
