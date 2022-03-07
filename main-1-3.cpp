#include <iostream>

using namespace std;

extern void count_numbers(int array[4][4]);

int main(){
    int array_length = 4;
    int array[4][4];
    for (int k = 0; k < array_length; k++){
        for (int j = 0; j < array_length; j++){
            cout << " Enter integer: ";
            cin >> array[k][j];
        }
    }
    count_numbers(array);
}