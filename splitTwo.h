#include "animalCard.h"

class SplitTwo : public AnimalCard {
	std::string animalValueT;
	std::string animalValueB;
public:
	SplitTwo() : AnimalCard() {};
	SplitTwo(Orientation o, EvenOdd e, std::string l, std::string r) : AnimalCard(o, e) {};
	void printRow(EvenOdd);
};
