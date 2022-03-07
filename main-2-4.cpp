#include <iostream>

using namespace std;

extern int max_integer(int integers[], int length);
extern int min_integer(int integers[], int length);
extern int sum_min_and_max(int integers[], int length);

int main(){
    int array_length = 0;
    int array_min_max[2];
    int total = 0;
    cout << "\n Enter array length: ";
    cin >> array_length;
    int array[array_length];
    for (int k = 0; k < array_length; k++){
        cout << "\n Enter integer: ";
        cin >> array[k];
    }
    array_min_max[0] = max_integer(array,array_length);
    array_min_max[1] = min_integer(array,array_length);
    total = sum_min_and_max(array_min_max,2);
    cout << "\n The total is: "<<total<<"\n\n";
}