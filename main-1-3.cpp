#include <iostream>
#include <string>

using namespace std;

extern void cpyia(int old_array[],int new_array[],int length);

int main(){
    int array_length = 0;
    cout <<"\n Enter array_length: ";
    cin >> array_length;
    int array[array_length];
    int array_two[array_length];
    for (int h = 0; h < array_length; h++){
        cout<<"\n Enter a number: ";
        cin >> array[h];
    }
    cpyia(array,array_two,array_length);
}