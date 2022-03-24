#include <iostream>
#include <string>

using namespace std;

extern void copy_2d_strings(string first[][2], string second[][2], int n);

int main(){
    string array[3][2] = {""};
    cout <<"\n";
    for (int h = 0; h < 3; h++){
        for (int g = 0; g < 2; g++){
            cout <<"\n Enter: ";
            cin >> array[h][g];
        }
    }
    string array_copy[3][2];
    copy_2d_strings(array,array_copy,3);


}
