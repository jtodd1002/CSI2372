#pragma once
#include "animalCard.h"
#include <memory>
#include <vector>

class Hand {
	std::shared_ptr<AnimalCard>* hand;
	int noCards;
public:
	Hand();
	Hand& operator+=(std::shared_ptr<AnimalCard>);
	Hand& operator-=(std::shared_ptr<AnimalCard>);
	std::shared_ptr<AnimalCard> operator[](int);
	int numCards();
	void print();
};