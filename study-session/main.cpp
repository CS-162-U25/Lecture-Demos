#include <iostream>

int* create_int() {
	int x = 10;
	return &x;
}

int* create_int_on_heap() {
	int* x = new int;
	*x = 10;
	return x;
}

int main() {
	// Dangling pointer: A pointer that points to (stores the address of)
	// deleted memory.
	
	// Dereferencing a dangling pointer is a use-after-free error and results
	// in undefined behavior.
	int* p = create_int(); // p is a dangling pointer
	std::cout << *p << std::endl; // this is a use-after-free error

	int* p2 = create_int_on_heap(); // Not dangling
	*p2 = 15; // Not use-after-free

	int n = 10;
	bool* my_array = new bool[n];
	delete [] my_array; // At this point, my_array is now a dangling pointer

	my_array[0] = true; // This is another use-after-free error

	char* my_pointer;

	char my_character = 'A';
	my_pointer = &my_character;

	char my_character2 = 'B';
	my_pointer = &my_character2;
	*my_pointer = 'C';

	// One rule of references: They cannot be changed after they're declared
	char& my_reference = my_character;
	my_reference = my_character2; // Sets my_character = my_character2

	// *
	// 	In declaration: "This is a pointer"
	// 	Before an existing pointer variable: Dereference operator,
	// 		AKA indirection operator, dereferences the variable
	// &
	// 	In declaration: "This is a reference"
	// 	Before an existing variable: Address-of operator. Gets the
	// 		address of the given variable.
}

// [p1, p2, p3, p4]
//
// [1, 2, 3, 4, 5]
// [2, 4, 6, 8, 10]
// [3, 6, 9, 12, 15]
// [4, 8, 12, 16, 20]
