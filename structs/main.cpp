#include <iostream>

// Structures

// A structure type is a data type that represents a more complex "thing"
// 	that can contain other data inside it.

// I want to define a structure type for baseball players.

// Every baseball player has:
// 	- Name (std::string)
// 	- Age (int)
// 	- Batting average (double)

// Structure type definition
struct baseball_player {
	// Member variable declarations go here
	// Member variable: A variable that exists inside a structure
	std::string name;
	int age;
	double batting_average;
	std::string team_name;
};

// Function header describes the function's interface
// & makes it a reference, reduces memory used + speeds things up.
// const makes it so that the function can't change the argument.
void print_baseball_player(const baseball_player& p) {
	std::cout << p.name << " is " << p.age << " years old, and their batting "
		"average is " << p.batting_average << ", and they're on the "
		"team " << p.team_name << "." << std::endl;
}

int main() {
	// joe is a "structure". Structures are a kind of object.
	baseball_player joe;
	
	// Dot operator. It reaches inside an object to accesss one of its
	// members (i.e., one of the things inside it)
	joe.name = "Joe Redfield";
	joe.age = 45;
	joe.batting_average = 0.103;
	joe.team_name = "The Red Socks";

	print_baseball_player(joe);
}
