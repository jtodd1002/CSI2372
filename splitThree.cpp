#include "splitThree.h"

SplitThree::SplitThree() : AnimalCard() {
	this->animalValueTL = "";
	this->animalValueTR = "";
	this->animalValueB = "";
}

SplitThree::SplitThree(Orientation d_orientation, EvenOdd d_evenOdd, std::string d_animalValueTL, std::string d_animalValueTR, std::string d_animalValueB) : AnimalCard(d_orientation, d_evenOdd) {
	this->animalValueTL = d_animalValueTL;
	this->animalValueTR = d_animalValueTR;
	this->animalValueB = d_animalValueB;
}

void SplitThree::printRow(EvenOdd row) {
	if (this->getOrientation() == Orientation::UP) {
		if (row == EvenOdd::EVEN) {
			std::cout << this->animalValueTL << " " << this->animalValueTR;
		}
		else if (row == EvenOdd::ODD) {
			std::cout << this->animalValueB << " " << this->animalValueB;
		}
		else {
			if (this->getRow() == EvenOdd::EVEN) {
				std::cout << this->animalValueTL << " " << this->animalValueTR;
			}
			else if (this->getRow() == EvenOdd::ODD) {
				std::cout << this->animalValueB << " " << this->animalValueB;
			}
		}
	}
	else {
		if (row == EvenOdd::EVEN) {
			std::cout << this->animalValueB << " " << this->animalValueB;
		}
		else if (row == EvenOdd::ODD) {
			std::cout << this->animalValueTL << " " << this->animalValueTR;
		}
		else {
			if (this->getRow() == EvenOdd::EVEN) {
				std::cout << this->animalValueB << " " << this->animalValueB;
			}
			else if (this->getRow() == EvenOdd::ODD) {
				std::cout << this->animalValueTL << " " << this->animalValueTR;
			}
		}
	}
}