#ifndef PERSON_HPP
#define PERSON_HPP

#include <string>

class person {
private:
	std::string name = "Ozzy";
public:
	person();

	person(const std::string& name);
};

#endif
