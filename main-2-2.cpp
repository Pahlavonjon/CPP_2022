#include <iostream>

using namespace std;

extern int binary_to_number(int binary_digits[], int number_of_digits);

int main(){
    int array_length = 0;
    cout << "\n Enter array length: ";
    cin >> array_length;
    int array[array_length];
    for (int k = 0; k < array_length; k++){
        cout << "\n Enter integer: ";
        cin >> array[k];
    }
    int integer_number = binary_to_number(array,array_length);
    cout <<"\n\n The binary number you have entered is: "<<integer_number<<"\n\n";

}