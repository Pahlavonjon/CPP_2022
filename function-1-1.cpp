#include <iostream>
#include <array>
using namespace std;

void printer(int array[10][10]){
  for (int k = 0; k < 10; k++){
    for (int u = 0; u < 10; u++){
      if (u == 9){
        cout << array[k][u];
      }
      else{
      cout << array[k][u]<<" ";
      }
    }
    cout <<endl;
  }
}
