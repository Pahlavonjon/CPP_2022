#include <iostream>

using namespace std;

extern void print_summed_matrices(int array1[3][3], int array2[3][3]);

int main(){
    int array_A[3][3];
    int array_B[3][3];
    cout <<"\n Enter integers for the first array: \n";
    for (int k = 0; k < 3; k++){
        for (int j = 0; j < 3; j++){
            cout << " Enter integer: ";
            cin >> array_A[k][j];
        }
    }
    cout <<"\n Enter integers for the second array: \n";
    for (int k = 0; k < 3; k++){
        for (int j = 0; j < 3; j++){
            cout << " Enter integer: ";
            cin >> array_B[k][j];
        }
    }
    print_summed_matrices(array_A,array_B);
}