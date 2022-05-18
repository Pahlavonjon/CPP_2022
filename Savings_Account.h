#ifndef SAVINGS_ACCOUNT_H
#define SAVINGS_ACCOUNT_H
#include <iostream>
#include <string>
#include <iomanip>
#include <ctime>
#include "Client_Account.h"
using namespace std;
class Savings_Account : public Client_Account{
    private:
        string Savings_Account_Name;
        int Savings_Account_Age;
        long long int Savings_Account_ID;// square of the name letters
        string Savings_Account_Type;
        string Savings_Account_Username;
        string Savings_Account_Password; // this pin is need for logging into the account
        long long int Savings_Account_Pin; // this pin is needed for transferring or withdrawing money
        // time_t Savings_Now;
        // char* Savings_Current_Time;
        // char** Savings_Time_History;
        double Savings_Account_Amount_Withdrawn;
        // int Savings_Time_History_Index;
        double Savings_Account_Balance;
        double Savings_Account_Interest_Rate;
        bool Savings_Account_First_Deposit;
        // unsigned long long int Time_to_add_interest;
        // unsigned long long int Time_to_add_interest_copy;
    public:
        Savings_Account();
        Savings_Account(string Username,string Password,long long int Pin);
        // Savings_Account():Set_Account(){}; // WHERE IS THE DESTRUCTOR???    // destructor must use delete[]
        // Savings_Account_Deposit_Money():Client_Account_Deposit_Money(){};
        bool Client_Account_Deposit_Money();
        void Set_Account_Part_Two();
        void Set_Account_Part_Two_Manually(double Savings_Deposit);
        bool Client_Account_Deposit_Money(double Savings_Deposit);
        void Savings_Account_Show_Balance();
        unsigned long long int* Savings_Accout_Return_Time_to_add_interest();
        void Savings_Account_Terms_and_Conditions();
        static void Savings_Account_Add_Interest(double *Savings_Deposit);
        bool Savings_Account_Ready_to_Add_Interest();
        double* Savings_Account_Return_Balance();
        double* Savings_Account_Return_Balance_Address();
        ~Savings_Account();
};
#endif