#include "animalCard.h"

class SplitTwo : public AnimalCard {
	std::string animalValueL;
	std::string animalValueR;
public:
	SplitTwo() : AnimalCard() {};
	SplitTwo(Orientation o, EvenOdd e, std::string l, std::string r) : AnimalCard(o, e) {};
	void print();
};
