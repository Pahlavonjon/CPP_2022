#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

extern bool equalsArray(int *numbers1,int *numbers2,int length);

int main(){
    int length_1 = 0;
    int *array_1;
    int *array_2;
    cout <<"\n Enter first array length: ";
    cin >> length_1;
    if (length_1 < 0){
        int length = abs(length_1);
    array_1 = new int[length];
    for (int j = 0; j < length; j++){
        cout <<"\n Enter number: ";
        cin >> *(array_1+j);
    }
    cout<<"\n Second array";
    array_2 = new int[length];
    for (int j = 0; j < length; j++){
        cout <<"\n Enter number: ";
        cin >> *(array_2+j);
    }
}
else {
    array_1 = new int[length_1];
    for (int j = 0; j < length_1; j++){
        cout <<"\n Enter number: ";
        cin >> *(array_1+j);
    }
    cout<<"\n Second array";
    array_2 = new int[length_1];
    for (int j = 0; j < length_1; j++){
        cout <<"\n Enter number: ";
        cin >> *(array_2+j);
    }
}
    int TruE = equalsArray(array_1,array_2,length_1);
    cout <<"\n The result is: "<<TruE<<"\n\n";
    delete[] array_1;
    delete[] array_2;
}
