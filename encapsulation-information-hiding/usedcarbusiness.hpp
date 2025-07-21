#ifndef USED_CAR_BUSINESS_HPP
#define USED_CAR_BUSINESS_HPP

struct car {
	std::string make;
	std::string model;
	double value;
};

// Encapsulation and information-hiding help you curate custom interfaces
// so that you can make them stable. They also let you isolate the scope
// in which constraints can be violated (i.e., mistakes can be made)

class used_car_business {
private:
	car* cars = nullptr;
	int n_cars = 0;
public:
	void buy_car(const car& c) {
		car* new_cars = new car[this->n_cars + 1];
		for (int i = 0; i < this->n_cars; i++) {
			new_cars[i] = this->cars[i];
		}
		delete [] this->cars;
		new_cars[this->n_cars] = c;
		this->cars = new_cars;
		this->n_cars++;
	}
};

int main() {
	used_car_business joes_lot;

	car new_car_that_joe_just_bought;
	new_car_that_joe_just_bought.make = "Ford";
	new_car_that_joe_just_bought.model = "Taurus";
	new_car_that_joe_just_bought.model = 500;
	
	joes_lot.buy_car(new_car_that_joe_just_bought);
}

#endif
