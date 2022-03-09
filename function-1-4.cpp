#include <iostream>

using namespace std;

void print_scaled_matrix(int array[3][3], int scale){
    int arrAY[3][3];
    for (int k = 0; k < 3; k++){
        for (int j = 0; j < 3; j++){
            arrAY[k][j] = (array[k][j])*(scale);
        }
    }
    for (int k = 0; k < 3; k++){
        for (int j = 0; j < 3; j++){
            if (j == 2){
                cout << arrAY[k][j];
            }
            else {
            cout << arrAY[k][j]<<" ";
            }
            
        }
        cout <<endl;
    }
}