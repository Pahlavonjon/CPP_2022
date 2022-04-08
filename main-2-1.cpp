#include <iostream>
#include <string>
#include "cart.h"
#include "meerkat.h"

using namespace std;

int main(){
    cart Meerkat_Cart;
    meerkat M1, M2, M3, M4, M5;
    bool added = true;
    string name1, name2, name3, name4, name5;
    int age1, age2, age3, age4, age5;

    cout <<"\n Enter name 1\n";
    cin >> name1;
    cout <<"\n Enter name 2\n";
    cin >> name2;
    cout <<"\n Enter name 3\n";
    cin >> name3;
    cout <<"\n Enter name 4\n";
    cin >> name4;
    cout <<"\n Enter name 5\n";
    cin >> name5;

    cout <<"\n Enter age 1\n";
    cin >> age1;
    cout <<"\n Enter age 2\n";
    cin >> age2;
    cout <<"\n Enter age 3\n";
    cin >> age3;
    cout <<"\n Enter age 4\n";
    cin >> age4;
    cout <<"\n Enter age 5\n";
    cin >> age5;

    M1.setName(name1);
    M1.setAge(age1);

    M2.setName(name2);
    M2.setAge(age2);

    M3.setName(name3);
    M3.setAge(age3);

    M4.setName(name4);
    M4.setAge(age4);

    M5.setName(name5);
    M5.setAge(age5);

    added = Meerkat_Cart.addMeerkat(M1);
    added = Meerkat_Cart.addMeerkat(M2);
    added = Meerkat_Cart.addMeerkat(M3);
    added = Meerkat_Cart.addMeerkat(M4);
    added = Meerkat_Cart.addMeerkat(M5);

    if (added == false){
        cout <<"\n Cart full cannot add!!!\n\n";
    }

    Meerkat_Cart.printMeerkats();

    Meerkat_Cart.emptyCart();
}