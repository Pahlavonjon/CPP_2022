#include <iostream>

using namespace std;
// this code only accepts number from left to right

 int binary_to_number(int binary_digits[], int number_of_digits){
    int array_log[number_of_digits];
    array_log[number_of_digits-1] = 1;
    int array_multiplier = 1;
    for (int k = number_of_digits-2; k > -1; k--){
        array_log[k] = (array_multiplier)*(2);
        array_multiplier = array_log[k];
    }
    //cout << "\n The log array is: \n";
    //cout << "\n\n";
    int number = 0;
    for (int k = number_of_digits-1; k > -1; k--){
        if (k == number_of_digits-1 && binary_digits[number_of_digits-1] == 1){
            number = array_log[number_of_digits-1];
        }
        else if (binary_digits[k] == 1){
            number += array_log[k];
        }
    }
    return number;
 }