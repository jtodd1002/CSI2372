#pragma once
#include "noSplit.h"

class StartCard : public NoSplit {
	std::string startValue;
public:
	StartCard();
	void printRow(EvenOdd);
};

