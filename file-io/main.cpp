#include <iostream> // Standard input / output (standard I/O)
#include <fstream> // File input / output (file I/O)

int main() {
	// The first step in doing file input is to create a std::ifstream
	// object (input file stream)
	std::ifstream people_file;
	people_file.open("people.txt");
	
	int n;
	people_file >> n;
}
