#include "animalCard.h"

class SplitFour : public AnimalCard {
	std::string animalValueLT;
	std::string animalValueLB;
	std::string animalValueRT;
	std::string animalValueRB;
public:
	SplitFour() : AnimalCard() {};
	SplitFour(Orientation o, EvenOdd e, std::string lt, std::string lb, std::string rt, std::string rb) : AnimalCard(o, e) {};
	void print();
};
