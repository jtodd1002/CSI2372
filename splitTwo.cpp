#include "splitTwo.h"

SplitTwo::SplitTwo() : AnimalCard() {
	this->animalValueT = "";
	this->animalValueB = "";
}

SplitTwo::SplitTwo(Orientation d_orientation, EvenOdd d_evenOdd, std::string d_animalValueT, std::string d_animalValueB) : AnimalCard(d_orientation, d_evenOdd) {
	this->animalValueT = d_animalValueT;
	this->animalValueB = d_animalValueB;
}

void SplitTwo::printRow(EvenOdd row) {
	if (this->getOrientation() == Orientation::UP) {
		if (row == EvenOdd::EVEN) {
			std::cout << this->animalValueT << " " << this->animalValueT;
		}
		else if (row == EvenOdd::ODD) {
			std::cout << this->animalValueB << " " << this->animalValueB;
		}
		else {
			if (this->getRow() == EvenOdd::EVEN) {
				std::cout << this->animalValueT << " " << this->animalValueT;
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
			std::cout << this->animalValueT << " " << this->animalValueT;
		}
		else {
			if (this->getRow() == EvenOdd::EVEN) {
				std::cout << this->animalValueB << " " << this->animalValueB;
			}
			else if (this->getRow() == EvenOdd::ODD) {
				std::cout << this->animalValueT << " " << this->animalValueT;
			}
		}
	}
}