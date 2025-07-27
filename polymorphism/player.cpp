#include <iostream>

#include "player.hpp"

void player::take_damage(int damage) {
	this->hp -= damage;
}

bool player::is_alive() {
	return this->hp > 0;
}

void player::print() {
	std::cout << "I am the player. My HP is: " << this->hp << std::endl;
}
