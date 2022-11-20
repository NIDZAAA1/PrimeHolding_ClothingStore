#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <ctime>
#include "Shoes.h"
#include "Cart.h"
#include "Shirt.h"
#include "Jackets.h"
#include "Trousers.h"
#include "Cashier.h"
using namespace std;

int main()
{

    Time* time = new Time();
    Cart* cart = new Cart();
    Cashier* cashier = new Cashier("Bob");
    //time->setTimeLocal();
    time->setTime(2020, 2, 2, 12, 34, 56);//preset date/time (year,month,day,hour,minute,second)
    Shirt* shirt1 = new Shirt("Blue Cotton Shirt", "BrandS", 14.99, "blue", "M");
    Shirt* shirt2 = new Shirt("White Cotton Shirt", "BrandS", 15.99, "white", "M");
    Trousers* trousers1 = new Trousers("Black Cotton Trousers", "BrandT", 29.99, "black", 50);
    Shoes* shoes1 = new Shoes("Black Leather Shoes", "BrandS", 59.99, "black", 43);
    Jackets* jacket1 = new Jackets("Black Cotton Suit Jacket", "BrandJ", 99.99, "black", 50);
    cart->addToCart(shirt1);
    cart->addToCart(shirt2);
    cart->addToCart(trousers1);
    cart->addToCart(shoes1);
    cart->addToCart(jacket1);
    cashier->printAReceipt(*cart, *time);

    cout << endl;

    cart->emptyCart();
    time->setTime(2022, 2, 1, 12, 34, 56);
    Shirt* shirt3 = new Shirt("Black Silk Shirt", "BrandS", 29.99, "black", "L");
    Shirt* shirt4 = new Shirt("White Silk Shirt", "BrandS", 29.99, "white", "L");
    cart->addToCart(shirt3);
    cart->addToCart(shirt4);
    cashier->printAReceipt(*cart, *time);

    cout << endl;

    cart->emptyCart();
    time->setTime(2022, 2, 1, 12, 34, 56);
    Trousers* trousers2 = new Trousers("Red Linen Trousers", "BrandT", 49.99, "red", 56);
    Shoes* shoes2 = new Shoes("Red Suede Shoes", "BrandS", 59.99, "red", 44);
    Shoes* shoes3 = new Shoes("Black Suede Shoes", "BrandS", 59.99, "black", 44);
    Jackets* jacket2 = new Jackets("Red Linen Suit Jacket", "BrandJ", 99.99, "red", 56);
    Shirt* shirt5 = new Shirt("White Linen Shirt", "BrandS", 29.99, "white", "L");
    cart->addToCart(trousers2);
    cart->addToCart(shoes2);
    cart->addToCart(shoes3);
    cart->addToCart(jacket2);
    cart->addToCart(shirt5);
    cashier->printAReceipt(*cart, *time);
}
