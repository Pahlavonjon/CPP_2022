#include <iostream>
#include <string>
#include "cart.h"
#include "meerkat.h"

using namespace std;

    cart::cart(){
        Cart_capacity_current = 4;
        number_objects_in_the_cart = 0;
        Cart_inc = 0;
        Cart_Storage = new meerkat[Cart_capacity];
    };

    bool cart::addMeerkat(meerkat cat){

        if (Cart_capacity_current != 0){
            Cart_Storage[Cart_inc] = cat;
            Cart_inc++;
            number_objects_in_the_cart++;
            Cart_capacity_current--;
            return true;
        }
        return false;

        // string Cart_Meerkat_name;
        // int Cart_Meerkat_age;
        // if (Cart_Storage[Cart_inc].getName() == "" && Cart_Storage[Cart_inc].getAge() == 0){
        //     Cart_Storage[Cart_inc] = cat;
        //     // cin >> Cart_Meerkat_name;
        //     // cin >> Cart_Meerkat_age;
        //     // Cart_Storage[Cart_inc].setName(Cart_Meerkat_name);
        //     // Cart_Storage[Cart_inc].setAge(Cart_Meerkat_age);
        //     Cart_inc++;
        //     number_objects_in_the_cart++;
        //     return true;
        // }

    }   // adds a meerkat to the cart, returns false if full
    void cart::emptyCart(){
        for (int k = 0; k < number_objects_in_the_cart; k++){
            Cart_Storage[k].setName("");
            Cart_Storage[k].setAge(0);
        }
        // delete[] Cart_Storage
    }               // remove all meerkats from the cart
    void cart::printMeerkats(){
        for (int k = 0; k < Cart_capacity; k++){
            cout <<Cart_Storage[k].getName()<<" "<<Cart_Storage[k].getAge()<<"\n";
        }
    }           // print the name, a space, the age, then a new line
 // print the name, a space, the age, then a new line
                                // for each meerkat in the order they were added