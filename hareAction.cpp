#include "hareAction.h"

HareAction::HareAction() {
	this->title = "Hare";
	this->action = "This card allows you to move any card on the table to a different VALID position on the table.";
}

QueryResult HareAction::query() {
	std::cout << action << std::endl;
	std::cout << "Please select a card to move:" << std::endl;
	int startRow;
	int startCol;
	std::cin >> startRow;
	std::cin >> startCol;
	std::cout << "Please select a new position for the card:" << std::endl;
	int endRow;
	int endCol;
	std::cin >> endRow;
	std::cin >> endCol;
	QueryResult result = new QueryResult(startRow, startCol, endRow, endCol);
	return result;
}

void HareAction::perform(Table &, Player *, QueryResult) {

}