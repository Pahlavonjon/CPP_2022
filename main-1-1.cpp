#include <iostream>
#include <array>
using namespace std;

extern void printer(int array[10][10]);
// the binary number is entered from right to left!
int main(){
  int array[10][10];
  int incrementor = 100;
  for (int k = 0; k < 10; k++){
    for (int u = 0; u < 10; u++){
      array[k][u] = incrementor;
      incrementor++;
    }
  }
  printer(array);
}
