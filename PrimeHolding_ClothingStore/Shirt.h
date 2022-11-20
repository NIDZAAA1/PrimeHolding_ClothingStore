#ifndef _shirt_h_
#define _shirt_h_
#include "Product.h"

class Shirt : public Product {
public:
	static std::string sizes[];
	Shirt(string name, string brand, double price, string color, string size);//if given size is invalid, the smallest size is applied
private:
	string size;
	double getDiscount(Time& time) const override;
	string getSize() const override;
};

#endif