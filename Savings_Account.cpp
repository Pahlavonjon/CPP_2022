#include <iostream>
#include <string>
#include <chrono>
#include <thread>
#include <mutex>
#include <iomanip>
#include <ctime>
#include "Client_Account.h"
#include "Savings_Account.h"
using namespace std;

    Savings_Account::Savings_Account()/*:Set_Account()*/{ // non fixed interest,
            // needs money in the account to create the savings account
            string temporary_password = "";
            cout << "\n\n Enter account Username: \n ";
            cin >> this->Savings_Account_Username;
            cout << "\n Enter account Password: \n ";
            cin >> this->Savings_Account_Password;
            while (temporary_password != Savings_Account_Password){
                cout << "\n Confirm account password: \n";
                cin >> temporary_password;
            }
            // cout << "the more money you deposit the more interest you will gain";
            // cout << "here are the rates if your balance is above $$$$$$ you will get this much interest"
            // Time_History = new char*[20];
            // Time_History_Index = 0; 
            Savings_Account_First_Deposit = true;
           
            Savings_Account_Balance = 0;
            // thread_stop = false;
            cout << " waiting for set up . . .\n\n";
    }
    void Savings_Account::Set_Account_Part_Two(){
            double Savings_Deposit = 0;
            Savings_Account_Terms_and_Conditions();            // should give error because the member function is being called while the constructor is first begin called
            cout <<"\n Enter amount: $";
            cin >> Savings_Deposit;
            while (Savings_Deposit < 1000 && Savings_Account_First_Deposit == true){
                cout <<" Deposit must be above $1000. . .\n";
                cin >> Savings_Deposit;
            }
            Savings_Account::Client_Account_Deposit_Money(Savings_Deposit);   // implemented    
    }

    // for polymorphism the child function must have the same name as the parent function
    
    
    Savings_Account::Savings_Account(string Username,string Password,long long int Pin){
        this->Savings_Account_Username = Username;
        this->Savings_Account_Password = Password;
        this->Savings_Account_Pin = Pin;
        // Savings_Time_History = new char*[20];
        // Savings_Time_History_Index = 0;
        Savings_Account_Interest_Rate = 1.005; // %05 interest gain every "refresh rate" rate
        // Savings_Account_First_Deposit = true;
        
        // thread_stop = false;

        Savings_Account_Balance = 0;
        // interst rate
    }
    void Savings_Account::Set_Account_Part_Two_Manually(double Savings_Deposit){
        // Savings_Account_Balance += Savings_Deposit;
        Savings_Account::Client_Account_Deposit_Money(Savings_Deposit);
    }
    //  the sleep() from the other thread increments/ticks after the right period of time has passed and would signal the main thread
    //  will share &Time_to_add_interest to the second thread 
    //  the child thread will only increment the original copy of &Time_to_add_interest by 1
    bool Savings_Account::Client_Account_Deposit_Money(double Savings_Deposit){
        bool Savings_Deposit_Status = false;
        if (Savings_Deposit < 1000){
            Savings_Account_Balance += Savings_Deposit; // interest is applied after certain time in the other thread;
            Savings_Deposit_Status = true;
        }
        
        return Savings_Deposit_Status; // should be void?
    }  
    void Savings_Account::Savings_Account_Show_Balance(){
        this_thread::sleep_for(chrono::milliseconds(250)); 
        cout <<"\n\n The savings balance is now $"<<fixed<<setprecision(2)<<this->Savings_Account_Balance<<"\n\n";
    }
    double* Savings_Account::Savings_Account_Return_Balance_Address(){
        return &Savings_Account_Balance;
    }
    void Savings_Account::Savings_Account_Terms_and_Conditions(){
        cout <<"\n This is a type of client account and is a savings account.\n";
        cout <<" Savings account requires the deposition of money > $1000 immediately upon creation. \n";
        cout <<" Interest is added constanstly over a period of time.\n";
    }
    // this function below is important and must be run on another thread right after this saving account is created and initialised
    void Savings_Account::Savings_Account_Add_Interest(double *Savings_Deposit){ // should it pass an array of pointers and reduce the number of threads required when a new class is created
        bool thread_stop = false;
        while (thread_stop == false){
            this_thread::sleep_for(chrono::milliseconds(250)); // every 10 seconds in the thread is equal to like a year or a month . . .
            *Savings_Deposit = (*Savings_Deposit)*(1.0005);
        }
    }
    Savings_Account::~Savings_Account(){

    }

    // bool Savings_Account::Savings_Account_Deposit_Money():Client_Account_Deposit_Money(){  // used for simulation
    //         double saving_deposit = 0;
    //         cout << "\n Enter deposit: \n";
    //         cin >> saving_deposit;
    //         while (ATM_Deposit < 0){
    //             cout <<"\n Error . . .   Re-enter deposit: \n $";
    //             cin >> saving_deposit;
    //             if (saving_deposit > 0){
    //                 break;
    //             }
    //         }
    //         this->Savings_Account_Balance += ATM_Deposit;
    //         cout << Set_Current_Time()<<"   ";
    //         return true;
    // }