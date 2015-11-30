#include "animalCard.h"

AnimalCard::AnimalCard() {
	this->d_orientation = Orientation::UP;
	this->d_row = EvenOdd::DEFAULT;
}

AnimalCard::AnimalCard(Orientation orientation, EvenOdd row) {
	this->d_orientation = orientation;
	this->d_row = row;
}

AnimalCard::AnimalCard(const AnimalCard& o_animalCard) {
	this->d_orientation = o_animalCard.d_orientation;
	this->d_row = o_animalCard.d_row;
}

void AnimalCard::setOrientation(Orientation orientation) {
	this->d_orientation = orientation;
}

void AnimalCard::setRow(EvenOdd row) {
	this->d_row = row;
}

Orientation AnimalCard::getOrientation() {
	return this->d_orientation;
}

EvenOdd AnimalCard::getRow() {
	return this->d_row;
}

void AnimalCard::printRow(EvenOdd row) {
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

bool AnimalCard::compare(AnimalCard o_animalCard) {
	if (this->animalValueTL == o_animalCard.animalValueTL) {
		if (this->animalValueTR == o_animalCard.animalValueTR) {
			if (this->animalValueBL == o_animalCard.animalValueBL) {
				if (this->animalValueBR == o_animalCard.animalValueBR) {
					return true;
				}
			}
		}
	}
	return false;
}