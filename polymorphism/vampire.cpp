#include <iostream>

#include "vampire.hpp"
#include "player.hpp"

vampire::vampire() : monster(20) {}

vampire::vampire(int hp) : monster(hp) {}

void vampire::attack_player(player& p) {
	p.take_damage(this->strength);
	this->suck_blood();
}

void vampire::suck_blood() {
	std::cout << "Argh! Tasty blood!" << std::endl;
	this->strength += 1;
}

void vampire::print() {
	this->monster::print();
	std::cout << "My strength is: " << this->strength << std::endl;
}

monster* vampire::clone() {
	vampire* copy = new vampire;
	*copy = *this; // This calls AOO
	return copy;
}
