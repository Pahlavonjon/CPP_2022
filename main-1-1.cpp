#include <iostream>
#include <string>
using namespace std;
int add(int lhs, int rhs) {
    return lhs + rhs;
}
int main(){
    for (int f = 1; f < 101; f++){
        for (int g = 1; g < 101; g++){
            if (add(f, g) != (f+g)) {
                cout << "Test "<<f<<" "<<g<<" failed!" <<"\n\n";
            }
        }
    }
}