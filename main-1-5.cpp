#include <iostream>
#include <string>

using namespace std;

int size_of_variable_star_arr(){
    int* array = new int[5];
    return sizeof(array);
}

int main(){
    int soyze = size_of_variable_star_arr();
    cout <<"\n The size of the array is: "<<soyze*5<<" bytes\n";
}