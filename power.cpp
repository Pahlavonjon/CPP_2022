#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int number_base = 0;
    cout <<"\n Enter number base: \n";
    cin >> number_base;
    int number_power = 0;
    cout <<"\n Enter number power: \n";
    cin >> number_power;
    long long long long long long long int number_result = 0;
    number_result = pow(number_base,number_power);
    cout <<"\n\n The number is: "<<number_result<<"\n\n";
}