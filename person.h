#ifndef PERSON_H
#define PERSON_H

#include <string>

using namespace std;

class person{
    private:
        string Name = "";
        int salary = 0;
    public:
        person();
        person(string myName,int Salary); // a name and salary must be provided to create a person
        void setName(string myName);      // change the person's name
        string getName();
        void setSalary(int mySalary);     // change the person's salary
        int getSalary();
};
#endif