#include "noSplit.h"

class Joker : public NoSplit {
	std::string jokerValue;
public:
	Joker() : NoSplit() {};
	void print();
};
