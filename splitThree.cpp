#include "splitThree.h"

SplitThree::SplitThree() : AnimalCard() {
	this->animalValueLT = "";
	this->animalValueLB = "";
	this->animalValueR = "";
}

SplitThree::SplitThree(Orientation d_orientation, EvenOdd d_evenOdd, std::string d_animalValueLT, std::string d_animalValueLB, std::string d_animalValueR) : AnimalCard(d_orientation, d_evenOdd) {
	this->animalValueLT = d_animalValueLT;
	this->animalValueLB = d_animalValueLB;
	this->animalValueR = d_animalValueR;
}

void SplitThree::print() {

}