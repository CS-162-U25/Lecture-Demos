#include <iostream>

// The fundamental difference between dynamic memory and automatic memory is
// when they're freed. Memory with "dynamic storage duration" is freed
// via the delete [] operator. Memory with "automatic storage duration" is
// freed when its corresponding variable falls out of scope.

// Dynamic memory: Memory that is allocated and freed "manually" with special
// keywords
//
// In contrast to automatic memory / "regular" memory, which is allocated
// when a variable is declared and freed when said variable falls out of scope

// Strategy for resizing an array:
// 1. Create a new array that's bigger than the old array
// 2. Copy all of the data from the old array to the new array
// 3. Add new element(s) to the end, if I so choose
// 4. Increase size
// 5. Delete the old array

int* append_value(int* old_array, int old_size, int value) {
	// Base address. The memory address of the first element in an array.
	// The memory address of the array.
	int* new_array = new int[old_size + 1];
	
	// If you have a pointer that stores the base address of an array,
	// you can index it like an array
	// new_array[4] = 12;
	for (int i = 0; i < old_size; i++) {
		new_array[i] = old_array[i];
	}
	
	new_array[old_size] = value;
	
	// If you have a pointer that points to an array on the heap,
	// you can delete that array from the heap like so:
	delete [] old_array;

	return new_array;
}

bool* create_true() {
	bool my_bool = true;
	return &my_bool;
}

int main() {
	// "Regular" arrays in C++ have some restriction:
	// 	1. Homogeneous
	// 	2. The size of the array must be a compile-time constant
	// 	3. The size of the array cannot change

	// Arrays are contiguous. In memory, an array is just one big block
	// of bytes. array[0] is adjacent to array[1]

	// This is a dangling pointer. A pointer that points to data that
	// no longer exists.
	bool* x = create_true();
	
	// Use-after-free. Dereferencing a dangling pointer.
	// std::cout << *x << std::endl; // Undefined behavior
	// *x = false; // Undefined behavior

	// Create an array on the heap of size 1
	int* array = new int[1];
	array[0] = 7;
	int size = 1;

	array = append_value(array, size, -2);
	size++;
	array = append_value(array, size, 17);
	size++;
	array = append_value(array, size, 1000000);
	size++;
	array = append_value(array, size, -5);
	size++;

	for (int i = 0; i < size; i++) {
		std::cout << array[i] << std::endl;
	}

	delete [] array;
}
