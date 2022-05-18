#ifndef CLIENT_ACCOUNT_H
#define CLIENT_ACCOUNT_H
#include <iostream>
#include <string>
#include <iomanip>
#include <ctime>
//  #include "Client.h"
// #include "Bank.h"
// #include "Country.h"
// #include "Planet.h"
// #include "ATM.h"
using namespace std;
class Client_Account{
    private:
        string Client_Account_Name;
        int Client_Account_Age;
        long long int Client_Account_ID;// square of the name letters
        string Client_Account_Type;
        string Client_Account_Username;
        string Client_Account_Password; // this pin is need for logging into the account
        long long int Client_Account_Pin; // this pin is needed for transferring or withdrawing money
        // time_t Now;
        // char* Current_Time;
        // char** Time_History;
        double Client_Account_Amount_Withdrawn;
        // int Time_History_Index;
        double Client_Account_Balance; // what if the user forgetts password?  might need the user to verify phone number and then renew password. 
    public: 
        Client_Account();
        void Set_Account();
        // char* Get_Current_Time();
        bool Set_Current_Time();
        void Clear_Terminal();
        Client_Account(string Username,string Password,long long int Pin); // is only used for withdrawing
        char* Get_That_Time(int That_Transaction);
        bool Client_Account_Deposit_Money(double ATM_Deposit);
        bool Client_Account_Withdraw_Money();
        void Client_Account_Withdraw_Money_Directly(double money_to_be_withdrawed);
        void Client_Account_Print_Withdrawal(double Money_Withdrawed);
        void Show_Client_Homepage();
        // bool Client_Account_Log_In(Client* The_User);
        bool Client_Account_Log_Out();
        // bool Client_Account_Enter_Pin();
        // // void Client_Account_Money_Transfer(double Money_Being_Transferred, Country *Recepient_Destination, Country *Sender_Destination, Client_Account *Recipient_Account, Client_Account *Sender_Account);
        // void Client_Account_Print_Transaction(double Money_Being_Transferred, string Username, Client_Account *Account, Client_Account *Receiver);
        string Return_Client_Account_Type();
        string Return_Client_Account_Username();
        string Return_Client_Account_Password();
        int Return_Client_Account_Pin();
        double Return_Client_Account_Amount_Withrawn();
        Client_Account* Return_Client_Account_Address();
        ~Client_Account();
};
#endif