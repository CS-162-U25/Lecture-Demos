#include <iostream>

#include "zombie.hpp"
#include "player.hpp"

zombie::zombie() : monster(10) {}

zombie::zombie(int hp) : monster(hp) {}

void zombie::attack_player(player& p) {
	if (this->sanity > 0) {
		p.take_damage(1);
	} else {
		p.take_damage(5);
	}
	this->eat_brains();
}

void zombie::eat_brains() {
	std::cout << "Argh! Tasty brains!" << std::endl;
	this->sanity -= 0.1;
}

void zombie::print() {
	this->monster::print(); // This calls the monster::print() member function
	std::cout << "My sanity is: " << this->sanity << std::endl;
}

monster* zombie::clone() {
	zombie* copy = new zombie;
	*copy = *this; // This calls AOO
	return copy;
}
