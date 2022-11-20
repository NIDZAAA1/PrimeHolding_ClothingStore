#ifndef _shoes_h_
#define _shoes_h_
#include "Product.h"
using namespace std;

class Shoes : public Product {
public:
	static int sizes[];
	Shoes(string name, string brand, double price, string color, int size);//if given size is invalid, the smallest size is applied
private:
	int size;
	double getDiscount(Time& time)const override;
	string getSize() const override;
};


#endif