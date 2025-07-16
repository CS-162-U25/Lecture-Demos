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

// Tool #1: Member functions.
// A member function is a function that belongs to an object.
// An object is a variable whose type is a structure type or a class.
// In C++, a class is exactly the same thing as a structure type, EXCEPT
// in a class, members are private by default, whereas in a structure type,
// they're public by default.

// A common convention is, if you want to have private members, you should USUALLY
// use a class. If you want member functions, you should USUALLY use a class.
// Another interpretation: structure types should only have public member variables.
// Such types are sometimes called "POD" types (plain-old-data)
class circle {
// Tool #2: Access modifiers
// 	public: A public member can be accessed from anywhere
// 	private: A private member can only be accessed by member functions of
// 		the same data type
private:
	double radius; // Member variable
public:
	// This member function is called a "setter", AKA "mutator"
	void set_radius_in_meters(double value);

	// This member function is called a "getter", AKA "accessor"
	double get_radius_in_meters();

	double compute_area(); // Function prototype
};

#endif
