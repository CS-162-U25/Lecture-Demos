#include "zombie.hpp"
#include "vampire.hpp"

int main() {
	// When we create z, we are creating a zombie object, but we're also
	// creating a monster object. When we create an object of a class,
	// we call a constructor of that class. The below line of code
	// calls a zombie constructor, AND it calls a monster constructor
	zombie z;
	z.print();

	zombie z2(20);
	z2.print();

	vampire v;
	v.print();

	vampire v2(30);
	v2.print();
}
