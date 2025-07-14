#include <iostream>

// Structures

// A structure type is a data type that represents a more complex "thing"
// 	that can contain other data inside it.

// I want to define a structure type for baseball players.

// Every baseball player has:
// 	- Name (std::string)
// 	- Age (int)
// 	- Batting average (double)

struct baseball {
	double diameter;
};

// Structure type definition
// A "has-a" relationship describes the relationship between a structure / object
// and its member variables
struct baseball_player {
	// Member variable declarations go here
	// Member variable: A variable that exists inside a structure
	std::string name;
	int age;
	double batting_average;
	std::string team_name;
	baseball ball;
};

void print_baseball(const baseball& ball) {
	std::cout << "The ball has a diameter of " << ball.diameter << std::endl;
}

// Function header describes the function's interface
// & makes it a reference, reduces memory used + speeds things up.
// const makes it so that the function can't change the argument.
void print_baseball_player(const baseball_player& p) {
	std::cout << p.name << " is " << p.age << " years old, and their batting "
		"average is " << p.batting_average << ", and they're on the "
		"team " << p.team_name << "." << std::endl;
	std::cout << "Here is their baseball's information:" << std::endl;
	print_baseball(p.ball);
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
	joe.ball.diameter = 15;

	print_baseball_player(joe);

	// Arrays of structs
	baseball_player my_baseball_players[10];
	int n;
	std::cin >> n;
	baseball_player* my_heap_baseball_players = new baseball_player[n];

	for (int i = 0; i < 10; i++) {
		my_baseball_players[i].name = "Sally";
		my_baseball_players[i].age = 20;
		my_baseball_players[i].batting_average = 0.5;
		my_baseball_players[i].team_name = "The Sallies";
		my_baseball_players[i].ball.diameter = 4;
	}

	// Copying structs
	baseball_player mohammad = joe;

	// This does what's called a "shallow copy". Equivalent to:
	// baseball_player mohammad;
	// mohammad.name = joe.name;
	// mohammad.age = joe.age;
	// mohammad.batting_average = joe.batting_average;
	// mohammad.team_name = joe.team_name;
	// mohammad.ball.diameter = joe.ball.diameter;
	mohammad.name = "Mohammad Ali";
	print_baseball_player(mohammad);

	// Composition refers to when structures / objects have other
	// structures / objects inside them
	
	// Set the diameter of mohammad's ball to 10
	mohammad.ball.diameter = 10;
	print_baseball_player(mohammad);
}
