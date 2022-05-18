#ifndef BANK_H
#define BANK_H
#include <iostream>
#include <string>
#include <iomanip>
#include <ctime>
#include "Client.h"
#include "Client_Account.h"
// #include "Country.h"
// #include "Planet.h"
// #include "ATM.h"
using namespace std;
class Bank{
    private:
        string Bank_Name;
        int Bank_Database_Capacity;
        int Bank_Database_Backup; // all the data must be recovered incase of memory leak
        double Bank_Money_Capacity;
        int Client_Account_Limit; // 2
        
        int Number_of_Customers;
        int Customers_Index;
        
        int Bank_Array_index;
    // protected:
        // Client_Account *ALL_Bank_Clients;
        Client* Customers;
    public:
        Bank();
        Bank(string Name, int Capacity, int Client_Account_Limit);
        bool Add_Client(Client Customer);
        int Return_Number_of_Clients();
        string Return_Bank_Name();
        int Return_Client_Account_Limit();
        Bank* Return_Bank_Address();
        Client* Return_Customers_Array();
        ~Bank();
};
#endif