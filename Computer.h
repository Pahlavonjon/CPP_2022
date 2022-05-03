#ifndef COMPUTER_H
#define COMPUTER_H
#include <iostream>
#include <string>
#include "Computer.h"
using namespace std;
class Computer : public Player{
    private:
        string Name;
        string Computer_input;
        string* Choices;
    public:
        Computer();
        Computer(string Name);
        void Computer_Input();
        string Get_Computer_Input();
};
#endif