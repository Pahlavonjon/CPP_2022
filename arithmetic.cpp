#include <iostream>
#include <string>

using namespace std;

void binary_operation(int binary_one[30],int binary_two[30],int user_oparation,int length_one,int length_two){
    int binary_result[30] = {0};
    int carry_over[1] = {0};
    int binary_max_length = 0;
        if (user_oparation == 1){
            for (int k = 29; k > -1 ; k--){
                if (carry_over[0] == 1 && binary_one[k] == 1 && binary_two[k] == 1){
                    binary_result[k] = 1;
                    carry_over[0] = 1;
                    binary_max_length++;
                }
                else if (carry_over[0] == 1 && ((binary_one[k] == 1 && binary_two[k] == 0) || (binary_one[k] == 0 && binary_two[k] == 1))){
                    binary_result[k] = 0;
                    carry_over[0] = 1;
                    binary_max_length++;
                }
                else if (binary_one[k] == 1 && binary_two[k] == 1){
                    binary_result[k] = 0;
                    carry_over[0] = 1;
                    binary_max_length++;
                }
                else if (carry_over[0] == 1 && binary_one[k] == 0 && binary_two[k] == 0){
                    binary_result[k] = 1;
                    carry_over[0] = 0;
                    binary_max_length++;
                }
                else if ((binary_one[k] == 1 && binary_two[k] == 0) || (binary_one[k] == 0 && binary_two[k] == 1)){
                    binary_result[k] = 1;
                    carry_over[0] = 0;
                    binary_max_length++;
                }
                else if (carry_over[0] == 0 && binary_one[k] == 0 && binary_two[k] == 0){
                    binary_result[k] = 0;
                    carry_over[0] = 0;
                    //binary_max_length++;
                }
            }
        
            //cout <<"\n\n The max length is: "<<binary_max_length;
            cout <<"\n\n The addition of the binary numbers is:\n";
            for (int k = (30-binary_max_length); k < 30; k++){
                cout <<" "<<binary_result[k];
            }
            cout <<"\n\n";
        }
        else if (user_oparation == 2){
                if (length_one > length_two){
                    for (int k = 29; k > -1 ; k--){
                        if (carry_over[0] == 1 && binary_one[k] == 1 && binary_two[k] == 1){
                            binary_result[k] = 1;
                            carry_over[0] = 1;
                            binary_max_length++;
                        }
                        else if (carry_over[0] == 1 && ((binary_one[k] == 1 && binary_two[k] == 0) || (binary_one[k] == 0 && binary_two[k] == 1))){
                            binary_result[k] = 0;
                            carry_over[0] = 1;
                            binary_max_length++;
                        }
                        else if (binary_one[k] == 1 && binary_two[k] == 1){
                            binary_result[k] = 0;
                            carry_over[0] = 1;
                            binary_max_length++;
                        }
                        else if (carry_over[0] == 1 && binary_one[k] == 0 && binary_two[k] == 0){
                            binary_result[k] = 1;
                            carry_over[0] = 0;
                            binary_max_length++;
                        }
                        else if ((binary_one[k] == 1 && binary_two[k] == 0) || (binary_one[k] == 0 && binary_two[k] == 1)){
                            binary_result[k] = 1;
                            carry_over[0] = 0;
                            binary_max_length++;
                        }
                        else if (carry_over[0] == 0 && binary_one[k] == 0 && binary_two[k] == 0){
                            binary_result[k] = 0;
                            carry_over[0] = 0;
                            //binary_max_length++;
                        }
                    }
        
                    //cout <<"\n\n The max length is: "<<binary_max_length;
                    cout <<"\n\n The subtraction of the binary numbers is:\n";
                    for (int k = (30-binary_max_length); k < 30; k++){
                        cout <<" "<<binary_result[k];
                    }
                    cout <<"\n\n";
                }
                //else if (length_two > length_one){
                    
                //}
                }
                else if (user_oparation == 3){
                    int binary_shift_right_result_one[30] = {0};
                    int binary_shift_right_result_two[30] = {0};
                        for (int k = (30-length_one); k < 29; k++){
                            binary_shift_right_result_one[k+1] = binary_one[k];
                        }
                        for (int k = (30-length_two); k < 29; k++){
                            binary_shift_right_result_two[k+1] = binary_two[k];
                        }
                        cout <<"\n\n The first right shift result is: \n";
                        for (int k = (30-length_one); k < 30; k++){
                            cout <<" "<<binary_shift_right_result_one[k];
                        }
                        cout <<"\n\n The second right shift result is: \n";
                        for (int k = (30-length_two); k < 30; k++){
                            cout <<" "<<binary_shift_right_result_two[k];
                        }
                        cout <<"\n\n";
                }
                else if (user_oparation == 4){
                    int binary_shift_left_result_1[30] = {0};
                    int binary_shift_left_result_2[30] = {0};
                        for (int k = (30-length_one); k < 30; k++){
                            binary_shift_left_result_1[k-1] = binary_one[k];
                        }
                        binary_shift_left_result_1[29] = 0;
                        for (int k = (30-length_two); k < 30; k++){
                            binary_shift_left_result_2[k-1] = binary_two[k];
                        }
                        binary_shift_left_result_2[29] = 0;
                        cout <<"\n\n The first left shift result is: \n";
                        for (int k = (30-length_one-1); k < 30; k++){
                            cout <<" "<<binary_shift_left_result_1[k];
                        }
                        cout <<"\n\n The second left shift result is: \n";
                        for (int k = (30-length_two-1); k < 30; k++){
                            cout <<" "<<binary_shift_left_result_2[k];
                        }
                        cout <<"\n\n";
                }
                else {
                    cout <<"\n\n Invalid operator\n\n";
                }
                
}