#include "Shirt.h"

string Shirt::sizes[] = { "S","M","L","XL","2XL" };

Shirt::Shirt(string name, string brand, double price, string color, string size) : Product(name, brand, price, color)
{
	for (string i : sizes) {
		if (size == i) { this->size = i; return; }
	}
	this->size = sizes[0];

}

double Shirt::getDiscount(Time& time) const
{
	switch (time.getWeekDay()) {
	case 0:
		return 0.0;
		break;
	case 1:
		return 0.0;
		break;
	case 2:
		return 0.1;
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
}

string Shirt::getSize() const
{
	return this->size;
}

