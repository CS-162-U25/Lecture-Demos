#include <iostream>

#include "circle.hpp"

int main() {
	circle c;
	// c.radius = 10; // This line of code is now a syntax error
	c.set_radius_in_meters(10);

	// Want to compute the area of the circle and print it
	std::cout << c.compute_area() << std::endl;
}
