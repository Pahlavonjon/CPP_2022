#include <iostream>
#include <string>
#include "Player.h"
#include "Computer.h"
using namespace std;

        Computer::Computer(){}
        Computer::Computer(string Name) : Player(Name) {Choices = new string[3]; Choices[0] = "rock"; Choices[1] = "paper"; Choices[2] = "scissors"; this->Name = Name;}
        void Computer::Computer_Input(){Computer_input = Choices[rand()%2];}
        string Computer::Get_Computer_Input(){return this->Computer_input;}