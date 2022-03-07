#include <iostream>

using namespace std;

int sum_elements(int integers[], int length){
    int sum = 0;
    for (int k = 0; k < length; k++){
        sum +=integers[k];
    }
    return sum;
}