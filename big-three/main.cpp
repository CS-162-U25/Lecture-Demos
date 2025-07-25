#include <iostream>

#include "person.hpp"
#include "friend_list.hpp"

// RAII (Resource acquisition is initialization)

void foo(friend_list fl) {
	std::cout << "Hello" << std::endl;
}

int main() {
	// Nondefault constructor call
	person joe("Joe");

	// This automatically calls the default constructor of the friend_list class on fl
	friend_list fl;

	friend_list fl2(joe, 100);

	// Copy constructor. A copy constructor is a constructor of a given
	// 	class that accepts another object of the same class, and
	// 	constructs the new object to be a copy of the other object.
	friend_list fl3 = fl2;

	// Copy constructor gets executed any time you create a new object
	// as a copy of an existing object
	friend_list fl4(fl3);

	// "Parameters are copies of arguments"
	foo(fl2);

	// This does NOT call the friend list copy constructor.
	// This calls the copy assignment operator overload (AOO)
	fl4 = fl;

	// Shallow copy means copying pointers rather than the data that they
	// point to.
	
	// Deep copy means copying the data rather than the pointer

	// friend_list fl3;
	// fl3.owner = fl2.owner;
	// fl3.friends = fl2.friends; // Shallow copy
	// fl3.num_friends = fl2.num_friends;
}
