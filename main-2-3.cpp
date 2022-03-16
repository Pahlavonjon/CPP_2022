#include <iostream>

using namespace std;

extern int sum_elements(int integers[], int length);
extern bool is_a_palindrome(int integers[], int length);
extern int sum_if_a_palindrome(int integers[], int length);

int main(){
  int array_length = 0;
  int array_sum = 0;
  cout <<"\n Enter array length: ";
  cin >> array_length; 
  int array[array_length];
  for (int k = 0; k < array_length; k++){
    cout << "\n Enter a number: ";
    cin >> array[k];
  }
  array_sum = sum_if_a_palindrome(array,array_length);
  cout << "\n The array addition is: "<<array_sum<<"\n";
}
