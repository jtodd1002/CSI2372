#include "actionCard.h"

class BearAction : public ActionCard {
public:
	BearAction();
	QueryResult query();
	void perform(Table&, Player*, QueryResult);
};