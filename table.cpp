#include "table.h"

using namespace std;

Table::Table(Player o_players[5], int numPlayers) {
	int i = 0;
	while (i < numPlayers) {
		this->players[i] = o_players[i];
		i++;
		
	}
	/*std::shared_ptr<AnimalCard>** array[103];
	int i = 0;
	while (i < 103) {
		std::shared_ptr<AnimalCard>* temp[103];
		array[i] = temp;
	}
	table = array;*/
	std::fill((this->tracker)[0], (this->tracker)[102] + 103, -1);
	this->stack = StartStack();
	this->noPlayers = numPlayers;
}

int Table::addAt(std::shared_ptr<AnimalCard> o_animalCard, int row, int col) {
	//must check if insertion is valid

	bool neighbours = false;
	int matches = 0;

	if (tracker[row][col]<1) // checks if there is a card at Board[row][col] already/
	{
		neighbours = checkForNeighbour(row, col);
		 if (!neighbours)
		 {
			 //throw exception maybe?
			 cout << "invalid placement " << endl;
			
		 }
		 else
		 {
			 matches = nOfMatches(o_animalCard, row, col);

			 if (matches > 0)
			 {
				 table[row][col] = o_animalCard;
				 tracker[row][col] = 1;
				 return matches;
			 }
			 else
			 {
				 //throw exception
				 cout << "invalid place: no matches" << endl;
			 }
		 }

		 return 0;
	}
	else
	{
		/*throw exeception*/
		cout << "there's already a card at that position" << endl;
		return 0;
	}

}

bool Table::checkForNeighbour(int row, int col)
{
	bool correct;
	switch (row)
	{
	case 0:
		switch (col)
		{
		case 0:
			if (tracker[row + 1][col] > 0 || tracker[row][col + 1]  > 0)
			{
				correct = true;
			}
			break;
		case 102:
			if (tracker[row + 1][col] > 0 || tracker[row][col - 1] > 0)
			{
				correct = true;
			}
			break;
		default:
			if (tracker[row + 1][col] > 0 || tracker[row][col - 1] > 0 || tracker[row][col + 1] > 0)
			{
				correct = true;
			}
			break;
		}
		break;
	case 102:
		switch (col)
		{
		case 0:
			if (tracker[row - 1][col] > 0 || tracker[row][col + 1] > 0)
			{
				correct = true;
			}
			break;
		case 102:
			if (tracker[row - 1][col] > 0 || tracker[row][col - 1] > 0)
			{
				correct = true;
			}
			break;
		default:
			if (tracker[row - 1][col] > 0 || tracker[row][col - 1] > 0 || tracker[row][col + 1] > 0)
			{
				correct = true;
			}
			break;
		}
		break;
	default:
		switch (col)
		{
		case 0:
			if (tracker[row - 1][col] > 0 || tracker[row + 1][col] > 0 || tracker[row][col + 1] > 0)
			{
				correct = true;
			}
			break;
		case 102:
			if (tracker[row - 1][col] > 0 || tracker[row + 1][col] > 0 || tracker[row][col - 1] > 0)
			{
				correct = true;
			}
			break;
		default:
			if (tracker[row - 1][col] > 0 || tracker[row + 1][col] > 0 || tracker[row][col - 1] > 0 || tracker[row][col + 1] > 0)
			{
				correct = true;
			}
			break;
	
			}
		}
	return correct;
}

int Table::nOfMatches(std::shared_ptr<AnimalCard> card, int row, int col)
{
	int m = 0;
	if (row - 1 >= 0 && tracker[row - 1][col] == 1) {
		if ((row - 1 == 52 && col == 52) || (row == 52 && col-1 == 52)||table[row - 1][col]->getBL() == card->getTL() || table[row][col-1]->getTR() == card->getTL())
			m++;
	}
	if (col - 1 >= 0 && tracker[row][col - 1] == 1) {
		if ((row == 52 && col - 1 == 52) || (row + 1 == 52 && col == 52) || table[row][col - 1]->getBR() == card->getBL() || table[row+1][col]->getTL() == card->getBL())
			m++;
	}
	if (col + 1 < 103 && tracker[row][col + 1] == 1) {
		if ((row == 52 && col + 1 == 52) || (row - 1 ==52 && col == 52 )|| table[row][col + 1]->getTL() == card->getTR() || table[row - 1][col]->getBR() == card->getTR())
			m++;
	}
	if (row + 1 < 103 && tracker[row + 1][col] == 1) {
		if ((row + 1 == 52 && col == 52) || (row==52 && col +1 ==52)|| table[row + 1][col]->getTR() == card->getBR() || table[row][col+1]->getBL() == card->getBR())
			m++;
	}
	return m;
}
	

Table & Table::operator+=(std::shared_ptr<ActionCard> o_actionCard) {
	(this->stack).operator+=(o_actionCard);
}

Table & Table::operator-=(std::shared_ptr<ActionCard> o_actionCard) {
	(this->stack).operator-=(o_actionCard);
}

std::shared_ptr<AnimalCard> Table::pickAt(int row, int col) {
	shared_ptr<AnimalCard> temp = (this->table)[row][col];
	(this->table)[row][col] = nullptr;
	(this->tracker)[row][col] = -1;
	return temp;
}

Player Table::getPlayer(int playerNumber) {
	return (this->players)[playerNumber];
}

int Table::numPlayers() {
	return this->noPlayers;
}

bool Table::win(std::string & animal) {
	//will need to check if at least 12 cards of this animal exist on the game board
}
