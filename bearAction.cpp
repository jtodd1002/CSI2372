#include "bearAction.h"

BearAction::BearAction() {
	this->title = "Bear";
	this->action = "This card allows you to switch hands with another player.";
}

QueryResult BearAction::query() {
	std::cout << action << std::endl;
	std::cout << "Please select a player to switch hands with:" << std::endl;
	int playerNumber;
	std::cin >> playerNumber;
	QueryResult result = new QueryResult(playerNumber);
	return result;
}

void BearAction::perform(Table &, Player *, QueryResult) {

}
