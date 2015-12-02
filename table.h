#pragma once
#include "animalCard.h"
#include "actionCard.h"
#include "startStack.h"
#include <memory>
#include <string>

class Table {
	std::shared_ptr<AnimalCard> table[103][103];
	int tracker[103][103];
	Player players[5];
	int noPlayers;
	StartStack stack;
public:
	Table(Player o_players[5], int numPlayers);
	int addAt(std::shared_ptr<AnimalCard>, int row, int col);
	bool checkForNeighbour(int row, int col);
	int nOfMatches(std::shared_ptr<AnimalCard>, int row, int col);
	Table& operator+=(std::shared_ptr<ActionCard>);
	Table& operator-=(std::shared_ptr<ActionCard>);
	std::shared_ptr<AnimalCard> pickAt(int row, int col);
	Player getPlayer(int playerNumber);
	int numPlayers();
	bool win(std::string& animal);
};
