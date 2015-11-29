#include <string>
#include <iostream>

enum class Orientation {
	UP, DOWN
};

enum class EvenOdd {
	EVEN, OFF, DEFAULT
};

class AnimalCard {
public:
	Orientation d_orientation;
	EvenOdd d_row;
public:
	AnimalCard();
	AnimalCard(Orientation, EvenOdd);
	AnimalCard(const AnimalCard&);
	virtual void setOrientation(Orientation);
	virtual void setRow(EvenOdd);
	virtual Orientation getOrientation();
	virtual EvenOdd getRow();
	virtual void printRow(EvenOdd);
};