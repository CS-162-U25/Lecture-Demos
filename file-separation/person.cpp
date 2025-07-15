#include <iostream>

// Three rules that we must follow in file separation:
// 1. For every function that is used within a given .cpp file, it must be
// 	DECLARED at least once within that very same .cpp file before it is
// 	used.
// 2. For every function that is used within a PROGRAM, it must be DEFINED
// 	EXACTLY ONCE in that program
// 3. For every structure type that is used within a given .cpp file, it must
// 	be DEFINED at least once within that very same .cpp file before it is
// 	used.

// This is a structure type definition
struct person {
	std::string name;
};

// This is also a function definition. All function definitions are also
// 	function declarations.
void print_person(const person& p) {
	std::cout << p.name << std::endl;
}
