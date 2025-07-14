#include <iostream>

// TODO define a rectangle structure type. Every rectangle should have a width
// and a height
struct rectangle {
	double width;
	double height;
};

// TODO Create a function that computes and returns the area of a given
// rectangle structure
double compute_area_of_rectangle(const rectangle& r) {
	return r.width * r.height;
}

int main() {
	// TODO Create a rectangle. Give it a reasonable width and height.
	// Compute its area via the above function and print it.
	rectangle r;
	r.width = 10;
	r.height = 5;
	std::cout << "The height of a rectangle with width 10 and height 5 is "
		<< compute_area_of_rectangle(r) << std::endl;
}
