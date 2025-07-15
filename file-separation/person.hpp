#ifndef PERSON_HPP
#define PERSON_HPP
// In every header file you ever create, create HEADER GUARDS.

#include <string>

// This is a structure type definition
struct person {
	std::string name;
};

// This is a function prototype. Prototypes are declarations, but NOT definitions.
void print_person(const person& p);

#endif
