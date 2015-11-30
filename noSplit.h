#include "animalCard.h"

class NoSplit : public AnimalCard {
public:
	NoSplit() : AnimalCard() {};
	NoSplit(Orientation o, EvenOdd e, std::string) : AnimalCard(o, e) {};
	void printRow(EvenOdd);
};
