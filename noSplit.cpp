#include "noSplit.h"

NoSplit::NoSplit() : AnimalCard() {
	this->animalValueTL = "";
	this->animalValueTR = "";
	this->animalValueBL = "";
	this->animalValueBR = "";
}

NoSplit::NoSplit(Orientation d_orientation, EvenOdd d_evenOdd, std::string d_animalValue) : AnimalCard(d_orientation, d_evenOdd) {
	this->animalValueTL = d_animalValue;
	this->animalValueTR = d_animalValue;
	this->animalValueBL = d_animalValue;
	this->animalValueBR = d_animalValue;
}

void NoSplit::printRow(EvenOdd row) {
	std::cout << animalValueTL << " " << animalValueTR;
}