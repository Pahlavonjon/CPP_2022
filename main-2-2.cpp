#include <iostream>

using namespace std;

extern int binary_to_number(int binary_digits[], int number_of_digits);
// the binary number is entered from right to left!
int main(){
  int array_length = 0;
  int decimal_number = 0;
  cout <<"\n Enter binary length: \n";
  cin >> array_length;
  int array[30];
  for (int k = (30-array_length); k < 30; k++){
    cout <<"\n Enter binary number: \n";
    cin >> array[k];
  }
  decimal_number = binary_to_number(array,array_length);
  cout <<"\n The decimal number is: "<<decimal_number<<"\n\n";
}
