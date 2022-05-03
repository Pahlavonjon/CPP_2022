#include <iostream>
#include <string>
#include "Person.h"
#include "Player.h"
using namespace std;

        Person::Person(){}
        Person::Person(string Name){this->Name = Name;}
        void Person::Person_Input(string input){this->Player_input = input;}
        string Person::Get_User_Input(){return this->Player_input;}