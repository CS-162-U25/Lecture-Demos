#include "circle.hpp"

void circle::set_radius_in_meters(double value) {
	this->radius = value * 1000;
}

double circle::get_radius_in_meters() {
	return this->radius / 1000;
}

double circle::compute_area_in_square_meters() {
	// this is a pointer to the object that owns the member function
	// this is a pointer to the object on which this member function
	// 	is currently being called

	// -> is called the "arrow operator". It's equivalent to
	// dereferencing and then using the dot operator.
	return 3.141592 * this->get_radius_in_meters() * this->get_radius_in_meters();
}
