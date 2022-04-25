#ifndef MUSICIAN_H
#define MUSICIAN_H
#include <iostream>
#include <string>

using namespace std;

class Musician{
    private:
        string Instrument;
        int Experience;                  
    public:
        // a default constructor 
        // a constructor that takes the instrument played and the years of experience
        Musician();
        Musician(string instrument, int experience);      
        string get_instrument();    // returns the instrument played
        int get_experience();       // returns the number of years experience
        ~Musician();                //A default destructor
};
#endif