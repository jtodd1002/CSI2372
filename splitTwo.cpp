#include "splitTwo.h"

SplitTwo::SplitTwo() : AnimalCard() {
	this->animalValueTL = "";
	this->animalValueTR = "";
	this->animalValueBL = "";
	this->animalValueBR = "";
}

SplitTwo::SplitTwo(Orientation d_orientation, EvenOdd d_evenOdd, std::string d_animalValueT, std::string d_animalValueB) : AnimalCard(d_orientation, d_evenOdd) {
	this->animalValueTL = d_animalValueT;
	this->animalValueTR = d_animalValueT;
	this->animalValueBL = d_animalValueB;
	this->animalValueBR = d_animalValueB;
}
