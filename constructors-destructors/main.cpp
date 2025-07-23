#include <iostream>

#include "person.hpp"
#include "friend_list.hpp"

// RAII (Resource acquisition is initialization)

int main() {
	// Nondefault constructor call
	person joe("Joe");

	// This automatically calls the default constructor of the friend_list class on fl
	friend_list fl;

	friend_list fl2(joe, 100);
}
