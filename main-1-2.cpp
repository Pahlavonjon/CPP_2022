#include <iostream>
#include <new>
#include <array>
#include <string>

using namespace std;

extern void print_class(string courses[4],string students[], int report_card[][4], int nstudents);

int main(){
    int number_of_students = 0;
    cout <<"\n How many students? ";
    cin >> number_of_students;
    string Courses[4];
    for (int k = 0; k < 4; k++){
        cout <<"\n Enter course name:  ";
        cin >> Courses[k];
    }
    string Students[number_of_students];
    for (int k = 0; k < number_of_students; k++){
        cout <<"\n Enter name:  ";
        cin >> Students[k];
    }
    int Report_Card[number_of_students][4];
    for (int k = 0; k < number_of_students; k++){
        for (int g = 0; g < 4; g++){
            cout <<"\n Enter "<<Courses[g]<<" grade "<<"for "<<Students[k]<<" :  ";
            cin >> Report_Card[k][g];
        }   
    }
    print_class(Courses, Students, Report_Card, number_of_students);

}