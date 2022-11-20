#include "Product.h"
#include <iostream>
#include <iomanip>
Product::Product(string name, string brand, double price, string color)
{
	this->name = name;
	this->brand = brand;
	this->price = price;
	this->color = color;
}

void Product::print(Time& time,double discount) const
{
	cout << name << " - " << brand << endl;
	cout << "$" << price << endl;
	double saved = discount * this->price;
	saved = ceil(saved * 100) / 100;//rounding up to two decimals
	cout << "#discount " << int(discount * 100) << "% -$" << fixed << setprecision(2)<< saved;
}

double Product::getDiscount(Time& time) const
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


bool operator==(const Product& p1, const Product& p2)
{
	return p1.brand == p2.brand && p1.name == p2.name && p1.color == p2.color && p1.price == p2.price;
	return false;
}
