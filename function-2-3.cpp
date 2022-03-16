#include <iostream>

using namespace std;

bool is_a_palindrome(int integers[], int length){
  if (length < 1){
    return false;
  }
  else if (length%2 == 0){
    int array_check = 0;
    int decrementor = length-1;
    for (int k = 0; k < (length*0.5); k++){
      if (integers[k] == integers[decrementor]){
        array_check++;
        decrementor--;
        if (array_check == (length*0.5)){
          return true;
        }
      }
    }
    return -2;
  }
  else if (length%2 != 0){
    int array_check = 0;
    int decrementor = length-1;
    int midpoint = ((length*0.5)-0.5);
    for (int k = 0; k < ((length*0.5)-0.5); k++){
      if (integers[k] == integers[decrementor] && integers[midpoint] != integers[k]){ 
        array_check++;
        decrementor--;
        if (array_check == midpoint){
          return true;
        }
      }
    }
    return -2;
  }
  else{
    return -2;
  }
  return -2;
}
int sum_elements(int integers[], int length){
  int sum = 0;
  for (int k = 0; k < length; k++){
    sum += integers[k];
    
  }
  return sum;
}
int sum_if_a_palindrome(int integers[], int length){
  int is_palindrome = is_a_palindrome(integers,length);
  if (is_palindrome == 0){
    return 0;
  }
  else if (is_palindrome == 2){
    return -2;
  }
  else if (is_palindrome == 1){
    int sum_array = sum_elements(integers,length);
    return sum_array;
  }
  return -2;
}
