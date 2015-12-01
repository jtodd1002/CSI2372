#include "hareAction.h"

HareAction::HareAction() {
	this->title = "Hare";
	this->action = "This card allows you to move any card on the table to a different VALID position on the table.";
	this->animalValueTL = "H";
	this->animalValueTR = "H";
	this->animalValueBL = "H";
	this->animalValueBR = "H";
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
	QueryResult result = QueryResult(startRow, startCol, endRow, endCol);
	return result;
}

void HareAction::perform(Table& o_table, Player* action_player, QueryResult o_query) {
	std::shared_ptr<AnimalCard> toMove = o_table.pickAt(o_query.startRow, o_query.startCol);
	o_table.addAt(toMove, o_query.endRow, o_query.endCol);
}