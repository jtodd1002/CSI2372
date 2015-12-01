#pragma once
#include "animalCard.h"

class NoSplit : public AnimalCard {
public:
	NoSplit();
	NoSplit(Orientation o, EvenOdd e, std::string);
	void printRow(EvenOdd);
};
