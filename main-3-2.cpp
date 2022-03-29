#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

extern int *reverseArray(int *numbers1,int length);
extern int *readNumbers();

int main(){

    int *array = readNumbers();

    int *array_reverse = reverseArray(array,10);
    for (int k = 0; k < 10; k++){
        cout <<" "<<array_reverse[k];
    }
    delete[] array;
    delete[] array_reverse;
}