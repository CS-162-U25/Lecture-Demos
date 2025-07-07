#include <iostream>
// Create a function that receives an array of booleans, and sets the values
// in the array to alternating trues / falses

void populate_array(bool my_array[], int size) {
	// TODO
	
	// Hint: i % 2 == 0 if and only if i is even.
	
	for (int i = 0; i < size; i++) {
		if (i % 2 == 0) {
			my_array[i] = true;
		} else {
			my_array[i] = false;
		}
	}
}

int main() {
	bool array[100];
	populate_array(array, 100);
	std::cout << array[0] << std::endl; // 1
	std::cout << array[1] << std::endl; // 0
	std::cout << array[2] << std::endl; // 1
}
