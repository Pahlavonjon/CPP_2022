#include <iostream>
#include <string>

using namespace std;

extern int binary_operation(int binary_one[30],int binary_two[30],int user_oparation,int length_one,int length_two);

int main(){
    //int binary_length = 0;
    int user_oparation;
    int binary_1[30] = {0};
    int binary_2[30] = {0};
    //int binary_3[30];
    int binary_length_1 = 0;
    int binary_length_2 = 0;
    cout << "\n Enter first binary number length: ";
    cin >> binary_length_1;
    cout <<"\n Enter first binary number: from left\n";
        for (int g = (30-binary_length_1); g < 30 ; g++){
            cout <<"\n  Enter number: ";
            cin >> binary_1[g];
        }
    cout << "\n Enter second binary number length: ";
    cin >> binary_length_2;
    cout <<"\n Enter second binary number: from left\n";
        for (int g = (30-binary_length_2); g < 30 ; g++){
            cout <<"\n  Enter number: ";
            cin >> binary_2[g];
        }
    cout <<"\n\n Enter operation: 1 = add, 2 = subtract, 3 = shift right, 4 shift left (both of the arrays will be shifted!)\n";
    cin >> user_oparation;
    binary_operation(binary_1,binary_2,user_oparation,binary_length_1,binary_length_2);

}