#include <iostream>
#include <string>
#include <iomanip>
#include <ctime>
#include "Client.h"
#include "Client_Account.h"
// #include "Bank.h"
// #include "Country.h"
// #include "Planet.h"
// #include "ATM.h"
using namespace std;
// transaction account  has transfers and withdrawals the deposit function will not add any interest 
// savings account  // deposit only and will add interest if the balance is over a certain threshold, 2,000 4,000 8,000 20,000
// Term account // deposit function will add higher interest but withdrawal is made only when the term ends.

        Client_Account::Client_Account(){Client_Account_Age = 1;Client_Account_ID = 0;}
        void Client_Account::Set_Account(){ // the terms and conditions can be different
            // string temporary_password = "";
            long long int temporary_pin = 0;
            cout << "\n\n Enter account Username: \n ";
            cin >> this->Client_Account_Username;
            // cout << "\n Enter account Password: \n ";
            // cin >> this->Client_Account_Password;
            // while (temporary_password != Client_Account_Password){
            //     cout << "\n Confirm account password: \n";
            //     cin >> temporary_password;
            // }
            cout << "\n Enter account Pin: \n ";
            cin >> this->Client_Account_Pin;
            while (temporary_pin != Client_Account_Pin){
                cout << "\n Confirm account pin: \n";
                cin >> temporary_pin;
                if (temporary_pin == Client_Account_Pin){
                    break;
                }
            }
            // cout << "\n Enter account Type: savings/other \n ";
            // cin >> this->Client_Account_Type;
            // Time_History = new char*[20];
            // Time_History_Index = 0;
            Client_Account_Balance = 0;
        }
        Client_Account::Client_Account(string Username,string Password,long long int Pin){
            this->Client_Account_Username = Username;
            this->Client_Account_Password = Password;
            this->Client_Account_Pin = Pin;
            // Time_History = new char*[20];
            // Time_History_Index = 0;
            Client_Account_Balance = 0;
        } 
        bool Client_Account::Client_Account_Deposit_Money(double ATM_Deposit){ // the function can add interest to the deposit (savings and term)
            while (ATM_Deposit < 0){
                cout <<"\n Error . . .   Re-enter deposit: \n $";
                cin >> ATM_Deposit;
                if (ATM_Deposit > 0){
                    break;
                }
            }
            this->Client_Account_Balance += ATM_Deposit;
            // cout << Set_Current_Time()<<"   ";
            return true;
        }
        // bool Client_Account::Set_Current_Time(){
        //     Now = time(0);
        //     Current_Time = ctime(&Now);
        //     // Time_History[Time_History_Index] = Current_Time;
        //     // Time_History_Index++;
        //     return true;
        // }
        bool Client_Account::Client_Account_Withdraw_Money(){ // can be changed, the function can give an error if the term is not finished
            double money_to_be_withdrawed = 0;
            cout <<"\n Enter amount to withdraw:  $";
            cin >> money_to_be_withdrawed;
            while ((this->Client_Account_Balance - money_to_be_withdrawed) < 0){
                cout << " Not enough funds . . . try again  $";
                cin >> money_to_be_withdrawed;
            }
            this->Client_Account_Amount_Withdrawn = money_to_be_withdrawed;
            this->Client_Account_Balance -= money_to_be_withdrawed;
            // Set_Current_Time();
            return true;
        }
        void Client_Account::Client_Account_Withdraw_Money_Directly(double money_to_be_withdrawed){ // can be changed, the function can give an error if the term is not finished
            while ((this->Client_Account_Balance - money_to_be_withdrawed) < 0){
                cout << " Not enough funds . . . try again  $";
                cin >> money_to_be_withdrawed;
            }
            this->Client_Account_Balance -= money_to_be_withdrawed;
            // Set_Current_Time();
        }
        // char* Client_Account::Get_That_Time(int That_Transaction){
        //     return Time_History[That_Transaction];
        // }
        void Client_Account::Client_Account_Print_Withdrawal(double Money_Withdrawed){
            cout << "\n\n";
            cout << " Bank Receipt\n\n";
            cout << " Name: "<<this->Client_Account_Username<<"\n";
            cout << " Amount withdrew: $"<<Money_Withdrawed<<"\n\n";
            // cout << " Transaction id: "<< Transaction id<<"\n";
            cout << " Time of withdrewal is: "/*<<Get_That_Time(Time_History_Index-1)*/<<"\n\n\n";
        }
        void Client_Account::Show_Client_Homepage(){ // bpay function disappears
            cout <<"\n\n\n\n\n\n\n\n\n\n";
            cout <<"\n                                                  "/*<<Get_Current_Time()*/<<"\n";
            cout <<"    Welcome "<<this->Client_Account_Username<<"\n\n";
            cout <<"\n\n Your Balance is: $"<<this->Client_Account_Balance<<"\n\n\n\n\n";
            cout <<" Actions:                                          logout\n\n";
            cout <<"  Transactions History\n\n";
            cout <<"  BPay\n\n";
            cout <<"  Withdraw\n\n";
            cout <<"  Deposit\n\n";
            cout <<"  Create different account\n\n\n\n";
        } // must include all user transactions along with the time and the recipient details
        // char* Client_Account::Get_Current_Time(){
        //     time_t Now = time(0);
        //     char* Current_Time = ctime(&Now);
        //     return Current_Time;
        // }
        // bool Client_Account::Client_Account_Log_In(Client* The_User){
        //     string logging_in_username = "";
        //     string logging_in_password = "";
        //     // bool logging_in_username_correct = false;
        //     // bool logging_in_password_correct = false;
        //     cout << "\n\n Enter your username:  ";
        //     cin >> logging_in_username;
        //     cout << "\n\n Enter your password:  ";
        //     cin >> logging_in_password;
        //     for (int r = 0; r < (*(The_User)).Customers[f].Return_Client_Account_Limit(); r++){
        //         if (logging_in_username == All_Client_Accounts[r].Return_Client_Account_Username() && logging_in_password == All_Client_Accounts[r].Return_Client_Account_Password()){
        //             return true;
        //         }
        //     }
        //     return false; 
        // }
        bool Client_Account::Client_Account_Log_Out(){return true;}
        // bool Client_Account::Client_Account_Enter_Pin(){
        //     int loggin_in_pin = 0;
        //     cout << "\n Enter your account pin:  ";
        //     cin >> loggin_in_pin;
        //     for (int k = 0; k < Return_Number_of_Countries(); k++){
        //         for (int g = 0; g < ((Return_Nations_Array_Address())+k).Return_Number_of_Banks(); g++){
        //             for (int f = 0; f < Banks[g].Return_Number_of_Clients(); f++){
        //                 for (int r = 0; r < Customers[f].Return_Client_Account_Limit(); r++){
        //                     if (loggin_in_pin == All_Client_Accounts[r].Return_Client_Account_Pin()){
        //                         return true;
        //                     }
        //                 }
        //             }
        //         }
        //     }
        //     return false;
        // }
        // void Client_Account::Client_Account_Money_Transfer(double Money_Being_Transferred, Country *Recepient_Destination, Country *Sender_Destination, Client_Account *Recipient_Account, Client_Account *Sender_Account){
        // // bool Logged_in = false;
        // // bool Money_Deposit_Status = false;
        // // bool BPay = false;
        // // double Money_Deposit = 0;
        // double Money_Being_Transferred = 0;
        // string Log_in_name = "";
        // string Log_in_password = "";
        // string Repecient_name = "";
        // cout <<"\n\n Enter username";
        // while (Logged_in == false){
        //     cout <<"\n "<<Username<<" enter your password: ";
        //     cin >> Log_in_password;
        //     Logged_in = (*(Account)).Log_in(Username,Log_in_password);
        //     while (Logged_in = true){
        //         (*(Account)).Show_My_Details();
        //         cout <<"\n Deposit money into account: $";
        //         cin >> Money_Deposit;
        //         Money_Deposit_Status = (*(Account)).Create_Account(Money_Deposit);
        //         if (Money_Deposit_Status == true){
        //             while (BPay == false){
        //                 cout <<"\n Enter amount to be transferred: $";
        //                 cin >> Money_BPay;
        //                 BPay = (*(Account)).BPay(Money_BPay,&(*(Receiver)->Return_Object_Address()));
        //                 if (BPay == true){
        //                     cout <<"\n Your transaction is complete . . .\n";
        //                     break;
        //                 }
        //                 else{
        //                     cout <<"\n Your transaction was cancelled!\n";
        //                     break;
        //                 }
        //             }
        //         }
        //         break;
        //     }
        // } 
        // }
        // void Client_Account::Client_Account_Print_Transaction(double Money_Being_Transferred, string Username, Client_Account *Account, Client_Account *Receiver){
        //     cout << "\n\n";
        //     cout << " Bank Receipt\n\n";
        //     cout << " Sender: "<<(*Account).Client_Account_Name<<"\n";
        //     cout << " Recipient: "<<(*Receiver).Client_Account_Name<<"\n";
        //     cout << " Amount paid $"<<Money_Being_Transferred<<"\n\n\n";
        //     cout << " Time of transaction: "<<Client::Get_Current_Time()<<"\n\n\n";
        // }
        string Client_Account::Return_Client_Account_Type(){return this->Client_Account_Type;}
        string Client_Account::Return_Client_Account_Username(){return this->Client_Account_Username;}
        string Client_Account::Return_Client_Account_Password(){return this->Client_Account_Password;}
        int Client_Account::Return_Client_Account_Pin(){return this->Client_Account_Pin;}
        Client_Account* Client_Account::Return_Client_Account_Address(){return this;}
        double Client_Account::Return_Client_Account_Amount_Withrawn(){
            return this->Client_Account_Amount_Withdrawn;
        }
        void Client_Account::Clear_Terminal(){cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";}
        // how to make a new line backwards?
        Client_Account::~Client_Account(){
            Client_Account_Name = "";
            Client_Account_Age = 0;
            Client_Account_ID = 0;
            Client_Account_Type = "";
        }