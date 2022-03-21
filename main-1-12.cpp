#include <iostream>
#include <string>

using namespace std;

int size_of_variable_star_arr(){
    int* array = new int[5];
    delete[] array;
    array = nullptr;
    return sizeof(int*);

}

int main(){
    int soyze = size_of_variable_star_arr();
    cout <<"\n The size of the pointer is: "<<soyze<<" bytes\n";
}