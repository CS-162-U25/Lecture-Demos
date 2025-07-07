#include <iostream>

// Pointers and references

// Memory addresses: A number that represents the location of a byte in memory.

// RAM (random access memory): The place in memory where variables are stored

// In RAM, there is a byte 0, a byte 1, a byte 2, and so on.

void change_me(bool* x) {
	*x = true;
}

void change_me2(bool& x) {
	x = true;
}

int main() {
	bool y = false;

	std::cout << y << std::endl; // Prints 0

	// &: Address-of operator.
	std::cout << &y << std::endl; // Prints the memory address of y

	// Pointer: A kind of variable that stores the address of one other variables
	bool* ptr = &y;

	// Indirection operator / dereference operator: *. Goes to the location
	// in memory stored within a given pointer and accesses the VALUE
	// at that location.
	std::cout << ptr << std::endl; // Prints the memory address of y
	std::cout << *ptr << std::endl; // Prints 0
	// *ptr = true; // This changes y to true

	change_me(&y);

	std::cout << y << std::endl; // Prints: 1

	bool z;
	ptr = &z;

	*ptr = true; // Changes z to true
	*ptr = false; // Changes z to false

	std::string* my_string_pointer = nullptr;

	// *my_string_pointer = "Hello"; // Undefined behavior. Usually seg fault

	// References: A pointer with simpler syntax, which means that there
	// are fewer things that you can do with them
	std::string name = "Alex";
	std::string* name_ptr = &name; // How you set up a pointer to point to name
	
	// References are kind of like nicknames
	std::string& name_ref = name; // How you set up a reference to point to name
	std::cout << name_ref << std::endl;

	name_ref = "Tyler"; // Changes name to Tyler

	change_me2(y); // Changes y to true

	// References can never be changed.
	// References must be initialized as they are declared.

	// Arrays as pointers
	// Dangling pointers / references
}
