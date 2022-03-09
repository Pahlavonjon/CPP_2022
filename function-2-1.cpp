#include <iostream>
#include <string>

using namespace std;

void print_as_binary(string decimal_number){
    int user_number = stoi(decimal_number);
    //cout << "\n The number is: "<<user_number<<"\n\n";
    int array_binary[30] = {0};
    int length_array = 0;
    for (int k = 29; k > -1; k--){
        if ((user_number%2) == 0 && user_number != 0){
            array_binary[k] = 0;
            length_array++;
            user_number = (user_number)*(0.5);
        }
        else if ((user_number%2) != 0 && user_number != 0){
            array_binary[k] = 1;
            length_array++;
            user_number = (user_number)*(0.5)-0.5;
        }
    }
    //cout <<"\n The number is: "<<length_array<<" bits long\n";
    //cout<< "\n\n The binary number is: \n";
    for (int k = (30-length_array); k < 30; k++){
        cout<<array_binary[k];
    }
    cout<<endl;
}