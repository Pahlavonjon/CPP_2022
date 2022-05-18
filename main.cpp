#include <iostream>
#include <string>
#include <chrono>
#include <thread>
#include <mutex>
#include <iomanip>
#include <ctime>
#include <fstream>
//#include <static>
// #include "Client.h"
#include "Client_Account.h"
#include "Savings_Account.h"
#include "Term_Account.h"
// #include "Term_Account.h"
// #include "Bank.h"
// #include "Country.h"
// #include "Planet.h"
// #include <ctimer>
// #include "ATM.h"
using namespace std;
int main(){

    bool stop_main_thread = false; 
    time_t Now;
    char* Current_Time;
    ofstream Log_File;
    // string Starting_Simulation;
    // cout <<"\n\n";
    // cout <<"\n 1) Debugging";
    // cout <<"\n 2) Simulation\n\n";
    // cin >> Starting_Simulation;
    // if (Starting_Simulation == "debugging" || Starting_Simulation == "Debugging"){
    //     // just pretend the user is depositing real money just pretend // multiplayer // there are bots already constructed
    //     // custom contructor
    //     static Client_Account Person_1("Pahlavon","pahlavon",12345678); // what if the parent var name is the same as the child variable name?
    //     static Savings_Account Person_1_Savings("Pahlavon","pahlavon",12345);
    //     // interaction // or return payment from the client account
    //     // Person_1.Show_Homepage() // interactive 
    //     static Term_Account Person_1_Term("Pahlavon","pahlavon",1234); // time or until a certain deposit limit has reached < $1m 
        
    //     static Client_Account Person_2("Jack","jack",12345678);  
    //     static Savings_Account Person_2_Savings("Jack","jack",12345);
    //     static Term_Account Person_2_Term("Jack","jack",1234);
        
    //     static Client_Account Person_3("James","james",12345678);
    //     static Savings_Account Person_3_Savings("James","james",12345);
    //     static Term_Account Person_3_Term("James","james",1234);
    //     // the user MUST FIRST CREATE a regular account AND THEN create a savings or a term account, the money from the client account MUST be transferred to other accounts.
    //     // put in if statement to prevent the running of other threads if the user does not want to create another account.
    //     /* this thread below must be run only after the account has money!!! */
    //     Person_1_Savings.Set_Account_Part_Two_Manually(900);
    //     thread Time_Thread___Person_1___Savings(Person_1_Savings.Savings_Account_Add_Interest, Person_1_Savings.Savings_Account_Return_Balance_Address());
    //     Person_2_Savings.Set_Account_Part_Two_Manually(800);
    //     thread Time_Thread___Person_2___Savings(Person_2_Savings.Savings_Account_Add_Interest, Person_2_Savings.Savings_Account_Return_Balance_Address());
    //     Person_3_Savings.Set_Account_Part_Two_Manually(700);
    //     thread Time_Thread___Person_3___Savings(Person_3_Savings.Savings_Account_Add_Interest, Person_3_Savings.Savings_Account_Return_Balance_Address());
    //     Person_1_Term.Client_Account_Deposit_Money(500);
    //     thread Time_Thread___Person_1___Term(Person_1_Term.Term_Account_Add_Interest, Person_1_Term.Term_Account_Return_Balance_Address(), Person_1_Term.Term_Account_Return_Account_Lock_Address(), Person_1_Term.Term_Account_Return_Lock_Length(), Person_1_Term.Term_Account_Return_Time_Until_Unlock_Address());
    //     Person_2_Term.Client_Account_Deposit_Money(1500);
    //     thread Time_Thread___Person_2___Term(Person_2_Term.Term_Account_Add_Interest, Person_2_Term.Term_Account_Return_Balance_Address(), Person_2_Term.Term_Account_Return_Account_Lock_Address(), Person_2_Term.Term_Account_Return_Lock_Length(), Person_2_Term.Term_Account_Return_Time_Until_Unlock_Address());
    //     Person_3_Term.Client_Account_Deposit_Money(3000);
    //     thread Time_Thread___Person_3___Term(Person_3_Term.Term_Account_Add_Interest, Person_3_Term.Term_Account_Return_Balance_Address(), Person_3_Term.Term_Account_Return_Account_Lock_Address(), Person_3_Term.Term_Account_Return_Lock_Length(), Person_3_Term.Term_Account_Return_Time_Until_Unlock_Address());                                                                                  
    //     // thread The_Interest_Gain(); // you were trying to add another thread for keep adding the interest to the savings balance
    //     while (stop_main_thread == false){
    //         Person_1_Savings.Savings_Account_Show_Balance();
    //         Person_2_Savings.Savings_Account_Show_Balance();
    //         Person_3_Savings.Savings_Account_Show_Balance();
    //         cout <<"\n\n";
    //         Person_1_Term.Term_Account_Show_Balance();
    //         Person_2_Term.Term_Account_Show_Balance();
    //         Person_3_Term.Term_Account_Show_Balance();
    //     }
    //     Time_Thread___Person_3___Term.join();
    //     Time_Thread___Person_2___Term.join();
    //     Time_Thread___Person_1___Term.join();
    //     Time_Thread___Person_3___Savings.join();
    //     Time_Thread___Person_2___Savings.join();
    //     Time_Thread___Person_1___Savings.join();
    //     }
    // else 
    //if (Starting_Simulation == "simulation" || Starting_Simulation == "Simulation"){
        string User_Response;
        bool Savings_Account_Activation = false;
        bool Term_Account_Activation = false;
        Client_Account Person_1; 
        Person_1.Set_Account();
        string Client_Account_log_in_username = "";
        int Client_Account_log_in_pin = 0;
        Person_1.Clear_Terminal();
        cout <<"\n\n Enter your username \n";
            cin >> Client_Account_log_in_username;
        cout <<"\n\n Enter your pin\n";
            cin >> Client_Account_log_in_pin;
        while (Client_Account_log_in_pin != Person_1.Return_Client_Account_Pin() || Client_Account_log_in_username != Person_1.Return_Client_Account_Username()){
            cout <<"\n\n Invalid username or pin\n";
            cout <<"\n Try again . . .";
                cout <<"\n\n Enter your username \n";
                    cin >> Client_Account_log_in_username;
                cout <<"\n\n Enter your pin\n";
                    cin >> Client_Account_log_in_pin;
        }

        Now = time(0);
        Current_Time = ctime(&Now);
        Log_File.open("Logs.txt");
        Log_File << " Created account at: "<<Current_Time;
        // Log_File.close();
        
        Person_1.Clear_Terminal();

        Person_1.Show_Client_Homepage();
        cout <<"\n\n This account has no funds, enter a deposit\n";
        double Client_Account_First_Deposit = 0;
        cin >> Client_Account_First_Deposit;
        while (Client_Account_First_Deposit < 0 || Client_Account_First_Deposit > 50000){
            while (Client_Account_First_Deposit < 0){
                cout << "\n\n Invalid amount . . . try again\n";
                cin >> Client_Account_First_Deposit;
            }
            while (Client_Account_First_Deposit > 50000){
                cout << "\n\n This is your first deposit and it can not be > 50k . . . try again\n";
                cin >> Client_Account_First_Deposit;
            }
        }
        bool Client_Account_first_ever_deposit = Person_1.Client_Account_Deposit_Money(Client_Account_First_Deposit);

        Person_1.Clear_Terminal();
        Person_1.Show_Client_Homepage();

        cout <<"\n\n Do you also want to create a Savings Account?\n";
        cin >> User_Response;
            if (User_Response == "yes" || User_Response == "Yes" || User_Response == "y"){
                Savings_Account_Activation = true;
                Savings_Account Person_1_Savings;
                // Person_1_Savings.Set........
            }
            cout <<"\n\n Do you also want to create a Term Account?\n";
            cin >> User_Response;
            if (User_Response == "yes" || User_Response == "Yes" || User_Response == "y"){
                Term_Account_Activation = true;
                Term_Account Person_1_Term;
                // Person_1_Term.Set..........
            }
                // if (Savings_Account_Activation == true){
                //     thread Time_Thread___Person_1___Savings(Person_1_Savings.Savings_Account_Add_Interest, Person_1_Savings.Savings_Account_Return_Balance_Address());
                // }
                // if (Term_Account_Activation == true){
                //     thread Time_Thread___Person_1___Term(Person_1_Term.Term_Account_Add_Interest, Person_1_Term.Term_Account_Return_Balance_Address(), Person_1_Term.Term_Account_Return_Account_Lock_Address(), Person_1_Term.Term_Account_Return_Lock_Length(), Person_1_Term.Term_Account_Return_Time_Until_Unlock_Address());
                // }

        while (stop_main_thread == false){
            string User_Interaction = "";
            static Client_Account Person_3("James","james",12345678);
            double Person_3_requirement = 50;
            cout <<"\n\n "<< Person_3.Return_Client_Account_Username()<<" is asking for $"<<fixed<<setprecision(2)<<Person_3_requirement<<", he promises to give you back double (y/n)  \n\n";
            cin >> User_Interaction;
            if (User_Interaction == "y"){
                Person_1.Client_Account_Withdraw_Money_Directly(Person_3_requirement);
            }
            Person_1.Show_Client_Homepage();
            cin >> User_Interaction;
            if (User_Interaction == "logout" || User_Interaction == "out"){
                Now = time(0);
                Current_Time = ctime(&Now);
                // Log_File.open("Logs.txt");
                Log_File << " Signed Out at: "<<Current_Time<<" ";
                Log_File.close();
                break;
            }
        }








        
        // Time_Thread___Person_1___Term.join();   // threads must respond when the user signs out!
        // Time_Thread___Person_1___Savings.join();
        
    //}

    
}