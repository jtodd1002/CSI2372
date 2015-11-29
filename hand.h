#include "animalCard.h"
#include <memory>
#include <vector>

class Hand {
	std::vector<AnimalCard> hand;
public:
	Hand();
	Hand& operator+=(std::shared_ptr<AnimalCard>);
	Hand& operator-=(std::shared_ptr<AnimalCard>);
	std::shared_ptr<AnimalCard> operator[](int);
	int noCards();
	void print();
};