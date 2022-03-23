#include <iostream>
#include <string>
#include <bits/stdc++.h>

using namespace std;

extern int maximum_sum(int *nums,int length);

int main(){
    int array_length = 0;
    int sub_array_addition = 0;
    cout <<"\n Enter array_length: ";
    cin >> array_length;
    int *array = new int[array_length];
    for (int h = 0; h < array_length; h++){
        cout<<"\n Enter a number: ";
        cin >> array[h];
    }
    sub_array_addition = maximum_sum(array,array_length);
    cout <<"\n The addition of the largest possible contiguous array is: "<<sub_array_addition<<"\n\n";

}