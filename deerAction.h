#include "actionCard.h"

class DeerAction : public ActionCard {
public:
	DeerAction();
	QueryResult query();
	void perform(Table&, Player*, QueryResult);
};
