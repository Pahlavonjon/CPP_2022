#include <iostream>

using namespace std;

extern void print_scaled_matrix(int array[3][3], int scale);

int main(){
    int scale = 0;
    cout <<"\n What should the scaling be? ";
    cin >> scale;
    cout <<"\n";
    int array[3][3];
    for (int k = 0; k < 3; k++){
        for (int j = 0; j < 3; j++){
            cout << " Enter integer: ";
            cin >> array[k][j];
        }
    }
    print_scaled_matrix(array,scale);
}