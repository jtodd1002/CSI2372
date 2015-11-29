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

EvenOdd AnimalCard::getRow() {
	return this->d_row;
}

void AnimalCard::printRow(EvenOdd row) {

}