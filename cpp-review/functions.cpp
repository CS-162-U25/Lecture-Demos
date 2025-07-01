#include <iostream>
#include <string>

// This line is inside a scope called the "global scope".
// Contains all other scopes.

// Variables declared in the global scope are called "global variables".
// In CS 162, global variables are BAD.

// Constants declared in the global scope are called "global constants".
// These are perfectly fine.

// Syntax for creating a function:
// <return type> <name>(<parameter list>) {
//	<Function body>
// }

char prompt_for_direction(std::string prompt) {
	bool last_input_is_valid;
	char input;
	do {
		std::cout << "Enter W/A/S/D" << std::endl; // Ask the user for W/A/S/D
		std::cin >> input;
	
		if (input == 'W' || input == 'A' || input == 'S' || input == 'D') {
			last_input_is_valid = true;
		} else {
			last_input_is_valid = false;
		}
	} while(!last_input_is_valid);

	// Once we make it down here, that means the user supplied a valid value
	// Last step: return the value!
	return input;

	// Any code here is dead code.
}

// To "call" a function means to use it, or to execute it

const double pi = 3.1415;

int main() {
	// A scope is loosely a set of curly braces. Dictates where symbols
	// are accessible.
	//
	// Symbol: A named thing. A variable. A constant. A macro. A function.
	// 
	// A symbol is accessible only within its scope below its point of
	// declaration. Any time you try to access a symbol outside of these
	// requirements, you'll get a syntax error that says something like:
	// 'XYZ is not declared in this scope'.
	
	int x = 3;
	std::cout << x << std::endl;

	std::cout << pi << std::endl;

	// You can have scopes inside of scopes.
	if (x == 3) {
		// This is a scope nested within another scope.
		bool y = true;
		std::cout << y << std::endl; // Prints 1
	}

	// std::cout << y << std::endl; // Syntax error

	std::cout << x << std::endl; // Prints 3

	// This is illegal:
	// int x = 4;
	// char x = 'A';
	
	for (int i = 0; i < 2; i++) {
		// This is a scope.
		char x; // This x "shadows" the other x. Temporarily makes the
			// other x inaccessible via its name. The shadowing
			// lasts as long as the shadowing variable.
		std::cout << "What's your favorite letter?: ";
		std::cin >> x;
		std::cout << x << std::endl;

		x = 10;
	}
	// Now, the original x is unshadowed.
	std::cout << x << std::endl; // Prints: 3

	// Functions
	char user_input = prompt_for_direction("Enter W/A/S/D: ", 1);

	std::cout << compute_area(4, 5) << std::endl;
	std::cout << compute_area(3, 7) << std::endl;

	// Arrays
}
