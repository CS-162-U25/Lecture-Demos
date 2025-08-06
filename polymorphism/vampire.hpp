#ifndef VAMPIRE_HPP
#define VAMPIRE_HPP

#include "monster.hpp"
#include "player.hpp"

class vampire : public monster {
private:
	double strength = 1.0;
public:
	vampire();
	vampire(int hp);

	void attack_player(player& p) override;
	void suck_blood();
	void print();

	monster* clone() override;
};

#endif
