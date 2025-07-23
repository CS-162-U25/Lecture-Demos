#ifndef FRIEND_LIST_HPP
#define FRIEND_LIST_HPP

#include "person.hpp"

// 1. Default member initializers
// 2. Create some sort of initialize() member function
// 3. Constructors. Just a special member function that's automatically called
// 	the moment an object of the given class is created.
// 	Default constructors don't have parameters.
// 	Nondefault constructors do.
class friend_list {
private:
	person owner;
	person* friends;
	int num_friends;
public:
	void init(const person& owner, int num_friends);

	// Constructors don't have return types.
	// Constructors must be named after their classes.
	// Default constructor
	friend_list();

	// Nondefault constructor
	friend_list(const person& owner, int num_friends);

	// Every constructor in a given class must have a different parameter
	// list
};

#endif
