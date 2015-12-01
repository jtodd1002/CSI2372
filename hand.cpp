#include "hand.h"
#include "noSplit.h"
#include <iostream>

Hand::Hand() {
	this->noCards = 0;
}

Hand & Hand::operator+=(std::shared_ptr<AnimalCard> o_animalCard) {
	(this->hand)[this->noCards] = o_animalCard;
	(this->noCards)++;
	Hand toReturn = *this;
	return toReturn;
}

Hand & Hand::operator-=(std::shared_ptr<AnimalCard> o_animalCard) {
	if ((this->noCards) > 0) {
		(this->hand)[(this->noCards) - 1] = nullptr;
		(this->noCards)--;
		Hand toReturn = *this;
		return toReturn;
	}
	else {
		std::cout << "Hand is empty" << std::endl;
		Hand toReturn = *this;
		return toReturn;
	}
}

std::shared_ptr<AnimalCard> Hand::operator[](int pos) {
	return (this->hand)[pos];
}

int Hand::numCards() {
	return this->noCards;
}



void Hand::print() {
	int i = 1;
	while (i <= (this->noCards)) {
		std::cout << i << "    ";
	}
	std::cout << std::endl;
	int j = 0;
	while (j < (this->noCards)) {
		AnimalCard A = *(this->hand)[j];
		A.printRow(EvenOdd::EVEN);
		std::cout << "  ";
	}
	std::cout << std::endl;
	int k = 0;
	while (k < (this->noCards)) {
		AnimalCard A = *(this->hand)[j];
		A.printRow(EvenOdd::ODD);
		std::cout << "  ";
	}
	std::cout << std::endl;
}
