#include <iostream>

#include "monster.hpp"

monster::monster() {}

monster::monster(int hp) : hp(hp) {}

void monster::take_damage() {
	this->hp--;
}

void monster::print() {
	std::cout << "My HP is: " << this->hp << std::endl;
}

void monster::attack_player(player& p) {
	std::cout << "Argh! I'm a generic monster! I don't do anything interesting!" << std::endl;
}
