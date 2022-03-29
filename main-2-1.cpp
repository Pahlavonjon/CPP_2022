#include <iostream>
#include <string>

using namespace std;

extern void hexDigits(int *numbers,int length);

int main(){
    int array_length = 0;
    cout <<"\n Enter array length: ";
    cin >> array_length;
    int *array = new int [array_length];
    for (int k = 0; k < array_length; k++){
        cout <<"\n Enter number: ";
        cin >> *(array+k);
    }
    hexDigits(array,array_length);
    delete array;

}