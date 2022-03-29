#include <iostream>
#include <string>

using namespace std;

extern int *readNumbers();
extern void printNumbers(int *numbers,int length);

int main(){
    int length = 10;
    int *array_pointer = readNumbers();
    printNumbers(array_pointer,length);
    delete array_pointer;
}