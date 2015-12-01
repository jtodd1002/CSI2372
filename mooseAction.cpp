#include "mooseAction.h"

MooseAction::MooseAction() {
	this->title = "Moose";
	this->action = "This card rotates the goals of all players from 1 to 2, 2 to 3, etc.";
}

QueryResult MooseAction::query() {
	QueryResult result = QueryResult();
	return result;
}

void MooseAction::perform(Table& o_table, Player* action_player, QueryResult o_query) {
	std::string temp[5];
	int i = 0;
	while (i < o_table.numPlayers()) {
		temp[i] = (o_table.getPlayer(i)).getSecretAnimal();
		i++;
	}
	int j = 0;
	while (j < (o_table.numPlayers() - 1)) {
		(o_table.getPlayer(j)).swapSecretAnimal(temp[j + 1]);
		j++;
	}
	(o_table.getPlayer(o_table.numPlayers() - 1)).swapSecretAnimal(temp[0]);
}