#include <iostream>
#include <string>
#include <bits/stdc++.h>

using namespace std;

 int maximum_sum(int *nums,int length){

    int *sub_array_addition = new int[length*length*length];
    int *sub_array_copy = new int[length*length*length];

    int array_inc = 0;


    int addition_first = 0;
        int incrementor = 0;
        int sub_array_length = 0;


    for (int k = 0; k < length; k++){
    int nums_incrementor = k;
        if (k == 0;){
           for (int h = k; h < length-1; h++){
            for (int g = 0; g < length-1-incrementor){
                addition_first += *(nums+h);
                *(sub_array_copy+array_inc) = *(nums+h);\

                array_inc++;
                sub_array_length++;
                nums_incrementor++;
                incrementor--;
            }
        }
        }
        else {
             for (int h = k; h < length-decrementor; h++){
                decrementor--;
                addition_first += *(nums+h);
                *(sub_array_copy+h) = *(nums+h);
        }
        }


        *(sub_array_additon+k) = addition_first;

    }
    *(sub_array_additon+length-1) = *(nums+length-1);
    int largest sub



}