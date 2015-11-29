#include "animalCard.h"

class SplitFour : public AnimalCard {
	std::string animalValueTL;
	std::string animalValueTR;
	std::string animalValueBL;
	std::string animalValueBR;
public:
	SplitFour() : AnimalCard() {};
	SplitFour(Orientation o, EvenOdd e, std::string lt, std::string lb, std::string rt, std::string rb) : AnimalCard(o, e) {};
	void printRow(EvenOdd);
};
