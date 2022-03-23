#include <iostream>
#include <string>

using namespace std;

void print_sevens(int *nums,int length){
    for (int h = 0; h < length; h++){
        if ((*(nums+h))%7 == 0){
            cout <<*(nums+h)<<"\n";
        }
    }
}