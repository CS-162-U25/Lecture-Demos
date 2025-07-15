#include <iostream> // Standard input / output (standard I/O)
#include <fstream> // File input / output (file I/O)



struct person {
	std::string first_name;
	std::string last_name;
	int age;
};

int main() {
	// The first step in doing file input is to create a std::ifstream
	// object (input file stream)
	std::ifstream people_file;
	people_file.open("people2.txt");

	if (people_file.fail()) {
		std::cout << "Failed to open people2.txt. Maybe it doesn't exist?" << std::endl;
		return 0;
	}
	
	int num_people;
	people_file >> num_people;

	person* people = new person[num_people];

	// Load the people from the file
	for (int i = 0; i < num_people; i++) {
		// Read all of the information about this person
		people_file >> people[i].first_name;
		people_file >> people[i].last_name;
		people_file >> people[i].age;
	}

	
	// Print the people
	for (int i = 0; i < num_people; i++) {
		// Read all of the information about this person
		std::cout << people[i].first_name << people[i].last_name <<
			people[i].age << std::endl;
	}

	
	delete [] people;
}
