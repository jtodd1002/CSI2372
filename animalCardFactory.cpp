#include "animalCardFactory.h"
#include "noSplit.h"
#include "splitTwo.h"
#include "splitThree.h"
#include "splitFour.h"
#include "joker.h"

AnimalFactory* AnimalFactory::create() {
	if (count == 0) {
		obj = new AnimalFactory();
	}
	return (obj);
}

AnimalFactory::AnimalFactory() {
	count = 1;
}

AnimalFactory::~AnimalFactory() {
	delete obj; obj = 0; count = 0;
}

AnimalFactory * AnimalFactory::getFactory() {
	return obj;
}

Deck<AnimalCard> AnimalFactory::getDeck()
{
	//create empty Deck
	std::shared_ptr<AnimalCard>* newDeck;
	//fill Deck with Cards
	std::shared_ptr<AnimalCard> j(new Joker());
	newDeck[0] = j;
	std::shared_ptr<AnimalCard> ns1(new NoSplit(Orientation::UP, EvenOdd::EVEN, "b"));
	newDeck[1] = ns1;
	std::shared_ptr<AnimalCard> ns2(new NoSplit(Orientation::UP, EvenOdd::EVEN, "d"));
	newDeck[2] = ns2;
	std::shared_ptr<AnimalCard> ns3(new NoSplit(Orientation::UP, EvenOdd::EVEN, "h"));
	newDeck[3] = ns3;
	std::shared_ptr<AnimalCard> ns4(new NoSplit(Orientation::UP, EvenOdd::EVEN, "m"));
	newDeck[4] = ns4;
	std::shared_ptr<AnimalCard> ns5(new NoSplit(Orientation::UP, EvenOdd::EVEN, "w"));
	newDeck[5] = ns5;
	std::shared_ptr<AnimalCard> stw1(new SplitTwo(Orientation::UP, EvenOdd::EVEN, "w", "m"));
	newDeck[6] = stw1;
	std::shared_ptr<AnimalCard> stw2(new SplitTwo(Orientation::UP, EvenOdd::EVEN, "m", "d"));
	newDeck[7] = stw2;
	std::shared_ptr<AnimalCard> stw3(new SplitTwo(Orientation::UP, EvenOdd::EVEN, "h", "w"));
	newDeck[8] = stw3;
	std::shared_ptr<AnimalCard> stw4(new SplitTwo(Orientation::UP, EvenOdd::EVEN, "d", "h"));
	newDeck[9] = stw4;
	std::shared_ptr<AnimalCard> stw5(new SplitTwo(Orientation::UP, EvenOdd::EVEN, "b", "m"));
	newDeck[10] = stw5;
	std::shared_ptr<AnimalCard> stw6(new SplitTwo(Orientation::UP, EvenOdd::EVEN, "w", "d"));
	newDeck[11] = stw6;
	std::shared_ptr<AnimalCard> stw7(new SplitTwo(Orientation::UP, EvenOdd::EVEN, "m", "h"));
	newDeck[12] = stw7;
	std::shared_ptr<AnimalCard> stw8(new SplitTwo(Orientation::UP, EvenOdd::EVEN, "h", "b"));
	newDeck[13] = stw8;
	std::shared_ptr<AnimalCard> stw9(new SplitTwo(Orientation::UP, EvenOdd::EVEN, "d", "b"));
	newDeck[14] = stw9;
	std::shared_ptr<AnimalCard> stw10(new SplitTwo(Orientation::UP, EvenOdd::EVEN, "b", "w"));
	newDeck[15] = stw10;
	std::shared_ptr<AnimalCard> sth1(new SplitThree(Orientation::UP, EvenOdd::EVEN, "w", "m", "b"));
	newDeck[16] = sth1;
	std::shared_ptr<AnimalCard> sth2(new SplitThree(Orientation::UP, EvenOdd::EVEN, "h", "b", "d"));
	newDeck[17] = sth2;
	std::shared_ptr<AnimalCard> sth3(new SplitThree(Orientation::UP, EvenOdd::EVEN, "m", "d", "h"));
	newDeck[18] = sth3;
	std::shared_ptr<AnimalCard> sth4(new SplitThree(Orientation::UP, EvenOdd::EVEN, "w", "b", "m"));
	newDeck[19] = sth4;
	std::shared_ptr<AnimalCard> sth5(new SplitThree(Orientation::UP, EvenOdd::EVEN, "d", "h", "w"));
	newDeck[20] = sth5;
	std::shared_ptr<AnimalCard> sth6(new SplitThree(Orientation::UP, EvenOdd::EVEN, "d", "w", "b"));
	newDeck[21] = sth6;
	std::shared_ptr<AnimalCard> sth7(new SplitThree(Orientation::UP, EvenOdd::EVEN, "m", "h", "d"));
	newDeck[22] = sth7;
	std::shared_ptr<AnimalCard> sth8(new SplitThree(Orientation::UP, EvenOdd::EVEN, "b", "w", "h"));
	newDeck[23] = sth8;
	std::shared_ptr<AnimalCard> sth9(new SplitThree(Orientation::UP, EvenOdd::EVEN, "h", "w", "m"));
	newDeck[24] = sth9;
	std::shared_ptr<AnimalCard> sth10(new SplitThree(Orientation::UP, EvenOdd::EVEN, "d", "m", "w"));
	newDeck[25] = sth10;
	std::shared_ptr<AnimalCard> sth11(new SplitThree(Orientation::UP, EvenOdd::EVEN, "h", "d", "b"));
	newDeck[26] = sth11;
	std::shared_ptr<AnimalCard> sth12(new SplitThree(Orientation::UP, EvenOdd::EVEN, "b", "m", "d"));
	newDeck[27] = sth12;
	std::shared_ptr<AnimalCard> sth13(new SplitThree(Orientation::UP, EvenOdd::EVEN, "m", "w", "h"));
	newDeck[28] = sth13;
	std::shared_ptr<AnimalCard> sth14(new SplitThree(Orientation::UP, EvenOdd::EVEN, "d", "b", "m"));
	newDeck[29] = sth14;
	std::shared_ptr<AnimalCard> sth15(new SplitThree(Orientation::UP, EvenOdd::EVEN, "b", "h", "w"));
	newDeck[30] = sth15;
	std::shared_ptr<AnimalCard> sth16(new SplitThree(Orientation::UP, EvenOdd::EVEN, "w", "h", "b"));
	newDeck[31] = sth16;
	std::shared_ptr<AnimalCard> sth17(new SplitThree(Orientation::UP, EvenOdd::EVEN, "m", "b", "d"));
	newDeck[32] = sth17;
	std::shared_ptr<AnimalCard> sth18(new SplitThree(Orientation::UP, EvenOdd::EVEN, "w", "d", "h"));
	newDeck[33] = sth18;
	std::shared_ptr<AnimalCard> sth19(new SplitThree(Orientation::UP, EvenOdd::EVEN, "b", "d", "m"));
	newDeck[34] = sth19;
	std::shared_ptr<AnimalCard> sth20(new SplitThree(Orientation::UP, EvenOdd::EVEN, "h", "m", "w"));
	newDeck[35] = sth20;
	std::shared_ptr<AnimalCard> sf1(new SplitFour(Orientation::UP, EvenOdd::EVEN, "b", "d", "w", "m"));
	newDeck[36] = sf1;
	std::shared_ptr<AnimalCard> sf2(new SplitFour(Orientation::UP, EvenOdd::EVEN, "h", "b", "d", "w"));
	newDeck[37] = sf2;
	std::shared_ptr<AnimalCard> sf3(new SplitFour(Orientation::UP, EvenOdd::EVEN, "b", "h", "w", "d"));
	newDeck[38] = sf3;
	std::shared_ptr<AnimalCard> sf4(new SplitFour(Orientation::UP, EvenOdd::EVEN, "w", "b", "h", "m"));
	newDeck[39] = sf4;
	std::shared_ptr<AnimalCard> sf5(new SplitFour(Orientation::UP, EvenOdd::EVEN, "m", "d", "b", "w"));
	newDeck[40] = sf5;
	std::shared_ptr<AnimalCard> sf6(new SplitFour(Orientation::UP, EvenOdd::EVEN, "d", "m", "w", "h"));
	newDeck[41] = sf6;
	std::shared_ptr<AnimalCard> sf7(new SplitFour(Orientation::UP, EvenOdd::EVEN, "h", "w", "m", "b"));
	newDeck[42] = sf7;
	std::shared_ptr<AnimalCard> sf8(new SplitFour(Orientation::UP, EvenOdd::EVEN, "b", "m", "d", "h"));
	newDeck[43] = sf8;
	std::shared_ptr<AnimalCard> sf9(new SplitFour(Orientation::UP, EvenOdd::EVEN, "d", "b", "m", "h"));
	newDeck[44] = sf9;
	std::shared_ptr<AnimalCard> sf10(new SplitFour(Orientation::UP, EvenOdd::EVEN, "m", "w", "h", "d"));
	newDeck[45] = sf10;
	std::shared_ptr<AnimalCard> sf11(new SplitFour(Orientation::UP, EvenOdd::EVEN, "d", "w", "b", "m"));
	newDeck[46] = sf11;
	std::shared_ptr<AnimalCard> sf12(new SplitFour(Orientation::UP, EvenOdd::EVEN, "w", "h", "b", "d"));
	newDeck[47] = sf12;
	std::shared_ptr<AnimalCard> sf13(new SplitFour(Orientation::UP, EvenOdd::EVEN, "m", "h", "w", "b"));
	newDeck[48] = sf13;
	std::shared_ptr<AnimalCard> sf14(new SplitFour(Orientation::UP, EvenOdd::EVEN, "h", "m", "d", "b"));
	newDeck[49] = sf14;
	std::shared_ptr<AnimalCard> sf15(new SplitFour(Orientation::UP, EvenOdd::EVEN, "b", "w", "d", "m"));
	newDeck[50] = sf15;

	Deck<AnimalCard> deck;
	deck = Deck<AnimalCard>(newDeck);

	return deck;
}
