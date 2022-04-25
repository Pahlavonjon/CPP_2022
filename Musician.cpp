#include <iostream>
#include <string>
#include "Musician.h"

using namespace std;

    Musician::Musician(){
        Instrument = "null";
        Experience = 0;
    }
    Musician::Musician(std::string instrument, int experience){
        Instrument = instrument;
        Experience = experience;
    }      
    string Musician::get_instrument(){
        return Instrument;
    }   
    int Musician::get_experience(){
        return Experience;
    }      
    Musician::~Musician(){

    }               

