#include <iostream>
#include <array>

using namespace std;

int max_integer(int integers[], int length){
    if (length < 1){
        return 0;
    }
    else {
    int maximum_value = integers[0];
    for (int k = 0; k < length; k++){
        if (integers[k] > maximum_value){
            maximum_value = integers[k];
        }
    }
    return maximum_value;
    }
}

int min_integer(int integers[], int length){
    if (length < 1){
        return 0;
    }
    else {
    int minimum_value = integers[0];
    for (int k = 0; k < length; k++){
        if (integers[k] < minimum_value){
            minimum_value = integers[k];
        }
    }
    return minimum_value;
    }
}

int sum_min_and_max(int integers[], int length){
    int sum_of_min_and_max = 0;
    sum_of_min_and_max = max_integer(integers,length) + min_integer(integers,length);
    return sum_of_min_and_max;
}