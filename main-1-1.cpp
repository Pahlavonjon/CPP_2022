#include <iostream>
#include <string>
#include "Musician.h"

using namespace std;

int main(){
    Musician Odilov("Piano",3);
    cout <<"\n\n Musician plays "<<Odilov.get_instrument()<<" and has a "<<Odilov.get_experience()<<" year experience\n\n";
}