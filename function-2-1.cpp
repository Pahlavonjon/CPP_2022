#include <iostream>
#include <new>
#include <array>
#include <string>

using namespace std;

void pointer_printer(){
    int z = 0;
    int *z_pointer = &z;
    cout <<"\n The address of z is: "<<&z<<" \n\n";
    cout <<"\n The address of z is: "<<z_pointer<<" \n\n";
}