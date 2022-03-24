#include <iostream>
#include <string>

using namespace std;

extern void print_sevens(int *nums,int length);

int main(){
    int array_length = 0;
    cout <<"\n Enter array_length: ";
    cin >> array_length;
    int *array = new int[array_length];
    for (int h = 0; h < array_length; h++){
        cout<<"\n Enter a number: ";
        cin >> array[h];
    }
    print_sevens(array,array_length);

}