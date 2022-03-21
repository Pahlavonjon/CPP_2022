#include <iostream>
#include <string>

using namespace std;

int size_of_variable_star_t(){
    int* function_pointer = new int;
    return sizeof(function_pointer);
}

int main(){
    int soyze = size_of_variable_star_t();
    cout <<"\n The size of the pointer is: "<<soyze<<" bytes\n";
}