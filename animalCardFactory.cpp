#include "animalCardFactory.h"
#include "noSplit.h"
#include "splitTwo.h"
#include "splitThree.h"
#include "splitFour.h"
#include "joker.h"

AnimalFactory::create()
{
	
	if (count == 0)
	{
		obj = new Singleton();
	}

	return (obj);
	
}
AnimalFactory::AnimalFactory() {  
		
	count = 1; 

}

AnimalFactory::~AnimalFactory()
{
	delete obj; obj = 0; count = 0;
}

AnimalFactory * AnimalFactory::getFactory() {
	//not sure how to return the only instance of animalCardFactory, maybe static function?

	return obj;
}

Deck<std::shared_ptr<AnimalCard>> AnimalFactory::getDeck() {
	std::shared_ptr<AnimalCard>* newDeck[51];
	//admittedly don't know how we'll randomly generate 51 cards with no copies
	return Deck<std::shared_ptr<AnimalCard>>();
}


