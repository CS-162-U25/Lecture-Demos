#ifndef CIRCLE_HPP
#define CIRCLE_HPP

// Member functions.
// A member function is a function that belongs to an object.
// An object is a variable whose type is a structure type or a class.
struct circle {
	double radius; // Member variable
	
	double compute_area() {
		// this is a pointer to the object that owns the member function
		// this is a pointer to the object on which this member function
		// 	is currently being called

		// -> is called the "arrow operator". It's equivalent to
		// dereferencing and then using the dot operator.
		return 3.141592 * this->radius * this->radius;
	};
};

#endif
