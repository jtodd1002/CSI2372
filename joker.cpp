#include "joker.h"

Joker::Joker() : NoSplit() {
	this->jokerValue = "j";
}

void Joker::printRow(EvenOdd row) {
	std::cout << jokerValue << " " << jokerValue;
}