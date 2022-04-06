#include <iostream>
#include <string>
#include "person.h"

using namespace std;

int main(){
    person Max("Max",90000), Vincent("Vincent",80000), John("John",60000), Richard("Richard", 120000);
    Max.setName("Max");
    cout <<"\n "<<Max.getName();
    Max.setSalary(90000);
    cout <<" $"<< Max.getSalary();

    Vincent.setName("Vincent");
    cout <<"\n "<<Vincent.getName();
    Vincent.setSalary(80000);
    cout <<" $"<<Vincent.getSalary();

    John.setName("John");
    cout <<"\n "<<John.getName();
    Vincent.setSalary(60000);
    cout <<" $"<<Vincent.getSalary();

    Richard.setName("Richard");
    cout <<"\n "<<Richard.getName();
    Richard.setSalary(120000);
    cout <<" $"<<Richard.getSalary();
    cout <<"\n";

}





