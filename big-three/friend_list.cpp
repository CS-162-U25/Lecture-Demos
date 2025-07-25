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

friend_list::friend_list(const friend_list& other) :
		owner(other.owner),
		num_friends(other.num_friends),
		friends(new person[other.num_friends]) {
	// Deep copy friends
	for (int i = 0; i < other.num_friends; i++) {
		this->friends[i] = other.friends[i];
	}

	std::cout << "Copy constructor!" << std::endl;
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

// fl4 = fl4;

friend_list& friend_list::operator=(const friend_list& other) {
	if (this == &other) {
		return *this;
	}

	this->owner = other.owner;
	this->num_friends = other.num_friends;
	delete [] this->friends;
	this->friends = new person[other.num_friends];
	for (int i = 0; i < other.num_friends; i++) {
		this->friends[i] = other.friends[i];
	}
	std::cout << "AOO!" << std::endl;

	return *this;
}
