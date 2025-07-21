#include <iostream>

#include "circle.hpp"

// Most direct coupling occurs at "interfaces".
// Every component of code that you can interact with has an interface
// 	and an implementation.
// Interfaces describe "what" / "why"; purpose / "responsibility"
// Implementations describe "how"

// In a function, the header describes the interface. The body describes the
// implementation. Implementation details are a "black box".

// Abstraction: The idea of hiding implementation details behind a simple
// 	interface.
void say_hello() {
	std::cout << "Hello, World!" << std::endl;
}

int main() {
	circle c;
	// c.radius = 10000; // This is a syntax error

	// Coupling: When in order to change one piece of code, you also have
	// to change one or more other pieces of code.
	// Coupling makes code hard to change.
	
	// std::cout << c.radius / 1000 << std::endl; // Print the circle's radius in meters

	say_hello();

	// The goal in managing coupling is to construct "stable interfaces".
	// "Stable": Unchanging
}
