#include <iostream>

using namespace std;
// numberis entered from left to right
int binary_to_number(int binary_digits[], int number_of_digits){
  int array_log[30];
  int decimal_number = 0;
  int num_double = 2;
  array_log[29] = 1;

  for (int k = 28; k > -1; k--){
    array_log[k] = num_double;
    num_double = num_double*2;
  }
  for (int k = (30-number_of_digits); k < 30; k++){
    if (binary_digits[k] == 1){
      decimal_number += array_log[k];
    }
  }
  return decimal_number; 
}
