#include "wolfAction.h"

WolfAction::WolfAction() {
	this->title = "Wolf";
	this->action = "This card allows you to remove a card from the table and place it in your hand.";
}

QueryResult WolfAction::query() {
	std::cout << action << std::endl;
	std::cout << "Please select a card to take:" << std::endl;
	int row;
	int col;
	std::cin >> row;
	std::cin >> col;
	QueryResult result = QueryResult(row, col);
	return result;
}

void WolfAction::perform(Table &, Player *, QueryResult) {

}