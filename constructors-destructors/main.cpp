#include <iostream>

#include "person.hpp"
#include "friend_list.hpp"

int main() {
	person ozzy;

	// This automatically calls the default constructor of the friend_list class on fl
	friend_list fl;

	friend_list fl2(ozzy, 100);
}
