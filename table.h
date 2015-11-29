#include "animalCard.h"
#include "actionCard.h"
#include "startStack.h"
#include <memory>
#include <string>

class Table {
	std::shared_ptr<AnimalCard>*** table;
	StartStack stack;
public:
	Table();
	int addAt(std::shared_ptr<AnimalCard>, int row, int col);
	Table& operator+=(std::shared_ptr<ActionCard>);
	Table& operator-=(std::shared_ptr<ActionCard>);
	std::shared_ptr<AnimalCard> pickAt(int row, int col);
	bool win(std::string& animal);
};
