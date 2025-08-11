#ifndef MERCHANT_HPP
#define MERCHANT_HPP

#include <vector>

// Class template: A class with some placeholders in its definition. Those
// placeholders can even be names of types.

template<typename T>
class merchant {
private:
	std::vector<T> stock;
public:
	void buy(const T& item);
	void sell(int index) {
		this->stock.erase(this->stock.begin() + index);

		// Increase the merchant's money
	}
	// void print();
};

template<typename T>
void merchant<T>::buy(const T& item) {
	this->stock.push_back(item);

	// Decrease the merchant's money
}

#endif
