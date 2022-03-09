#include <iostream>
#include <string>
#include <random>

using namespace std;

void random_binary(){
    for (int g = 0; g < 30; g++){
    int number = 0;
    number = rand();
    int binary_length = 0;
    int binary[30];
    for (int j = 29; j > -1; j--){
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
    cout <<"\n The binary numbers is: \n";
    
        for (int k = (30 - binary_length); k < 30; k++){
            cout <<" "<< binary[k];
        }
    cout<<"\n";
    }
    cout<<"\n\n";
}

int main(){
    random_binary();
}