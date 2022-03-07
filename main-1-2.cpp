#include <iostream>

using namespace std;

extern int identity(int array[10][10]);

int main(){
    int array[10][10];
    for (int k = 0; k < 10; k++){
        for (int j = 0; j < 10; j++){
            cout << " Enter integer: ";
            cin >> array[k][j];
        }
    }
    int identity_or_not = identity(array);
    cout << "\n The identity is: "<< identity_or_not<< "\n";
}