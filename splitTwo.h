#pragma once
#include "animalCard.h"

class SplitTwo : public AnimalCard {
public:
	SplitTwo();
	SplitTwo(Orientation o, EvenOdd e, std::string l, std::string r);
};
