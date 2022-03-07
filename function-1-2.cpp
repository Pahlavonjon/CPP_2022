#include <iostream>

using namespace std;

int identity(int array[10][10]){
    int diagonal_summation = 0;
    int zeros = 0;
    for (int k = 0; k < 10; k++){
        for (int j = 0; j < 10; j++){
            if (k == j){
                diagonal_summation++;
            }
            else if (k != j){
                if (array[k][j] == 0){
                    zeros++;
                }
            }
        }
        cout << "\n";
    }
    if (diagonal_summation == 10 && zeros == 90){
        return 1;
    }
    return 0;
}