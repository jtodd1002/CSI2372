#include "animalCard.h"

class SplitThree : public AnimalCard {
	std::string animalValueLT;
	std::string animalValueLB;
	std::string animalValueR;
public:
	SplitThree() : AnimalCard() {};
	SplitThree(Orientation o, EvenOdd e, std::string lt, std::string lb, std::string r) : AnimalCard(o, e) {};
	void print();
};
