#include "deck.h"
#include <algorithm>

template<class T>
inline Deck<T>::Deck() {
}

template<class T>
inline Deck<T>::Deck(std::shared_ptr<T>* newDeck) {
	(this->deck) = newDeck;
	top = 51;
}

template<class T>
inline std::shared_ptr<T> Deck<T>::draw() {
	return (this->deck).operator-=;
}

template<class T>
void Deck<T>::shuffleDeck() {
	//need to shuffle un-shuffled initialization deck
}
