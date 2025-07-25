#ifndef MONSTER_HPP
#define MONSTER_HPP

// The monster class is referred to as a "base class"
class monster {
private:
// Three access modifiers in total:
// private: Accessible only to member functions of the same class
// public: Accessible everywhere
// protected: Accessible only to member functions of the class class AND
// 	member functions of classes derived from this class.
	// Hit points / health
	// private members are only accessible by member functions of the
	// 	same class
	int hp = 10;
public:
	monster();
	monster(int hp);
	void take_damage();
	void print();
	~monster();
};

#endif
