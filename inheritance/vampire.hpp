#ifndef VAMPIRE_HPP
#define VAMPIRE_HPP

#include "monster.hpp"

class vampire : public monster {
private:
public:
	vampire();
	vampire(int hp);

	void suck_blood();
};

#endif
