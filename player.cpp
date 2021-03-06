#include "player.h"

Player::Player() {
    std::shared_ptr<AnimalCard>** array[103];
	int i = 0;
	while (i < 103) {
		std::shared_ptr<AnimalCard>* temp[103];
		array[i] = temp;
	}
	std::shared_ptr<AnimalCard>*** bleh;
	bleh = array;
}

Player::Player(int number, std::string name, std::string secret, Hand hand) {
	this->playerNumber = number;
	this->playerName = name;
	this->secretAnimal = secret;
	this->hand = hand;
}

std::string Player::swapSecretAnimal(std::string & newSecret) {
	std::string temp = this->getSecretAnimal();
	this->secretAnimal = newSecret;
	return temp;
}

std::string Player::getSecretAnimal() {
	return this->secretAnimal;
}

void Player::swapHand(Hand o_hand) {
	this->hand = o_hand;
}

Hand Player::getHand() {
	return this->hand;
}

void Player::print() {
	std::cout << "Player " << this->playerNumber << std::endl;
	std::cout << "Name: " << this->playerName << std::endl;
	std::cout << "Secret Animal: " << this->getSecretAnimal() << std::endl;
	std::cout << "Hand: " << std::endl;
	(this->hand).print();
}
