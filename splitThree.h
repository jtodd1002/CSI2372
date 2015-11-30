#include "animalCard.h"

class SplitThree : public AnimalCard {
public:
	SplitThree() : AnimalCard() {};
	SplitThree(Orientation o, EvenOdd e, std::string lt, std::string lb, std::string r) : AnimalCard(o, e) {};
};
