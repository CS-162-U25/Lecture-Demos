#include <iostream>

#include "friend_list.hpp"

// Whenever you construct an object that has more objects inside it,
// the inner objects' constructor bodies get executed first.

// The purpose of default constructors is to initialize objects to default
// values.
// Member initializer list
friend_list::friend_list() : owner("Jasmine"), num_friends(1), friends(new person[1]) {
	// TODO Set this->friends[0].name = "Mark Zuckerberg"
	std::cout << "Constructor!" << std::endl;
}

friend_list::friend_list(const person& owner, int num_friends) :
		owner(owner),
		num_friends(num_friends),
		friends(new person[num_friends]) {
	std::cout << "Nondefault constructor!" << std::endl;
}

friend_list::~friend_list() {
	// In CS 162, use destructors to free dynamic memory that pointers
	// within the object point to
	delete [] this->friends;
	std::cout << "Friend list destructor!" << std::endl;
}
