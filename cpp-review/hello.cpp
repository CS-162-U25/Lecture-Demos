#include <iostream>

// Single-line comment

/* Multiline




comment*/

// The main function
// The "entrypoint" of the program
// The "exit point" of the program
int main() {
	// This is where the program starts
	
	// <<: stream insertion operator
	// stream: some sort of object where you can insert data
	// std::cout: console output stream. Anything inserted into std::cout
	// 	will be printed to the console (i.e., the terminal)
	std::cout << "Hello, World!"; // All statements end in a semicolon
	std::cout << std::endl;

	// +: Addition
	// -: Subtraction 
	// *: Multiplication
	// /: Division
	// %: Modulo (remainder after division)
	std::cout << (5 * 5 + 4 / 2) << std::endl;

	// Rule of thumb in C++:
	// Whenever you do a mathematical operation on two operands, the result
	// of that operation will have the same type as the more precise type
	// of the two operands
	//
	// Rule of thumb in C++: Whenever you convert a floating point number
	// 	into an integral number, the conversion rule is truncation.
	// 	In other words, we round down (floor)
	std::cout << (5.0 / 2) << std::endl; // Prints: 2.5

	std::cout << (456742154 % 100) << std::endl; // Prints:

	// An expression: A piece of code with a type and a value.
	// 162 // this is an expression with type int and value 162

	// Here are some primitive types:
	// int: Integer, a whole number
	// 	162
	// short int: Short integer. Fewer bytes.
	// long int: Long integer. More bytes. Can be bigger.
	// float: A number that has a point in it that can be anywhere
	// 	3.14f
	// double: Double-precision floating point number
	// 	3.14
	// 	3.0
	// 	.03
	// 	.3
	// 	3.
	//
	// bool: Boolean. True or false value.
	// 	true
	// 	false
	//
	// char: Character.
	// 	'A'
	// 	'1'
	// 	'!'

	// std::string: Stands for string. Not a primitive type. You must
	// #include <string> or #include <iostream>.
	// 	For example, a sentence
	// 	A paragraph
	// 	A letter
	// 	An empty string

	// Character encoding: A table that maps characters to numbers
	// ASCII encoding.
	std::cout << ('1' + '1') << std::endl; // Prints 98

	// Variables must be declared. State its existence:
	// 	Its name
	// 	Its type
	int favorite_number;

	// Not a syntax error. A kind of runtime error. What does it do?
	// Invokes undefined behavior. This line of code could do ANYTHING.
	// std::cout << favorite_number << std::endl;

	// Definitions give values to things.
	// Assignment operator: Fully evaluates the expression on the right,
	// and then it stores a copy of the value of that expression in the
	// variable on the left.
	favorite_number = 12 + 7 * 3; // 33
	std::cout << favorite_number << std::endl;
	std::cout << 33 << std::endl;

	double pi = 3.14; // Compound declaration + assignment

	// Any time you write out a type followed by a name, that's a variable
	// declaration. It creates a NEW VARIABLE.
	//
	// Any time you write out a name of a variable WITHOUT a type, that
	// just means you're using an existing variable.

	// Conversions
	// Rule about variables: Once a variable is declared to be of a certain
	// type, it will ALWAYS be of that type
	pi = 12; // This does NOT change the type of pi. It changes the value of pi to 12.0
	favorite_number = 3.999; // This does NOT change the type of favorite_number. It changes the value to 3. Truncation.

	std::cout << favorite_number << std::endl;

	// Standard input: Reading data from the terminal
	std::cout << "Enter your favorite integer: "; // << stream insertion
	std::cin >> favorite_number; // >> stream extraction

	std::cout << "The number you entered is: " << favorite_number << std::endl;

	// If statements + booleans
	// Conversion rules: 0 -> false, every other number -> true
	// false -> 0, true -> 1
	bool i_like_pizza = false;
	bool i_like_broccoli = false;

	std::cout << i_like_pizza << std::endl; // Prints 1

	// Three main logical operators:
	// && ("logical and")
	// || ("logical or")
	// ! ("not")
	if ((i_like_pizza && !i_like_broccoli) || (i_like_broccoli && !i_like_pizza)) {
		// Some code goes in here
		// The body of the if statement
		std::cout << "Let's eat one of: pizza or broccoli!" << std::endl;
	} else if (false) {
		// Some body
		// Dead code.
	} else if (true) {
		// Some other body
	} else {
		// Some last-resort body of code
		// Dead code.
	}

	// Relational operators. Sometimes call them comparison operators.
	// == ("equality"). Ex: 4 == 3: false.   Ex: 5.0 == 5.0: True
	// != ("not equal to")
	// < ("less than")
	// > ("greater than")
	// <= ("less than or equal to")
	// >= ("greater than or equal to")

	if (favorite_number == 57) {
		std::cout << "Hey! Me too!" << std::endl;
	} else {
		std::cout << "Interesting! My favorite number is 57!" << std::endl;
	}

	/*
	// Very common mistake with if statements and loops
	if (favorite_number = 57) {
		std::cout << "Hey! Me too!" << std::endl;
	}

	// Common trick: Yoda notation 
	if (57 == favorite_number) {
		std::cout << "Hey! Me too!" << std::endl;
	}
	*/

	// Loops
	// Three kinds of loops in C++:
	// For loops
	// While loops
	// Do-while loops
	
	// While loop
	int x = 0;
	while (x < 10) {
		// While loop body
		std::cout << "Hello, World!" << std::endl;
		// x = x + 3;
		x += 3;

		// -=
		// *=
		// /=
		// %=
	}

	std::cout << x << std::endl; // Prints 12

	/*
	// do-while loops always run at least once
	do {
		
	} while ();
	*/

	// For loops
	// 1. Initialization statement
	// 2. Condition
	// 3. Post statement
	
	// Computer encounters for loop. Executes initialization statement ONCE.
	// Evalutes condition. If true, executes body, then post statement.
	// Evaluates condition again...
	//
	// For loops are useful for running something a fixed number of times
	for (int i = 0; i < 10; i++) {
		std::cout << "I like broccoli now!" << std::endl;
		// 0 1 2 3 4 5 6 7 8 9
		// Total of 10 times
	}

	// Scope

	// Functions

	// Start on arrays

	// This is where the program ends
}
