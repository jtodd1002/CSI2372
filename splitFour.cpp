#include "splitFour.h"

SplitFour::SplitFour() : AnimalCard() {
	this->animalValueTL = "";
	this->animalValueTR = "";
	this->animalValueBL = "";
	this->animalValueBR = "";
}

SplitFour::SplitFour(Orientation d_orientation, EvenOdd d_evenOdd, std::string d_animalValueTL, std::string d_animalValueTR, std::string d_animalValueBL, std::string d_animalValueBR) : AnimalCard(d_orientation, d_evenOdd) {
	this->animalValueTL = d_animalValueTL;
	this->animalValueTR = d_animalValueTR;
	this->animalValueBL = d_animalValueBL;
	this->animalValueBR = d_animalValueBR;
}
