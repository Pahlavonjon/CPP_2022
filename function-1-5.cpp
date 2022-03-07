#include <iostream>

using namespace std;

extern void print_summed_matrices(int array1[3][3], int array2[3][3]){
    int arrays_sum[3][3];
    for (int k = 0; k < 4; k++){
        for (int j = 0; j < 4; j++){
            arrays_sum[k][j] = array1[k][j]+array2[k][j];
        }
    }
    for (int k = 0; k < 4; k++){
        for (int j = 0; j < 4; j++){
            cout << arrays_sum<< " ";
        }
        cout <<"\n";
    }
}