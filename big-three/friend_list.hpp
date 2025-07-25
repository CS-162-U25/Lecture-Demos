#ifndef FRIEND_LIST_HPP
#define FRIEND_LIST_HPP

#include "person.hpp"

// Constructors are special member functions that are automatically called
// the moment an object of that class is declared. The purpose of a constructor
// is to "set up" the object.

// Destructors are special member functions that are automatically called
// the moment an object of that class is about to be freed from memory. The
// purpose of a destructor is to "tear down" the object.

// 1. Default member initializers
// 2. Create some sort of initialize() member function
// 3. Constructors. Just a special member function that's automatically called
// 	the moment an object of the given class is created.
// 	Default constructors don't have parameters.
// 	Nondefault constructors do.
class friend_list {
private:
	person owner;
	int num_friends = 0;
	person* friends = nullptr;
public:
	// Constructors don't have return types.
	// Constructors must be named after their classes.
	// Default constructor
	friend_list();

	// Copy constructor
	friend_list(const friend_list& other);

	// Nondefault constructor
	friend_list(const person& owner, int num_friends);

	// Every constructor in a given class must have a different parameter
	// list

	// Destructors have no return types.
	// Destructors have no parameters.
	// Destructors must be named after their classes, but with a tilde
	// 	before the name (~)
	~friend_list();

	friend_list& operator=(const friend_list& other);
};

#endif
