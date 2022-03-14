#include <iostream>
#include <new>
#include <array>
#include <string>

using namespace std;

void print_class(string courses[4],string students[], int report_card[][4], int nstudents){
    cout <<"\n\n\n";
    for (int k = 0; k < nstudents; k++){
        for (int g = 0; g < 4; g++){
            cout <<" "<<students[k]<<" "<<courses[g]<<" "<<report_card[k][g]<<" \n";
        }
        cout <<"\n";   
    }
    cout <<"\n";
}
