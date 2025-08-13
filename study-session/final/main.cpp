#include <iostream>

class event {
public:
	virtual void encounter(player& p) = 0;
	virtual ~event() = default;
};

void foo() {
	
}

int main() {
	// Static means before runtime. usually compile time.
	// Static binding means binding at compile time
	// Static binding is based on static types.
	// Dynamic means at runtime.
	// Dynamic binding means binding at runtime.
	// Dynamic binding is based on dynamic types.
	foo();

	event* e = new wumpus; // This is perfectly fine
	e->encounter(p);
	delete e;

	e = new gold;

	e = new escape_rope;

	int n;
	std::cin >> n;
	const int y = n; // y is a runtime constant

	constexpr int x = 3;

	my_template<x>

	x = 12; // This is illegal

	y = 12; // This is illegal
}
