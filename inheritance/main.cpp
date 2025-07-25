#include "zombie.hpp"
#include "vampire.hpp"

int main() {
	// When we create z, we are creating a zombie object, but we're also
	// creating a monster object. When we create an object of a class,
	// we call a constructor of that class. The below line of code
	// calls a zombie constructor, AND it calls a monster constructor
	zombie z;
	z.print();

	vampire v;
	v.print();

	// Type casting: Converting an expression from one type to another
	// Upcasting is type casting up an inheritance tree.

	//              monster
	//
	//    zombie               vampire
	//
	//  ghoul  baby_zombie
	v.take_damage();
	v.print();
	monster m = v;
	
	m.print();

	// Yes, there is such thing as downcasting.
	// No, you shouldn't ever do it.
	// dynamic_cast

}
