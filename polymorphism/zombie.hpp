#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include "monster.hpp"
#include "player.hpp"

// This creates an "is-a" relationship between the zombie class and the
// monster class. This is called inheritance.

// The monster class is referred to as the "base class", "parent class",
// 	or "super class"

// The zombie class is referred to as a "derived class", "child class",
// 	or "sub class"

// In an inheritance relationship, everything that is declared in the base
// class is inherited into the derived class, except constructors and
// destructors.


class zombie : public monster {
private:
	double sanity = 1.0;
public:
	zombie();
	zombie(int hp);

	void attack_player(player& p);
	// This is referred to as extension
	void eat_brains();

	// This idea here, declaring a function with the same name
	// and same parameter list in a derived class as one that was
	// declared in the base class, is called "overriding"
	void print();
};

#endif
