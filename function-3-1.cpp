#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

bool equalsArray(int *numbers1,int *numbers2,int length){
    if (length < 0){
        return false;
    }
    else if (length > 0){
    int same_numbers = 0;
    bool same = false;
    for (int k = 0; k < length; k++){
        if (*(numbers1+k) == (*(numbers2+k))){
            same_numbers = same_numbers+1;
            if (same_numbers == length){
                same = true;
            }
        }
    }
    return same;
    }

    return false;
}