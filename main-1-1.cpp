#include <iostream>
#include <new>
#include <array>

using namespace std;

extern void printer(int array[10][10]);

int main(){
    int array[10][10];
    //int incrementor = 1;
    for (int k = 0; k < 10; k++){
        for (int j = 0; j < 10; j++){
            cout <<"\n Enter element: ";
            cin >> array[k][j];
            // array[k][j] = incrementor;
            // incrementor++;
        }
    }
    printer(array);
}