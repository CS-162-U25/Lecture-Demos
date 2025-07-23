#include <iostream>

#include "friend_list.hpp"

// The purpose of default constructors is to initialize objects to default
// values.
// Member initializer list
friend_list::friend_list() : num_friends(1), friends(new person[1]) {
	// TODO Set this->friends[0].name = "Mark Zuckerberg"
	std::cout << "Constructor!" << std::endl;
}

friend_list::friend_list(const person& owner, int num_friends) {
	this->owner = owner;
	this->num_friends = num_friends;
	this->friends = new person[num_friends];

	std::cout << "Nondefault constructor!" << std::endl;
}
