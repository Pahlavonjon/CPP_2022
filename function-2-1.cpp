#include <iostream>
#include <string>

using namespace std;

float add_op(float left, float right){
    float addition = left+right;
    return addition;
}

float subtract_op(float left, float right){
    float subtraction = left-right;
    return subtraction;
}

void arithmetic_ops(float left, float right,string op){
    float addition_subtraction = 0;
    if (op == "+"){
            addition_subtraction = add_op(left,right);
            cout <<"\n The addition of the two decimal numbers is: "<<addition_subtraction<<"\n";
    }
    else if (op == "-"){
            addition_subtraction = subtract_op(left,right);
            cout <<"\n The subtraction of the two decimal numbers is: "<<addition_subtraction<<"\n";
    }
    else {
            cout<<"\n Error invalid operator\n";
    }

}