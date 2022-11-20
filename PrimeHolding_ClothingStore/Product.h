#ifndef _product_h_
#define _product_h_
#include <string>
#include <iostream>
#include "Time.h"
using namespace std;

class Product {
	friend class Cashier;
public:
	Product(string name, string brand, double price, string color);
	friend bool operator==(const Product& p1, const Product& p2);//operator that compares two products
protected:
	void print(Time& time,double cartDiscount) const;//used to print products(called by cashier)
	string name;
	string brand;
	double price;
	string color;
	virtual double getDiscount(Time& time) const = 0;//returns a specified discount for each product type
	virtual string getSize() const=0;
};

#endif