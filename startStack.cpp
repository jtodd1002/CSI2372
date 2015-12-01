#include "startStack.h"

StartStack::StartStack() {
	std::shared_ptr<StartCard> temp(new StartCard());
	(this->start) = temp;
	(this->stack) = std::deque<ActionCard>();
}

StartStack& StartStack::operator+=(std::shared_ptr<ActionCard> o_actionCard) {
	(this->stack).push_front(*o_actionCard);
	//will determine future behaviour based on title of animalCard
}

StartStack& StartStack::operator-=(std::shared_ptr<ActionCard> o_actionCard) {
	this->stack.push_back(*o_actionCard);
}

std::shared_ptr<StartCard> StartStack::getStartCard() {
	return start;
}