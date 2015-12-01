#pragma once
#include "animalCard.h"
#include "actionCard.h"
#include "startCard.h"
#include <memory>
#include <deque>

class StartStack : public AnimalCard {
	std::deque<ActionCard> stack;
	std::shared_ptr<StartCard> start;
public:
	StartStack();
	StartStack& operator+=(std::shared_ptr<ActionCard>);
	StartStack& operator-=(std::shared_ptr<ActionCard>);
	std::shared_ptr<StartCard> getStartCard();
};
