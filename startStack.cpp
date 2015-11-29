#include "startStack.h"

StartStack::StartStack() {
	this->start = new StartCard();
	this->stack = new std::deque<ActionCard>();
}

StartStack& StartStack::operator+=(std::shared_ptr<ActionCard> o_actionCard) {
	this->stack.push_front(o_actionCard);
	//will determine future behaviour based on title of animalCard
}

StartStack& StartStack::operator-=(std::shared_ptr<ActionCard> o_actionCard) {
	this->stack.push_back(o_actionCard);
}

std::shared_ptr<StartCard> StartStack::getStartCard() {
	std::shared_ptr<StartCard> startPtr = this->start;
	return startPtr;
}