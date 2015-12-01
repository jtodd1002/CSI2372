#include "bearAction.h"

BearAction::BearAction() {
	this->title = "Bear";
	this->action = "This card allows you to switch hands with another player.";
	this->animalValueTL = "B";
	this->animalValueTR = "B";
	this->animalValueBL = "B";
	this->animalValueBR = "B";
}

QueryResult BearAction::query() {
	std::cout << action << std::endl;
	std::cout << "Please select a player to switch hands with:" << std::endl;
	int playerNumber;
	std::cin >> playerNumber;
	QueryResult result = QueryResult(playerNumber);
	return result;
}

void BearAction::perform(Table& o_table, Player* action_player, QueryResult o_query) {
	Player target = o_table.getPlayer(o_query.playerNumber);
	Hand temp = target.getHand();
	target.swapHand(action_player->getHand());
	action_player->swapHand(temp);
}
