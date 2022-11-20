#include "Cart.h"

Cart::Cart()
{
    first = nullptr;
    last = nullptr;
    count = 0;
}

Cart::Cart(const Cart& c)//copy constructor
{
    this->count = c.count;
    this->first = nullptr;
    Elem* temp = c.first;
    Elem* newProduct = nullptr;
    while (temp) {
        newProduct = new Elem(temp->product);
        this->last = (!first ? first : last->next) = newProduct;
        temp = temp->next;
    }
}

Cart& Cart::addToCart(Product* product)
{
    last = (!first ? first : last->next )= new Elem(product);
    count += 1;
    return *this;
}

Cart& Cart::removeFromCart(Product* product)
{
    Elem* temp = first;
    if ((*temp->product)==*product) {
        first = first->next;
        count -= 1;
        return *this;
    }
    while (temp->next) {
        if (*(temp->next->product) == *product) {
            Elem* old = temp->next;
            temp->next = temp->next->next;
            delete old;
            if (temp->next == nullptr)last = temp;
            count -= 1;
            return *this;
        }
        temp = temp->next;
    }
    return *this;
}

double Cart::cartDiscount() const
{

    if (count > 3)return 0.2;
    return 0;
}

Cart& Cart::emptyCart()
{
    while (first) {
        Elem* old = first;
        first = first->next;
        delete old;
    }
    first = last = nullptr;
    count = 0;
    return *this;
}
