#include "startCard.h"
#include "queryResult.h"
#include "table.h"
#include "player.h"
#include <string>

class ActionCard : public StartCard {
public:
	std::string action;
	virtual QueryResult query() = 0;
	virtual void perform(Table&, Player*, QueryResult) = 0;
};
