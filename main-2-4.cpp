#include <iostream>
#include <array>

using namespace std;

extern int max_integer(int integers[], int length);
extern int min_integer(int integers[], int length);
extern int sum_min_and_max(int integers[], int length);

int main(){
    int total = 0;
    int array_length = 0;
    cout << "\n Enter array length: ";
    cin >> array_length;
    int Array[array_length];
    for (int k = 0; k < array_length; k++){
        cout << "\n Enter integer: ";
        cin >> Array[k];
    }
    total = sum_min_and_max(Array,array_length);
    cout << "\n The total is: "<<total<<"\n\n";
}