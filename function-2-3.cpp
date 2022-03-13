#include <iostream>

using namespace std;

int sum_elements(int integers[], int length){
    if (length < 1){
        return -1;
    }
    else {
    int sum = 0;
    for (int k = 0; k < length; k++){
        sum += integers[k];
    }
    return sum;
    }
}

bool is_a_palindrome(int array[],int n){
    if (n < 1){
        //cout << "\n Cannot be a fan array\n\n";
        return -1;
    }
    else if ((n%2) != 0){
    int array_midpoint = ((n)*(0.5))-0.5;
    int array_check = 0;
    bool Fan_Array = false;
    int array_decrementor = (n)-1;
    for (int f = 0; f < array_midpoint; f++){
            if ((array[array_decrementor] == array[f]) && (array[array_midpoint] != array[array_decrementor])){
                array_decrementor--;
                array_check++;
                if (array_check == ((n-1)*0.5)){
                    //cout << "\n This is a fan array\n\n";
                    Fan_Array = true;
                    return true;
                }
            }
        }
        if (Fan_Array == false ) {
            // cout << "\n This is NOT a fan array\n\n";
            return -2;
        }
    }
    else {
    int array_midpoint = ((n)*(0.5));
    int array_check = 0;
    bool Fan_Array = false;
    int array_decrementor = (n)-1;
    for (int f = 0; f < array_midpoint; f++;){ 
        if (array[array_decrementor] == array[f]){
            array_decrementor--;
            array_check++;
            if (array_check == array_midpoint){
                    //cout << "\n This is a fan array\n\n";
                    Fan_Array = true;
                    return true;
            }
        }
    }
    if (Fan_Array == false){
        //cout << "\n This is NOT a fan array\n\n";
        return 0;
    }
    return 0;
    }
    return 0;
}

int sum_if_a_palindrome(int integers[], int length){
    if (length < 1){
        return -1;
    }
    else {
    int palindrome = 0;
    int sum_array_elements = 0;
    palindrome = is_a_palindrome(integers,length);
    //cout <<"\n The palidrome value is: "<<palindrome<<"\n\n";
    if (palindrome != 0 && palindrome == 1){
        sum_array_elements = sum_elements(integers,length);
        return sum_array_elements;
    }
    }
    return -2;
}