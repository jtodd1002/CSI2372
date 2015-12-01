#pragma once
#include "startCard.h"
#include "queryResult.h"
#include "table.h"
#include "player.h"
#include "hand.h"
#include <string>
#include <iostream>

class ActionCard : public StartCard {
public:
	std::string title;
	std::string action;
	virtual QueryResult query() = 0;
	virtual void perform(Table&, Player*, QueryResult) = 0;
};
