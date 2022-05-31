#ifndef vegie_H
#define vegie_H
#include <iostream>
#include <string>
#include "animal.h"
using namespace std;
class vegie : public animal{
    private:
        static int nextID ;
    public:
        vegie(string n,int v);      // create a vegie with name n and body volume v
        string favourite_food ;     // the vegie's favourite food, initialise to "grass"
        string get_name();
        void set_name(string new_name);
        string get_favourite_food();
};
#endif
