#include "animalCard.h"
#include "deck.h"

class AnimalFactory {
public:
	AnimalFactory();
	static AnimalFactory* getFactory();
	Deck<std::shared_ptr<AnimalCard>> getDeck();
};