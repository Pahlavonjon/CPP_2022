#include <iostream>
#include <string>

using namespace std;

void copy_2d_strings(string first[][2], string second[][2], int n){
    for (int h = 0; h < n; h++){
        for (int g = 0; g < 2; g++){
            second[h][g] = first[h][g];
        }
    }
}