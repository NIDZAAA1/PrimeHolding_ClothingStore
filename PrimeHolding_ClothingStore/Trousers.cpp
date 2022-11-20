#include "Trousers.h"

int Trousers::sizes[] = { 42, 44, 46, 48, 50, 52, 54, 56, 58, 60, 62, 64, 66 };

Trousers::Trousers(string name, string brand, double price, string color, int size) : Product(name, brand, price, color)
{
	for (int i = 0; i < sizeof(sizes); i++) {
		if (size == sizes[i]) {
			this->size = size;
			return;
		}
	}
	this->size = sizes[0];
}

double Trousers::getDiscount(Time& time) const
{
	switch (time.getWeekDay()) {
	case 0:
		return 0.0;
		break;
	case 1:
		return 0.0;
		break;
	case 2:
		return 0.0;
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

string Trousers::getSize() const
{
	return to_string(this->size);
}
