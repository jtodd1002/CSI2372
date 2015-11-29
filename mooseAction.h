#include "actionCard.h"

class MooseAction : public ActionCard {
public:
	MooseAction();
	QueryResult query();
	void perform(Table&, Player*, QueryResult);
};
