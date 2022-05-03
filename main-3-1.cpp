#include <iostream>
#include <string>
#include "Player.h"
#include "Person.h"
#include "Computer.h"
using namespace std;
int main(){
    int user_score = 0;
    int computer_score = 0;
    int score_to_win = 3;
    Person User("Me");
    Computer The_Computer("Bot");
    string User_input;
    while ((user_score && computer_score) <= score_to_win){
        cout <<"\n\n The scores are: "<<user_score<<" and "<<computer_score<<"\n";
        if (computer_score == score_to_win) {cout <<"\n\n The computer wins! \n\n"; break;}
        if (user_score == score_to_win) {cout <<"\n\n Your win! \n\n"; break;}
        cout <<"\n\n Enter rock paper or scissors: ";
        cin >> User_input;
        User.Player_Input(User_input);
        The_Computer.Computer_Input();
        cout <<"\n The computer chose: "<<The_Computer.Get_Computer_Input()<<"\n\n";
        if (User.Get_User_Input() == "rock" && The_Computer.Get_Computer_Input() == "paper") {computer_score++;}
        else if (User.Get_User_Input() == "paper" && The_Computer.Get_Computer_Input() == "scissors") {computer_score++;}
        else if (User.Get_User_Input() == "scissors" && The_Computer.Get_Computer_Input() == "rock") {computer_score++;}
        else if (User.Get_User_Input() == The_Computer.Get_Computer_Input()) {}
        else {user_score++;}
    }
}