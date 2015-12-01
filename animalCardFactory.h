#pragma once
#include "animalCard.h"
#include "deck.h"

class AnimalFactory {
	static int count;
	static AnimalFactory *obj;
public:
	static AnimalFactory* create();
	static AnimalFactory* getFactory();
	Deck<AnimalCard> getDeck();
private:
	AnimalFactory();
	~AnimalFactory();

};