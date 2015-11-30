#include "animalCard.h"

class SplitFour : public AnimalCard {
public:
	SplitFour() : AnimalCard() {};
	SplitFour(Orientation o, EvenOdd e, std::string lt, std::string lb, std::string rt, std::string rb) : AnimalCard(o, e) {};
};
