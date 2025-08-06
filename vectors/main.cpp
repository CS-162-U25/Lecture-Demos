#include <iostream>

#include <vector>

// Vectors are objects that represent dyanmic arrays.
// They have member functions that let you operate on their internal array.

// Vectors make it easy to:
// - Create lists of things
// - Ensure that there are no memory leaks
// - Expand lists of things / shrink lists of things (adding and removing)

int main() {
	std::vector<double> list_of_numbers; // Calls the default constructor
	
	// Append a number to our list of numbers
	list_of_numbers.push_back(3.14);
	list_of_numbers.push_back(9.81);

	std::cout << "The first number in our vector is: " <<
		list_of_numbers[0] << std::endl;

	std::cout << "The second number in our vector is: " <<
		list_of_numbers[1] << std::endl;
	
	list_of_numbers[1] = 7.4;
	list_of_numbers.at(0) = 10.5;
	std::cout << "The first number in our vector is: " <<
		list_of_numbers.at(0) << std::endl;

	// There is one crucial difference between [] and .at():
	// 	[] result in undefined behavior if you supply an out-of-bounds
	// 		index.
	// 	.at() results in an exception being thrown if you supply an
	// 		out-of-bounds index
	
	// This calls the copy constructor of std::vector<double> in order to
	// construct copy as a copy of list_of_numbers
	std::vector<double> copy = list_of_numbers;

	std::cout << "copy.at(0)" << copy.at(0) << std::endl;
	copy.at(0) = 4.7;
	std::cout << "copy.at(0)" << copy.at(0) << std::endl;
	std::cout << "list_of_numbers.at(0)" << list_of_numbers.at(0) << std::endl;

	// This calls the copy AOO
	copy = list_of_numbers;

	// This calls the nondefault std::vector<bool> constructor, which accepts
	// a single integer as an argument. That integer is the initial size
	// of the vector.
	std::vector<bool> my_booleans(10);
	std::cout << my_booleans.at(0) << std::endl;
	std::cout << my_booleans.at(1) << std::endl;

	// This would create a vector of 100 rooms initialized through the
	// DEFAULT room constructor
	// std::vector<room> cave(100);
	
	std::vector<int> my_numbers(100, 17);

	/*
	pokemon squirtle("Squirtle", 4, 6, 2);
	// This creates 5 pokemon and initializes them all to copies of
	// squirtle via the pokemon copy constructor
	std::vector<pokemon> list_of_pokemon(5, squirtle);
	*/

	// Tip for assignment 4:
	/*
	int height = 10; // Number of rows
	int width = 4; // Number of columns
	std::vector<room> example_row(width);
	std::vector<std::vector<room>> cave(height, example_row);
	*/

	// .push_back() appends (adds an element to the end of) to the vector.
	// .insert() lets you add an element to an arbitrary position in the
	// 	vector.
	
	// Iterators are objects that represent positions within containers.
	
	// If you want to get an iterator that points to the first element
	// in a given vector v, do v.begin()
	// std::vector<int>::iterator itr = my_numbers.begin();
	
	// If you want to get an iterator that points to the fifth element
	// in a given vector v, do v.begin() + 4
	std::vector<int>::iterator itr = my_numbers.begin() + 4;

	// This inserts the value 16 at index 4 (because that's where itr
	// "points" to), and invalidates itr
	my_numbers.insert(itr, 16);

	// The .insert() function sometimes needs to allocate a new dynamic
	// array that's bigger than the old one, copy the data from the old
	// one to the new one (skipping the target index), copy the given value
	// into the correct position, delete the old dynamic array, increment
	// size member variable, update the internal pointer to point to
	// the new dynamic array instead of the old one. When the old array
	// is deleted and the internal pointer is updated, all preexisting
	// iterators become invalid because they STILL POINT to the "old"
	// dynamic array's data.

	// Starting now, you should NOT USE itr in any way. Using the invalidated
	// iterator results in undefined behavior.

	// 17, 17, 17, 17, 16, 17, 17, 17, 17
	std::cout << my_numbers.at(4) << std::endl;
	std::cout << my_numbers.at(3) << std::endl;
	std::cout << my_numbers.at(5) << std::endl;
	
	// .erase() is used to remove an element from a given vector
	my_numbers.erase(my_numbers.begin() + 3);
	std::cout << my_numbers.at(0) << std::endl;
	std::cout << my_numbers.at(1) << std::endl;
	std::cout << my_numbers.at(2) << std::endl;
	std::cout << my_numbers.at(3) << std::endl;

	for (int i = 0; i < my_numbers.size(); i++) {
		std::cout << my_numbers.at(i) << " ";
	}
	std::cout << std::endl;

	
}
