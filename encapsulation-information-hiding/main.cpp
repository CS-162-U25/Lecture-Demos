#include <iostream>

#include "circle.hpp"

// Object-oriented programming
// Classes, objects, inheritance, polymorphism.
double area_of_circle(const circle& my_circle) {
	return 3.141592 * my_circle.radius * my_circle.radius;
}

int main() {
	circle c;
	c.radius = 10;

	// Want to compute the area of the circle and print it
	std::cout << area_of_circle(c) << std::endl;
}
