#include "animalCard.h"
#include "actionCard.h"
#include <memory>

class StartStack : public AnimalCard {
public:
	StartStack();
	StartStack& operator+=(std::shared_ptr<ActionCard>);
	StartStack& operator-=(std::shared_ptr<ActionCard>);
	std::shared_ptr<StartCard> getStartCard();
};
