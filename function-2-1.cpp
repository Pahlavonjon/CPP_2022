#include <iostream>
#include <string>

using namespace std;

void hexDigits(int *numbers,int length){
    char hex_array[6];
    if (length > 0){

        for (int k = 0; k < 6; k++){
        switch (k){
            case 0:
                *(hex_array+k) = 'A';
                break;
            case 1:
                *(hex_array+k) = 'B';
                break;
            case 2:
                *(hex_array+k) = 'C';
                break;
            case 3:
                *(hex_array+k) = 'D';
                break;
            case 4:
                *(hex_array+k) = 'E';
                break;
            case 5:
                *(hex_array+k) = 'F';
                break;
        }
        // for (int g = 0; g < 6; g++){
        //     cout <<*(hex_array+g);
        // }
        }
    for (int k = 0; k < length; k++){
        if (k == length-1){
            switch (*(numbers+k)){
            case 10:
                cout <<k<<" "<<*(numbers+k)<<" "<<hex_array[0];
                break;
            case 11:
                cout <<k<<" "<<*(numbers+k)<<" "<<hex_array[1];
                break;
            case 12:
                cout <<k<<" "<<*(numbers+k)<<" "<<hex_array[2];
                break;
            case 13:
                cout <<k<<" "<<*(numbers+k)<<" "<<hex_array[3];
                break;
            case 14:
                cout <<k<<" "<<*(numbers+k)<<" "<<hex_array[4];
                break;
            case 15:
                cout <<k<<" "<<*(numbers+k)<<" "<<hex_array[5];
                break;
            default:
                cout <<k<<" "<<*(numbers+k);
            }
        }
        else{
        switch (*(numbers+k)){
            case 10:
                cout <<k<<" "<<*(numbers+k)<<" "<<hex_array[0]<<"\n";
                break;
            case 11:
                cout <<k<<" "<<*(numbers+k)<<" "<<hex_array[1]<<"\n";
                break;
            case 12:
                cout <<k<<" "<<*(numbers+k)<<" "<<hex_array[2]<<"\n";
                break;
            case 13:
                cout <<k<<" "<<*(numbers+k)<<" "<<hex_array[3]<<"\n";
                break;
            case 14:
                cout <<k<<" "<<*(numbers+k)<<" "<<hex_array[4]<<"\n";
                break;
            case 15:
                cout <<k<<" "<<*(numbers+k)<<" "<<hex_array[5]<<"\n";
                break;
            default:
                cout <<k<<" "<<*(numbers+k)<<"\n";
            }
        }
    }
    }
}