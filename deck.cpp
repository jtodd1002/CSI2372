#include "deck.h"
#include "animalCard.h"
#include <algorithm>
#include <iostream>
#include <memory>

template<class T>
inline Deck<T>::Deck() {
}

template<class T>
inline Deck<T>::Deck(std::shared_ptr<T>* newDeck) {
	(this->deck) = newDeck;
	top = 50;
}

template<class T>
inline std::shared_ptr<T> Deck<T>::draw() {
	if (top >= 0) {
		std::shared_ptr<T> temp = (this->deck)[top];
		top--;
		return temp;
	}
	else {
		std::cout << "Deck is empty" << std::endl;
	}
}

template<class T>
void Deck<T>::shuffleDeck() {
	typename std::iterator_traits<std::shared_ptr<AnimalCard>>::difference_type i, n;
	n = 51;
	for (i = n - 1; i >= 0; --i) {
		using std::swap;
		swap((this->deck)[i], (this->deck)[std::rand() % (i + 1)]);
	}
}

template<class T>
void Deck<T>::printCard(int i){
	(this->deck)[i].printRow(EvenOdd::DEFAULT);
}
