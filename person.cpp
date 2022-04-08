#include <string>
#include "person.h"

using namespace std;

person::person(){
    
}

person::person(string myName,int Salary){
    Name = myName;
    salary = Salary;
}; // a name and salary must be provided to create a person
void person::setName(string myName){
    Name = myName;
}      // change the person's name
string person::getName(){
    return Name;
}
void person::setSalary(int mySalary){
    salary = mySalary;
}     // change the person's salary
int person::getSalary(){
    return salary;
}