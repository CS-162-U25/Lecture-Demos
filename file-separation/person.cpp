#include <iostream>

#include "person.hpp"

// rule of thumb for separating code:
// 	1. For each data type that you define (structure types, classes, etc),
// 		create a dedicated header file (.hpp file) for it. Define
// 		the data type in that header file.
// 	2. For each function "related to" that data type, PROTOTYPE it in
// 		that same header file.
// 	3. Create a corresponding implementation file (.cpp file), and DEFINE
// 		the prototyped functions from step 2
// 	4. Anywhere that you need access to a data type AND / OR one of
// 		the functions associated with that data type, simply #include
// 		the header file.
// 	5. Never #include .cpp files.
// 	6. Never compile .hpp files. Only include them. Only compile .cpp files.

// Three rules that we must follow in file separation:
// 1. For every function that is used within a given .cpp file, it must be
// 	DECLARED at least once within that very same .cpp file before it is
// 	used.
// 2. For every function that is used within a PROGRAM, it must be DEFINED
// 	EXACTLY ONCE in that program
// 3. For every structure type that is used within a given .cpp file, it must
// 	be DEFINED at least once within that very same .cpp file before it is
// 	used.

// This is also a function definition. All function definitions are also
// 	function declarations.
void print_person(const person& p) {
	std::cout << p.name << std::endl;
}
