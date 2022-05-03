#ifndef PERSON_H
#define PERSON_H
#include <iostream>
#include <string>
#include "Player.h"
using namespace std;
class Person : public Player{
    public:
        Person();
        Person(string Name);
        void Person_Input(string input);
        string Get_User_Input();

};
#endif