#include <iostream>
#include <string>

using namespace std;

int *readNumbers(){
    int *array = new int[10];
    for (int k = 0; k < 10; k++){
        cout <<"\n Enter integer: ";
        cin >> *(array+k);
    }
    return array;
}
void printNumbers(int *numbers,int length){
    if (length > 0){
    for (int k = 0; k < length; k++){
        if (k == length-1){
            cout <<k<<" "<<*(numbers+k);
        }
        else{
            cout <<k<<" "<<*(numbers+k)<<"\n";
        }
    }
    }
}