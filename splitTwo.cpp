#include "splitTwo.h"

SplitTwo::SplitTwo() : AnimalCard() {
	this->animalValueL = "";
	this->animalValueR = "";
}

SplitTwo::SplitTwo(Orientation d_orientation, EvenOdd d_evenOdd, std::string d_animalValueL, std::string d_animalValueR) : AnimalCard(d_orientation, d_evenOdd) {
	this->animalValueL = d_animalValueL;
	this->animalValueR = d_animalValueR;
}

void SplitTwo::print() {

}