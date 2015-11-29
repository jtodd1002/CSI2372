#include <memory>

template <class T>
class Deck {
	Deck();
	std::shared_ptr<T> draw();
};