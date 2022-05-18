#ifndef TERM_ACCOUNT_H
#define TERM_ACCOUNT_H
#include <iostream>
#include <string>
#include <chrono>
#include <thread>
#include <ctime>
#include <mutex>
#include "Client_Account.h"
using namespace std;
class Term_Account : public Client_Account{
    private:
        string Term_Account_Name;
        int Term_Account_Age;
        long long int Term_Account_ID;// square of the name letters
        string Term_Account_Type;
        string Term_Account_Username;
        string Term_Account_Password; // this pin is need for logging into the account
        long long int Term_Account_Pin; // this pin is needed for transferring or withdrawing money
        time_t Term_Now;
        char* Term_Current_Time;
        // char** Term_Time_History;
        double Term_Account_Amount_Withdrawn;
        // int Term_Time_History_Index;
        double Term_Account_Balance;
        double Term_Account_Interest_Rate;
        bool Term_Account_Lock;
        int Term_Account_Lock_Length;
        int Term_Account_Time_Until_Unlock;
    public:
        Term_Account();
        void Term_Account_Terms_and_Conditions();
        bool Client_Account_Deposit_Money(double Term_Deposit);
        static void Term_Account_Add_Interest(double *Term_Deposit, bool *Term_Account_Lock, int Term_Account_Lock_Length , int *Time_Left );
        double Term_Account_Return_Balance();
        double* Term_Account_Return_Balance_Address();
        void Term_Account_Show_Balance();
        bool* Term_Account_Return_Account_Lock_Address();
        int Term_Account_Return_Lock_Length();
        int* Term_Account_Return_Time_Until_Unlock_Address();
        void Term_Account_Withdraw_Money();
        // ~Term_Account();

        Term_Account(string Username,string Password,long long int Pin);
        void Set_Account_Part_Two_Manually(double Term_Deposit);
};
#endif