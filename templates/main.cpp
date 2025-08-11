#include "car.hpp"
#include "merchant.hpp"

// Big idea: Class templates are classes with placeholders in them

// Instantiating a class template creates a class on the fly

// Class templates are blueprints for classes, similar to how classes /
// structure types are blueprints for objects

// Class template instantiation happens at compile time. It's the compiler's
// reponsibility. This speeds up runtime. It also creates restrictions.
// Because of this, class template arguments must be compile-time constants.

// Class templates is a specific term for the more general term "generic programming"

int main() {
	// When the compiler encounters a template instantiation,
	// it basically copies and pastes the class template definition,
	// replacing the template parameters with the corresponding template
	// arguments. This creates a brand new class.
	
	// merchant is a class template
	// merchant<car> is a class
	// merchant<refrigerator> is another class
	merchant<car> joe;

	// Class templates are a metaprogramming mechanism

	car ford_taurus;
	ford_taurus.make = "Ford";
	ford_taurus.model = "Taurus";

	joe.buy(ford_taurus);

	car subaru_forester;
	subaru_forester.make = "Subaru";
	subaru_forester.model = "Forester";

	joe.buy(subaru_forester);

	joe.sell(0);
}
