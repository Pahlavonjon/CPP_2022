#include <iostream>
#include <string>

using namespace std;

extern float arithmetic_ops(float left, float right, float (*multiply_op)(float,float));

float multiply_op(float left, float right){
    float multiplication = left*right;
    return multiplication;
}

int main(){
    float num1 = 0;
    cout <<"\n Enter first decimal: ";
    cin >> num1;
    float num2 = 0;
    cout <<"\n Enter second decimal: ";
    cin >> num2;
    cout << "\n "<<arithmetic_ops(num1,num2,&multiply_op)<<"";
}
