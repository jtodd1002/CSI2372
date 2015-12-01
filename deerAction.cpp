#include "deerAction.h"

DeerAction::DeerAction() {
	this->title = "Deer";
	this->action = "This card allows you to trade goals with another player.";
}

QueryResult DeerAction::query() {
	std::cout << action << std::endl;
	std::cout << "Please select a player to trade goals with:" << std::endl;
	int playerNumber;
	std::cin >> playerNumber;
	QueryResult result = QueryResult(playerNumber);
	return result;
}

void DeerAction::perform(Table& o_table, Player* action_player, QueryResult o_query) {
	Player target = o_table.getPlayer(o_query.playerNumber);
	std::string temp = target.getSecretAnimal();
	target.swapSecretAnimal(action_player->getSecretAnimal);
	action_player->swapSecretAnimal(temp);
}