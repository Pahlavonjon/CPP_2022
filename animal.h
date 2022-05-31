#ifndef animal_H
#define animal_H
#include <iostream>
#include <string>
using namespace std;

class animal{
    public:
    string name ;              // the animal's name
        int animalID ;             // the animal's unique ID
        int volume ;               // the volume of the animal's body
       
        animal(string n, int v);
        virtual string get_name() = 0;
        void set_name(string new_name);
        int get_animalID();
        int get_volume();
        ~animal();
};
#endif