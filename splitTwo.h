#include "animalCard.h"

class SplitTwo : public AnimalCard {
public:
	SplitTwo() : AnimalCard() {};
	SplitTwo(Orientation o, EvenOdd e, std::string l, std::string r) : AnimalCard(o, e) {};
};
