#ifndef CART_H
#define CART_H
#include <string>
#include "meerkat.h"

using namespace std;

class cart{
    private:
        static const int Cart_capacity = 4;
        int Cart_capacity_current;
        int number_objects_in_the_cart;
        meerkat *Cart_Storage;
        int Cart_inc;
    public:
        cart();
        bool addMeerkat(meerkat cat);   // adds a meerkat to the cart, returns false if full
        void emptyCart();               // remove all meerkats from the cart
        void printMeerkats();           // print the name, a space, the age, then a new line
};
#endif