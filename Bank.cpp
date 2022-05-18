#include <iostream>
#include <string>
#include <iomanip>
#include <ctime>
#include <cassert>
#include "Client.h"
#include "Client_Account.h"
#include "Bank.h"
#include "Country.h"
#include "Planet.h"
// different types of banks such as european banks and 
// #include "ATM.h"
using namespace std;
// European Bank
// Austr

        Bank::Bank(){}
        Bank::Bank(string Name, int Capacity, int Client_Account_Limit){
            assert(Capacity > 0);
            this->Client_Account_Limit = Client_Account_Limit;
            Bank_Name = Name;
            Customers_Index = 0;
            Number_of_Customers = Capacity;
            Customers = new Client[Number_of_Customers];
        }
        bool Bank::Add_Client(Client Customer){
            if (Customers_Index < Number_of_Customers){
                Customers[Customers_Index] = Customer;
                Customers_Index++;
                return true;
            }
            return false;
        }
        int Bank::Return_Number_of_Clients(){return this->Customers_Index;}
        string Bank::Return_Bank_Name(){return this->Bank_Name;}
        int Bank::Return_Client_Account_Limit(){return this->Client_Account_Limit;}
        Bank* Bank::Return_Bank_Address(){return this;}
        Client* Bank::Return_Customers_Array(){return this->Customers;}
        Bank::~Bank(){}