#include "splitThree.h"

SplitThree::SplitThree() : AnimalCard() {
	this->animalValueTL = "";
	this->animalValueTR = "";
	this->animalValueBL = "";
	this->animalValueBR = "";
}

SplitThree::SplitThree(Orientation d_orientation, EvenOdd d_evenOdd, std::string d_animalValueTL, std::string d_animalValueTR, std::string d_animalValueB) : AnimalCard(d_orientation, d_evenOdd) {
	this->animalValueTL = d_animalValueTL;
	this->animalValueTR = d_animalValueTR;
	this->animalValueBL = d_animalValueB;
	this->animalValueBR = d_animalValueB;
}
