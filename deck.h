#include <memory>

template <class T>
class Deck {
	std::shared_ptr<T>* deck[51];
	int top;
public:
	Deck<T>();
	Deck<T>(std::shared_ptr<T>*);
	std::shared_ptr<T> draw();
	void shuffleDeck();
};
