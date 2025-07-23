#ifndef CIRCLE_HPP
#define CIRCLE_HPP

// Generally, prefer to make member variables private.
// Generally, prefer to make member functions public.
// Generally, whenever you want to operate on an object's
// data, you do so by calling a specific member function of its type that
// does the operation that you want to perform.

// Recommendation: Study design patterns.

// Object-oriented programming: Whenever you want to operate on an object's
// data, you do so by calling a specific member function of its type that
// does the operation that you want to perform.

// Information hiding: Making member variables private.
// Encapsulation: Bundling, or co-locating, hidden data with public behavior
// 	that operate on that data
class circle {
private: // These members can only be accessed from within member functions of
	 // the circle structure type.
	// These things are no longer interface details, but rather implementation
	// details.
	double radius; // Member variable, represents radius in meters.
public:
	// For CS 162, just get it working
	// Remember the goal: to create stable interfaces
	
	// The member function is now const.
	
	// A const member function cannot modify the member variables of the
	// object. A const member function cannot call other non-const member
	// functions.
	double get_radius() const;

	void set_radius(double radius);
};

#endif
