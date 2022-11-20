#include "Shoes.h"

int Shoes::sizes[] = { 39, 40, 41, 42, 43, 44, 45, 46 };

Shoes::Shoes(string name, string brand, double price, string color, int size) : Product(name, brand, price, color)
{

	for (int i :sizes) {
		if (size == i) {
			this->size = size;
			return;
		}
	}
	this->size = sizes[0];
}

double Shoes::getDiscount(Time& time) const
{
	switch (time.getWeekDay()) {
	case 0:
		return 0.0;
		break;
	case 1:
		return 0.0;
		break;
	case 2:
		return 0.25;
		break;
	case 3:
		return 0.0;
		break;
	case 4:
		return 0.0;
		break;
	case 5:
		return 0.0;
		break;
	case 6:
		return 0.0;
		break;
	}
	return 0.0;
	return 0;
}

string Shoes::getSize() const
{
	return to_string(this->size);
}
