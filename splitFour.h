#pragma once
#include "animalCard.h"

class SplitFour : public AnimalCard {
public:
	SplitFour();
	SplitFour(Orientation o, EvenOdd e, std::string lt, std::string lb, std::string rt, std::string rb);
};
