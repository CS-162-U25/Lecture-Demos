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
		std::cout << prompt << std::endl; // Ask the user for W/A/S/D
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

void change_me(double d) {
	d = 9.81;

	// return 5; // Illegal.
}

// To "call" a function means to use it, or to execute it

const double pi = 3.1415;

void populate_array(float array[], int size) {
	for (int i = 0; i < size; i++) {
		if (i == 53) {
			array[i] = 0.1;
		} else {
			array[i] = 5.1;
		}
	}
}

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

	double d = 3.14;
	// Expression is a piece of code with a type and a value
	change_me(d);
	std::cout << d << std::endl; // Prints 3.14. Parameters are COPIES of arguments.

	// Functions
	char user_input = prompt_for_direction("Enter W/A/S/D: ");

	// Arrays
	// Arrays are series of values. Homogeneous (all the same type).
	// "Regular" arrays are of a fixed, compile-time constant size.
	// 	(An array's size cannot be changed once created).
	//	(The size must be a constant that is known at the time of compilation)
	float cool_numbers[100];

	// Arrays are indexed by zero => The first element has index 0
	cool_numbers[0] = 3.14; // Set the first float to 3.14
	cool_numbers[1] = 9.81; // Set the second float to 9.81
	std::cout << cool_numbers[0] << std::endl; // Print the first float

	// For an array of size N, the valid indices are [0, N - 1]
	// If you try to access an element within an array at an invalid index,
	// 	undefined behavior
	
	// This instance of undefined behavior is called a buffer overread
	// / buffer overflow
	// std::cout << cool_numbers[100] << std::endl; // Undefined behavior
	// cool_numbers[100] = 0.0; // Undefined behavior

	// How to pass an array into a function:
	populate_array(cool_numbers, 100);

	std::cout << cool_numbers[49] << std::endl; // Prints 5.1
}
