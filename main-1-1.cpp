#include <iostream>

using namespace std;

extern int diagonal(int array[4][4]);

int main(){
    int array_length = 4;
    int array[4][4];
    for (int k = 0; k < array_length; k++){
        for (int j = 0; j < array_length; j++){
            cout << " Enter integer: ";
            cin >> array[k][j];
        }
    }
    int diagonal_addition = diagonal(array);
    cout << "\n The diagonal summation is: "<< diagonal_addition<< "\n";
}