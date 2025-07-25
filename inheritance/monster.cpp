#include <iostream>

#include "monster.hpp"

monster::monster() {
	std::cout << "Monster!" << std::endl;
}

monster::monster(int hp) : hp(hp) {}

void monster::take_damage() {
	this->hp--;
}

void monster::print() {
	std::cout << "My HP is: " << this->hp << std::endl;
}

monster::~monster() {
	std::cout << "Monster destructor!" << std::endl;
}
