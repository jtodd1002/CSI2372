#include "animalCardFactory.h"
#include "deck.h"

int main() {
	AnimalFactory* af = AnimalFactory::create();
	Deck<AnimalCard> deck = af->getDeck();
	deck.printCard(0);
	deck.printCard(5);
	deck.printCard(30);
	deck.shuffleDeck();
	deck.printCard(0);
	deck.printCard(5);
	deck.printCard(30);
	return 0;
}