#include <iostream>
#include <string>
#include "Player.h"
using namespace std;

        Player::Player(){}
        Player::Player(string Name){this->Name = Name;}
        void Player::Player_Input(string input){this->Player_input = input;}
        string Player::Get_Player_Input(){return this->Player_input;}
        string Player::Get_Player_Name(){return this->Name;}
