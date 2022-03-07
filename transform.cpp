#include <iostream>
#include <string>

using namespace std;

int main(){
    int number = 0;
    cout <<"\n Enter a number: \n";
    cin >> number;
    int binary_length = 0;
    int binary[16];
    for (int j = 15; j > -1; j--){
        if (number%2 == 0 && number != 0){
            binary[j] = 0;
            number = number*0.5;
            binary_length++;
        }
        else if (number%2 != 0 && number != 0){
            binary[j] = 1;
            number = (number*0.5) -0.5;
            binary_length++;
        }
    }
    cout <<"\n The binary number is: \n";
    for (int k = (16 - binary_length); k < 16; k++){
        cout <<" "<< binary[k];
    }
    cout<<"\n\n";
}