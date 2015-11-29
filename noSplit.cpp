#include "noSplit.h"

NoSplit::NoSplit() : AnimalCard() {
	this->animalValue = "";
}

NoSplit::NoSplit(Orientation d_orientation, EvenOdd d_evenOdd, std::string d_animalValue) : AnimalCard(d_orientation, d_evenOdd) {
	this->animalValue = d_animalValue;
}

void NoSplit::print() {

}