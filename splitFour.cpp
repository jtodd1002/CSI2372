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

void SplitFour::printRow(EvenOdd row) {
	if (this->getOrientation() == Orientation::UP) {
		if (row == EvenOdd::EVEN) {
			std::cout << this->animalValueTL << " " << this->animalValueTR;
		}
		else if (row == EvenOdd::ODD) {
			std::cout << this->animalValueBL << " " << this->animalValueBR;
		}
		else {
			if (this->getRow() == EvenOdd::EVEN) {
				std::cout << this->animalValueTL << " " << this->animalValueTR;
			}
			else if (this->getRow() == EvenOdd::ODD) {
				std::cout << this->animalValueBL << " " << this->animalValueBR;
			}
		}
	}
	else {
		if (row == EvenOdd::EVEN) {
			std::cout << this->animalValueBL << " " << this->animalValueBR;
		}
		else if (row == EvenOdd::ODD) {
			std::cout << this->animalValueTL << " " << this->animalValueTR;
		}
		else {
			if (this->getRow() == EvenOdd::EVEN) {
				std::cout << this->animalValueBL << " " << this->animalValueBR;
			}
			else if (this->getRow() == EvenOdd::ODD) {
				std::cout << this->animalValueTL << " " << this->animalValueTR;
			}
		}
	}
}