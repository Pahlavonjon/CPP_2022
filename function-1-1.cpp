#include <iostream>

using namespace std;

int diagonal(int array[4][4]){
    int diagonal_summation = 0;
    for (int k = 0; k < 4; k++){
        for (int j = 0; j < 4; j++){
            if (k == j){
                diagonal_summation += array[k][j];
            }
        }
    }
    return diagonal_summation;
}