#include <iostream>

#include "vampire.hpp"

vampire::vampire() {}

vampire::vampire(int hp) : monster(hp) {}

void vampire::suck_blood() {
	std::cout << "Argh! Tasty blood!" << std::endl;
	this->strength += 1;
}

void vampire::print() {
	this->monster::print();
	std::cout << "My strength is: " << this->strength << std::endl;
}
