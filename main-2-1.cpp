#include <iostream>
#include <string>

using namespace std;

extern void print_as_binary(string decimal_number);

int main(){
    string user_string;
    cout <<"\n Enter a number: \n";
    cin >> user_string;
    print_as_binary(user_string);
   
}
