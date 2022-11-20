#ifndef _trousers_h_
#define _trousers_h_
#include "Product.h"
class Trousers : public Product {
public:
	static int sizes[];
	Trousers(string name, string brand, double price, string color, int size);//if given size is invalid, the smallest size is applied
private:
	int size;
	double getDiscount(Time& time) const override;
	string getSize() const override;
};

#endif