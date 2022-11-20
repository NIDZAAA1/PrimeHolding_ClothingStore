#include "Cashier.h"
#include <iomanip>

Cashier::Cashier(string name)
{
	this->name = name;
}

void Cashier::printAReceipt(Cart& cart, Time& time)const
{
	time.printTime();
	cout << "---Products---" << '\n'<< endl;
	Elem* temp = cart.first;
	double cartDiscount = cart.cartDiscount();
	double subtotal = 0;//total without discount
	double discount = 0;//discount
	while (temp) {//iterate through list of products
		subtotal += temp->product->price;
		double discountPercentage = (temp->product->getDiscount(time) > cartDiscount) ? temp->product->getDiscount(time) : cartDiscount;//the higher discount is applied
		discount += ceil(temp->product->price * discountPercentage*100)/100;
		temp->product->print(time,discountPercentage);
		if (temp->next != nullptr)cout << endl;
		cout << endl;
		temp = temp->next;
	}
	cout << "-------------------------" << endl;
	cout << "SUBTOTAL: $" << subtotal << endl;
	cout << "DISCOUNT: -$" <<discount << endl;
	cout << "TOTAL: $" << subtotal-discount << endl;
}
