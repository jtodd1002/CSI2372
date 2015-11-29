#include "actionCard.h"

class HareAction : public ActionCard {
public:
	HareAction();
	QueryResult query();
	void perform(Table&, Player*, QueryResult);
};
