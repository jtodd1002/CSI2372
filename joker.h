#pragma once
#include "noSplit.h"

class Joker : public NoSplit {
	std::string jokerValue;
public:
	Joker();
	void printRow(EvenOdd);
};
