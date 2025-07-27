#ifndef MONSTER_HPP
#define MONSTER_HPP

#include "player.hpp"

// To achieve dynamic binding, you need"
// 1. A base class, which is inherited from / extended by other derived classes
// 2. In that base class, you need a member function that's overridden by one
// 	or more derived classes
// 3. In the prototype of that member function in the base class, you need to
// 	annotate it as "virtual"

// The monster class is referred to as a "base class"
class monster {
private:
// Three access modifiers in total:
// private: Accessible only to member functions of the same class
// public: Accessible everywhere
// protected: Accessible only to member functions of the class class AND
// 	member functions of classes derived from this class.
	// Hit points / health
	// private members are only accessible by member functions of the
	// 	same class
	int hp = 10;
public:
	monster();
	monster(int hp);
	void take_damage();
	void print();
	// The virtual keyword is an indicator to your computer that you 
	// want all function calls to this function to be bound dynamically
	// rather than statically.
	virtual void attack_player(player& p);
};

#endif
