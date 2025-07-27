#include "player.hpp"
#include "zombie.hpp"
#include "vampire.hpp"

// Polymorphism: Many forms.
// The idea of polymorphsim is to have a variable whose type can be one of
// 	several options.
//
// Goal: Store all of the zombies and vampires (and so on) in a SINGLE array.

// There are two things that you have to do to get polymorphism to work.
// 	1. Avoid object slicing by upcasting pointers / references instead
// 		of individual objects
// 	2. Avoid static binding in favor of late binding.


// Every variable has two types.
//   Static type. Declared type. Known to the compiler.
//   Dynamic type. The object's actual, underlying type. The one case
//   	where dynamic type != static type, is when you upcast pointers or
//   	references.

void do_monster_turns(
		player& p,
		monster** monsters,
		int n_monsters) {
	for (int i = 0; i < n_monsters; i++) {
		// Function binding: Associating a function call with
		// a function body / definition

		// Static binding: The default. Static means "before runtime".
		// 	Static binding is performed by the compiler. Based on
		// 	the static types of expressions.
		//
		// Dynamic binding: Not the default. Dynamic means "at runtime"
		// 	Enabled by the "virtual" keyword in the base class
		// 	function prototype. Based on the dynamic types of
		// 	expressions.

		// The compiler knows that the static type of monsters[i] is
		// monster*. It DOESN'T know the dynamic type of monsters[i].
		// The compiler does the only thing that it KNOWS will work,
		// it binds this function call to the monster::attack_player()
		monsters[i]->attack_player(p);
	}
}

int main() {
	// Upcasting: Type cast an object into a base class type
	player p;

	p.print();

	// The static type of monsters[0] is monster*
	// The dynamic type of monsters[0] is zombie*
	monster** monsters = new monster*[25];
	for (int i = 0; i < 10; i++) {
		zombie* z = new zombie;
		monsters[i] = z;
	}
	for (int i = 10; i < 25; i++) {
		vampire* v = new vampire;
		monsters[i] = v;
	}
	

	do_monster_turns(p, monsters, 25);
	p.print();
	do_monster_turns(p, monsters, 25);
	p.print();
	
	for (int i = 0; i < 25; i++) {
		delete monsters[i];
	}
	delete [] monsters;
}
