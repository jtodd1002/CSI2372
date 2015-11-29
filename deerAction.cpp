#include "deerAction.h"

DeerAction::DeerAction() {
	this->title = "Deer";
	this->action = "This card allows you to trade goals with another player.";
}

QueryResult DeerAction::query() {
	std::cout << action << std::endl;
	std::cout << "Please select a player to trade goals with:" << std::endl;
	int playerNumber;
	std::cin >> playerNumber;
	QueryResult result = new QueryResult(playerNumber);
	return result;
}

void DeerAction::perform(Table &, Player *, QueryResult) {

}