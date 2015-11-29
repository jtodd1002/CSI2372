#include "hand.h"
#include "noSplit.h"

Hand::Hand() {
	std::vector<AnimalCard> A;
	this->hand = A;
	const AnimalCard B = AnimalCard();
	std::vector<AnimalCard>::iterator iterator = (this->hand).begin();
	(this->hand).insert(iterator, 3, B);
}

Hand & Hand::operator+=(std::shared_ptr<AnimalCard> o_animalCard) {
	const AnimalCard A = *o_animalCard;
	int i = 0;
	AnimalCard B = AnimalCard();
	while (!(((this->hand).at(i)).compare(B))) {
		i++;
	}
	std::vector<AnimalCard>::iterator iter = (this->hand).begin();
	(this->hand).insert(iter + i, A);
}

Hand & Hand::operator-=(std::shared_ptr<AnimalCard> o_animalCard) {
	const AnimalCard A = *o_animalCard;
	int i = 0;
	while (!(((this->hand).at(i)).compare(A))) {
		i++;
	}
	std::vector<AnimalCard>::iterator iter = (this->hand).begin();
	AnimalCard toReturn = (this->hand).at(i);
	(this->hand).erase(iter + i);
}

std::shared_ptr<AnimalCard> Hand::operator[](int pos) {
	//no idea how to create a shared_ptr that holds the AnimalCard in question
}

int Hand::noCards() {
	return this->hand.size();
}

void Hand::print() {
	int i = 1;
	while (i <= (this->hand).size()) {
		std::cout << i << "    ";
	}
	std::cout << std::endl;
	int j = 0;
	while (j < (this->hand).size()) {
		(this->hand).at(j).printRow(EvenOdd::EVEN);
		std::cout << "  ";
	}
	std::cout << std::endl;
	int k = 0;
	while (k < (this->hand).size()) {
		(this->hand).at(k).printRow(EvenOdd::ODD);
		std::cout << "  ";
	}
	std::cout << std::endl;
}
