#include "startCard.h"

StartCard::StartCard() : NoSplit() {
	this->startValue = "s";
}

void StartCard::printRow(EvenOdd row) {
	std::cout << startValue << " " << startValue;
}