#include <iostream>
#include <string>

using namespace std;

void cpyda(double *old_array,double *new_array,int length){
    for (int h = 0; h < length; h++){
        *(new_array+h) = *(old_array+h);
    }
}
