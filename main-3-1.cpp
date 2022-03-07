#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

extern PC_BYTE();
extern PC_CASE_GEAR();
extern Umart_Croydon();
extern PRINT_INVOICE();

int main(){
    string user_store_selection;
    cout <<"\n Type which store to enter: \n";
    cout <<" PC BYTE\n";
    cout <<" PC CASE GEAR\n";
    cout <<" 3 Umart\n";
    getline(cin,user_store_selection);
    bool store_selection = false;
    while (store_selection == false){
    if (user_store_selection == "PC BYTE"){
        store_selection = true;
        PC_BYTE();
    }
    else if (user_store_selection == "PC CASE GEAR"){
        store_selection = true;
        PC_CASE_GEAR();
    }
    else if (user_store_selection == "Umart"){
        store_selection = true;
        Umart_Croydon();
    }
    else {
        cout <<"\n ERROR 404 STORE NOT FOUND, SELECTED FROM THE FOLLOWING\n";
        getline(cin,user_store_selection);
    }
    }
}