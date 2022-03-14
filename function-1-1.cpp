#include <iostream>
#include <new>
#include <array>

using namespace std;

void printer(int array[10][10]){
    for (int k = 0; k < 10; k++){
        for (int j = 0; j < 10; j++){
            if (j == 9){
                cout << array[k][j];
            }
            else{
                cout << array[k][j]<<" ";
            }
        }
        cout<<endl;
    }
}