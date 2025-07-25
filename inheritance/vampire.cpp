#include <iostream>

#include "vampire.hpp"

vampire::vampire() {}

vampire::vampire(int hp) : monster(hp) {}

void vampire::suck_blood() {
	std::cout << "Argh! Tasty blood!" << std::endl;
}
