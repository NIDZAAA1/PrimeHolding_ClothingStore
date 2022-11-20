#ifndef _cart_h_
#define _cart_h_
#include "Product.h"
struct Elem {//an element of a linked list(which is used to store products in a cart)
public:
	Product* product;
	Elem* next;
	Elem(Product* product) {
		this->product = product;
		this->next = nullptr;
	}
};
class Cart {
	friend class Cashier;
public:
	
	Cart();
	Cart(const Cart& c);//copy constructor
	Cart& addToCart(Product* product);//add one product to cart
	Cart& removeFromCart(Product* product);//remove one product from cart
	double cartDiscount()const;//returns the discount that is applied on all items of the cart(if the condition is satisfied)
	Cart& emptyCart();//removes all items from the cart

private:
	Elem* first;
	Elem* last;
	int count;//current number of products in a cart
};

#endif