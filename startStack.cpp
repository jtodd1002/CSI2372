#include "startStack.h"

StartStack::StartStack() {
	std::shared_ptr<StartCard> temp(new StartCard());
	(this->start) = temp;
	(this->stack) = std::deque<ActionCard>();
	stackSize = 0;
}

StartStack& StartStack::operator+=(std::shared_ptr<ActionCard> o_actionCard) {
	(this->stack).push_front(*o_actionCard);
	stackSize++;
}

StartStack& StartStack::operator-=(std::shared_ptr<ActionCard> o_actionCard) {
	this->stack.push_back(*o_actionCard);
}

std::shared_ptr<StartCard> StartStack::getStartCard() {
	return start;
}

void StartStack::printRow(EvenOdd row) {
	if (stackSize > 0) {
		((this->stack).front()).printRow(row);
	}
	else {
		(this->start)->printRow(row);
	}
}
