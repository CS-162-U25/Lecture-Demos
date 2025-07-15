#include <iostream>
#include <string>

// Preprocessing directive.
// #include is basically an automatic copy/paste tool
#include "person.hpp"

// Goal: Write a C++ program that consists of more than one .cpp file

// Three rules that we must follow in file separation:
// 1. For every function that is used within a given .cpp file, it must be
// 	DECLARED at least once within that very same .cpp file before it is
// 	used.
// 2. For every function that is used within a PROGRAM, it must be DEFINED
// 	EXACTLY ONCE in that program
// 3. For every structure type that is used within a given .cpp file, it must
// 	be DEFINED exactly once within that very same .cpp file before it is
// 	used.

int main() {
	person p;
	p.name = "Mohammad";
	print_person(p);
}
