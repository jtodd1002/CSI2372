#include "splitFour.h"

SplitFour::SplitFour() : AnimalCard() {
	this->animalValueLT = "";
	this->animalValueLB = "";
	this->animalValueRT = "";
	this->animalValueRB = "";
}

SplitFour::SplitFour(Orientation d_orientation, EvenOdd d_evenOdd, std::string d_animalValueLT, std::string d_animalValueLB, std::string d_animalValueRT, std::string d_animalValueRB) : AnimalCard(d_orientation, d_evenOdd) {
	this->animalValueLT = d_animalValueLT;
	this->animalValueLB = d_animalValueLB;
	this->animalValueRT = d_animalValueRT;
	this->animalValueRB = d_animalValueRB;
}

void SplitFour::print() {

}