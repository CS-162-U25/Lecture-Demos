#include <iostream>
#include <fstream>

// Don't try to return a std::ifstream or std::ofstream

// Create your ofstreams / ifstreams early

void write_data(std::ofstream& my_file) {
	my_file << "Hello, World!" << std::endl;
}

int main() {
	std::cout << "Hello, World!" << std::endl;
	
	std::ofstream my_file;
	my_file.open("data.txt", std::ofstream::app);

	write_data(my_file);
}
