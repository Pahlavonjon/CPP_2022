#include <iostream>
#include <string>

using namespace std;

extern void cpyda(double *old_array,double *new_array,int length);

int main(){
    int array_length = 0;
    cout <<"\n Enter array_length: ";
    cin >> array_length;
    double *array = new double[array_length];
    double *array_two = new double[array_length];
    for (int h = 0; h < array_length; h++){
        cout<<"\n Enter a number: ";
        cin >> array[h];
    }
    cpyda(array,array_two,array_length);
}