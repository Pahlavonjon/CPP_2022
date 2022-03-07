#include <iostream>

using namespace std;

extern void print_scaled_matrix(int array[3][3], int scale);

int main(){
    int scale = 0;
    coout <<"\n What should the scaling be? ";
    cin >> scale;
    cout <<"\n";
    int array[4][4];
    for (int k = 0; k < 4; k++){
        for (int j = 0; j < 4; j++){
            cout << " Enter integer: ";
            cin >> array[k][j];
        }
    }
    print_scaled_matrix(array,scale);
}



    
    array_log[0] = 1;
    int array_multiplier = 1;
    for (int k = 1; k < 30; k++){
        array_log[k] = (array_multiplier)*(2);
        array_multiplier = array_log[k];
    }
    int binary = 0
    while (binary == 0){
        for (int u = 0; u < 9; u++){
            array_binary[u] = 1;
            if (array_binary[u] == 1){
                bin_num += array_log[u];
            }
            if (bin_num == user_number){
                break;
            }
        }
    }


    for (int iteration = 0; iteration < 30; iteration++){
        for (int u = 0; u < 30; u++){
            array
        }
    }



    int number = 0;
    for (int k = number_of_digits-1; k > -1; k--){
        if (k == number_of_digits-1 && binary_digits[number_of_digits-1] == 1){
            number = array_log[number_of_digits-1];
        }
        else if (binary_digits[k] == 1){
            number += array_log[k];
        }
    }
}

 int binary_to_number(int binary_digits[], int number_of_digits){
    int array_log[number_of_digits];
    array_log[number_of_digits-1] = 1;
    int array_multiplier = 1;
    for (int k = number_of_digits-2; k > -1; k--){
        array_log[k] = (array_multiplier)*(2);
        array_multiplier = array_log[k];
    }
    cout << "\n The log array is: \n";
    for (int k = 1; k < number_of_digits; k++){
        cout <<" "<<array_log[k];
    }
    cout << "\n\n";
    int number = 0;
    for (int k = number_of_digits-1; k > -1; k--){
        if (k == number_of_digits-1 && binary_digits[number_of_digits-1] == 1){
            number = array_log[number_of_digits-1];
        }
        else if (binary_digits[k] == 1){
            number += array_log[k];
        }
    }
    return number;
 }