#pragma once
#include "animalCard.h"

class SplitThree : public AnimalCard {
public:
	SplitThree();
	SplitThree(Orientation o, EvenOdd e, std::string lt, std::string lb, std::string r);
};
