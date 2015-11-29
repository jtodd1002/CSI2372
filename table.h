#include "animalCard.h"
#include "actionCard.h"
#include <memory>
#include <string>

class Table {
	Table();
	int addAt(std::shared_ptr<AnimalCard>, int row, int col);
	Table& operator+=(std::shared_ptr<ActionCard>);
	Table& operator-_(std::shared_ptr<ActionCard>);
	std::shared_ptr<AnimalCard> pickAt(int row, int col);
	bool win(std::string& animal);
};
