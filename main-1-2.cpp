#include <iostream>
#include <string>
#include "Orchestra.h"
#include "Musician.h"

using namespace std;

int main(){
    Orchestra Sydney_Opera_Orchestra(3);
    Musician John("Piano",3);
    Musician Rex("Saxaphone",6);
    Musician Ben("Clarronnet",8);
    Sydney_Opera_Orchestra.add_musician(John);
    Sydney_Opera_Orchestra.add_musician(Rex);
    Sydney_Opera_Orchestra.add_musician(Ben);
    Musician *ALL_Musicians = Sydney_Opera_Orchestra.get_members();
    cout <<"\n\n The Orchestra is: \n\n";
    for (int k = 0; k < 3; k++){
        cout <<" "<<ALL_Musicians[k].get_instrument();
    }
    cout <<"\n\n";
    cout <<" "<<Sydney_Opera_Orchestra.has_instrument("Piano");
    cout <<"\n\n";

}