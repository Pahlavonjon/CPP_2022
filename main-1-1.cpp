#include <iostream>
#include <string>
#include "meerkat.h"

using namespace std;

int main(){
    meerkat First, Second, Third, Fourth;

    First.setName("Meerkat_1");
    cout <<"\n"<<First.getName();
    First.setAge(10);
    cout <<" "<<First.getAge();

    Second.setName("Meerkat_2");
    cout <<"\n"<<Second.getName();
    Second.setAge(12);
    cout <<" "<<Second.getAge();

    Third.setName("Meerkat_3");
    cout <<"\n"<<Third.getName();
    Third.setAge(14);
    cout <<" "<<Third.getAge();

    Fourth.setName("Meerkat_4");
    cout <<"\n"<<Fourth.getName();
    Fourth.setAge(16);
    cout <<" "<<Fourth.getAge();
    cout <<"\n";


    // string First_name = First.getName();
    // int First_age = First.getAge();
    // cout <<"\n Enter first meerkat name: ";
    // cin >> First_name;
    // cout <<"\n Enter first meerkat age: ";
    // cin >> First_name;

    // string Second_name = Second.getName();
    // int Second_age = Second.getAge();
    // cout <<"\n Enter second meerkat name: ";
    // cin >> Second_name;
    // cout <<"\n Enter second meerkat age: ";
    // cin >> Second_name;

    // string Third_name = Third.getName();
    // int Third_age = Third.getAge();
    // cout <<"\n Enter third meerkat name: ";
    // cin >> Third_name;
    // cout <<"\n Enter third meerkat age: ";
    // cin >> Third_name;

    // string Fourth_name = Fourth.getName();
    // int Fourth_age = Fourth.getAge();
    // cout <<"\n Enter fourth meerkat name: ";
    // cin >> Fourth_name;
    // cout <<"\n Enter fourth meerkat age: ";
    // cin >> Fourth_name;

    // cout <<" The details you have entered is: \n";
    // cout <<" "<<First.getName();
    // cout <<" "<<First.getAge();

}