#include "animalCard.h"
#include "deck.h"

class AnimalFactory {
	static int count;
	static AnimalFactory *obj;
public:
	static AnimalFactory* create()
	static AnimalFactory* getFactory();
	Deck<std::shared_ptr<AnimalCard>> getDeck();
private:
	AnimalFactory();
	~AnimalFactory();
	
};