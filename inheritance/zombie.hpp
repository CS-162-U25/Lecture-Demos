#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include "monster.hpp"

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
public:
	zombie();
	zombie(int hp);

	// This is referred to as extension
	void eat_brains();
	~zombie();
};

#endif
