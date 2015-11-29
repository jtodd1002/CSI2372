#include "noSplit.h"

class StartCard : public NoSplit {
	std::string startValue;
public:
	StartCard() : NoSplit() {};
	void printRow(EvenOdd);
};

