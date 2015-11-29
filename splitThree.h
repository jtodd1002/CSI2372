#include "animalCard.h"

class SplitThree : public AnimalCard {
	std::string animalValueTL;
	std::string animalValueTR;
	std::string animalValueB;
public:
	SplitThree() : AnimalCard() {};
	SplitThree(Orientation o, EvenOdd e, std::string lt, std::string lb, std::string r) : AnimalCard(o, e) {};
	void printRow(EvenOdd);
};
