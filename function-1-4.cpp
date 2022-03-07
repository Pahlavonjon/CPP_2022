#include <iostream>

using namespace std;

void print_scaled_matrix(int array[3][3], int scale){
    for (int k = 0; k < 3; k++){
        for (int j = 0; j < 3; j++){
            array[k][j] = (array[k][j])*(scale);
        }
    }
    for (int k = 0; k < array_length; k++){
        for (int j = 0; j < array_length; j++){
            cout << array[k][j]<<" ";
        }
        cout <<"\n";
    }
}