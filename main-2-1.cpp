#include <iostream>
#include <string>
#include "cart.h"
#include "meerkat.h"

using namespace std;

int main(){
    cart Meerkat_Cart;
    meerkat M1, M2, M3, M4, M5;
    bool added = true;
    M1.setName("Meerkat_1");
    M1.setAge(12);

    M2.setName("Meerkat_2");
    M2.setAge(14);

    M3.setName("Meerkat_3");
    M3.setAge(16);

    M4.setName("Meerkat_4");
    M4.setAge(18);

    M5.setName("Meerkat_5");
    M5.setAge(20);

    while (added == true){
    added = Meerkat_Cart.addMeerkat(M1);
    added = Meerkat_Cart.addMeerkat(M2);
    added = Meerkat_Cart.addMeerkat(M3);
    added = Meerkat_Cart.addMeerkat(M4);
    added = Meerkat_Cart.addMeerkat(M5);
    }
    if (added == false){
        cout <<"\n Cannot ADD!!!\n\n";
    }

    Meerkat_Cart.printMeerkats();

    Meerkat_Cart.emptyCart();
}