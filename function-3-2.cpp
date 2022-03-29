#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

int *reverseArray(int *numbers1,int length){
    int *reverse_array = new int[length];
    int reverse = length -1;
    for (int k = 0; k < length; k++){
        *(reverse_array+k) = *(numbers1+reverse);
        reverse--;
    }
    return reverse_array;
}











