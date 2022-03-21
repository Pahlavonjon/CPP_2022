#include <iostream>
#include <string>

using namespace std;

extern float add_op(float left, float right);
extern float subtract_op(float left, float right);
extern float arithmetic_ops(float left, float right,string op);

int main(){
    float num1 = 0;
    cout <<"\n Enter first decimal: ";
    cin >> num1;
    float num2 = 0;
    cout <<"\n Enter second decimal: ";
    cin >> num2;


    string user_selection = "";
    cout <<"\n Do you want to add or subtract? ";
    cin >> user_selection;

    arithmetic_ops(num1,num2,user_selection);
}