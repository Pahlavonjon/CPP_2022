#include <iostream>

using namespace std;

void count_numbers(int array[4][4]){
    int zero_count = 0;
    int one_count = 0;
    int two_count = 0;
    int three_count = 0;
    int four_count = 0;
    int five_count = 0;
    int six_count = 0;
    int seven_count = 0;
    int eight_count = 0;
    int nine_count = 0;
    for (int b = 0; b < 4; b++){
        for (int r = 0; r < 4; r++){
            switch (array[b][r]){
                case 0:
                    zero_count++;
                    break;
                case 1:
                    one_count++;
                    break;
                case 2: 
                    two_count++;
                    break;
                case 3:
                    three_count++;
                    break;
                case 4:
                    four_count++;
                    break;
                case 5:
                    five_count++;
                    break;
                case 6:
                    six_count++;
                    break;
                case 7:
                    seven_count++;
                    break;
                case 8:
                    eight_count++;
                    break;
                case 9:
                    nine_count++;
                    break;
            }
        }
    }
    cout <<"0:"<<zero_count<<";1:"<<one_count<<";2:"<<two_count<<";3:"<<three_count<<";4:"<<four_count<<";5:"<<five_count<<";6:"<<six_count<<";7:"<<seven_count<<";8:"<<eight_count<<";9:"<<nine_count<<";";
}