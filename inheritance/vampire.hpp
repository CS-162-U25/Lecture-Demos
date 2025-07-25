#ifndef VAMPIRE_HPP
#define VAMPIRE_HPP

#include "monster.hpp"

class vampire : public monster {
private:
	double strength = 1.0;
public:
	vampire();
	vampire(int hp);

	void suck_blood();
	void print();
};

#endif
