#ifndef _cashier_h_
#define _cashier_h_
#include "Cart.h"
class Cashier {
public:	
	Cashier(string name);
	void printAReceipt(Cart& cart,Time& time) const;
private:
	string name;
};
#endif