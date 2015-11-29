#include "table.h"

Table::Table() {
	std::shared_ptr<AnimalCard>** array[103];
	int i = 0;
	while (i < 103) {
		std::shared_ptr<AnimalCard>* temp[103];
		array[i] = temp;
	}
	(this->table) = array;
	this->stack = StartStack();
}

int Table::addAt(std::shared_ptr<AnimalCard> o_animalCard, int row, int col) {
	//must check if insertion is valid
	(this->table)[row][col] = *o_animalCard;
}

Table & Table::operator+=(std::shared_ptr<ActionCard> o_actionCard) {
	(this->stack).operator+=(o_actionCard);
}

Table & Table::operator-=(std::shared_ptr<ActionCard>) {
	(this->stack).operator-=(o_actionCard);
}

std::shared_ptr<AnimalCard> Table::pickAt(int row, int col) {
	shared_ptr<AnimalCard> temp = (this->table)[row][col];
	(this->table)[row][col] = AnimalCard();
	return temp;
}

bool Table::win(std::string & animal) {
	//will need to check if at least 12 cards of this animal exist on the game board
}
