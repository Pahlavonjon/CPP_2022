#include <iostream>
#include <string>

using namespace std;

void cpyia(int old_array[],int new_array[],int length){
    for (int h = 0; h < length; h++){
        new_array[h] = old_array[h];
    }
}
