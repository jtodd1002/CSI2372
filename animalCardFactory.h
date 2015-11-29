#include "animalCard.h"
#include "deck.h"

class AnimalFactory {
	AnimalFactory();
	static AnimalFactory* getFactory();
	Deck<std::shared_ptr<AnimalCard>> getDeck();
};