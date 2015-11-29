#include "actionCard.h"

class WolfAction : public ActionCard {
public:
	WolfAction();
	QueryResult query();
	void perform(Table&, Player*, QueryResult);
};
