#include <iostream>
#include <string>
#include <chrono>
#include <thread>
#include <ctime>
#include <mutex>
#include "Client_Account.h"
#include "Term_Account.h"
using namespace std;

    Term_Account::Term_Account(){}
    Term_Account::Term_Account(string Username,string Password,long long int Pin){
        this->Term_Account_Username = Username;
        this->Term_Account_Password = Password;
        this->Term_Account_Pin = Pin;
        // Term_Time_History = new char*[20];
        // Term_Time_History_Index = 0;
        Term_Account_Interest_Rate = 1.05; // %5 interest gain every "refresh rate" rate
        Term_Account_Lock_Length = 80; // 80 will lock the account for 20 seconds
        Term_Account_Time_Until_Unlock = 0;
        // Term_Account_First_Deposit = true;
        Term_Account_Lock = false;
        // thread_stop = false;
        Term_Account_Balance = 0;
        // interst rate
    }
    //  time account must return how many seconds the user must wait in order to unlock the account
    void Term_Account::Set_Account_Part_Two_Manually(double Term_Deposit){
        // Term_Account_Balance += Term_Deposit;
        Term_Account::Client_Account_Deposit_Money(Term_Deposit);
    }
    //  the sleep() from the other thread increments/ticks after the right period of time has passed and would signal the main thread
    //  will share &Time_to_add_interest to the second thread 
    //  the child thread will only increment the original copy of &Time_to_add_interest by 1
    bool Term_Account::Client_Account_Deposit_Money(double Term_Deposit){
        bool Term_Deposit_Status = false;
        if (Term_Deposit < 10000){
            Term_Account_Balance += Term_Deposit; // interest is applied after certain time in the other thread;
            Term_Deposit_Status = true;
            Term_Account_Lock = true;
        }
        return Term_Deposit_Status;
    } 
    void Term_Account::Term_Account_Terms_and_Conditions(){
        string User_Decision;
        cout <<"\n Warning is a Term account.\n";
        cout <<"\n This account will be LOCKED for 12 months.\n\n";
        cout <<" Term account requires the deposition of money > $10,000 immediately upon creation. \n";
        cout <<" Interest is added constanstly over a period of time.\n";
        cout <<" Accept Terms and Conditions   y/n\n";
        cin >> User_Decision;
        while (User_Decision != "y" || User_Decision != "Y" || User_Decision != "yes"){
            cout <<"\n\n Confirm your response . . .\n";
            cin >> User_Decision;
            if (User_Decision != "y" || User_Decision != "Y" || User_Decision != "yes"){
                // ~Term_Account();
                break;
            }
        }
        Term_Account_Lock = true;
    }
    void Term_Account::Term_Account_Show_Balance(){
        this_thread::sleep_for(chrono::milliseconds(250));  // this is the refresh rate
        cout <<"\n\n The Term balance is now $"<<fixed<<setprecision(2)<<this->Term_Account_Balance<<"\n\n";
    }
    double* Term_Account::Term_Account_Return_Balance_Address(){
        return &Term_Account_Balance;
    }
    double Term_Account::Term_Account_Return_Balance(){
        return this->Term_Account_Balance;
    }
    bool* Term_Account::Term_Account_Return_Account_Lock_Address(){
        return &Term_Account_Lock;
    }
    int Term_Account::Term_Account_Return_Lock_Length(){
        return this->Term_Account_Lock_Length;
    }
    int* Term_Account::Term_Account_Return_Time_Until_Unlock_Address(){
        return &Term_Account_Time_Until_Unlock;
    }
    void Term_Account::Term_Account_Add_Interest(double *Term_Deposit, bool *Term_Account_Lock, int Term_Account_Lock_Length , int *Time_Left){ // should it pass an array of pointers and reduce the number of threads required when a new class is created
        bool thread_stop;
        while (thread_stop == false){
            while (thread_stop == false && *Term_Account_Lock == true){ // if account lock is locked then execute the interest and start the term
                for (int k = 1; k < Term_Account_Lock_Length+1; k++){
                    this_thread::sleep_for(chrono::milliseconds(250)); // every 10 seconds in the thread is equal to like a year or a month . . .
                    *Term_Deposit = (*Term_Deposit)*(1.005);
                    *Time_Left = k;
                }
                *Term_Account_Lock = false; // unlocks the Term Account       this changes when user end the term contract
            }
            thread_stop = false;
        }
    }
    void Term_Account::Term_Account_Withdraw_Money(){ //  bool?
        if (Term_Account_Lock == true){
            //cout <<"\n This Account is locked until "<<chrono::steady_clock::now() + chrono::milliseconds((Term_Account_Time_Until_Unlock*250))<<"\n\n";
            cout <<"\n Try again later . . .\n";
        }
        else if (Term_Account_Lock == false){
            double Term_Account_Withdraw = 0;
            cout <<"\n\n Enter amount to withdraw from balance $"<<Term_Account_Return_Balance()<<"\n";
            cin >> Term_Account_Withdraw;
            while ((Term_Account_Return_Balance() - Term_Account_Withdraw) < 0){
                cout << "\n You aint got enough fam . . . ";
                cin >> Term_Account_Withdraw;
            }
            this->Term_Account_Balance -= Term_Account_Withdraw;
            // return true;
        }
    }
    // Term_Account::~Term_Account(){

    // }