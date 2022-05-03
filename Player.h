#ifndef PLAYER_H
#define PLAYER_H
#include <iostream>
#include <string>
using namespace std;
class Player{
    public:
        string Name;
        string Player_input;
        Player();
        Player(string Name);
        void Player_Input(string input);
        string Get_Player_Input();
        string Get_Player_Name();
};
#endif