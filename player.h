#include <string>
#include "hand.h"

class Player {
	int playerNumber;
	std::string secretAnimal;
	Hand hand;
public:
	Player();
	Player(int, std::string, Hand);
	std::string swapSecretAnimal(std::string&);
	std::string getSecretAnimal();
	void print();
};
