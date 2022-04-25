#include <iostream>
#include <string>
#include "Orchestra.h"
#include "Musician.h"

using namespace std;

    Orchestra::Orchestra(){

    }       
    Orchestra::Orchestra(int size){
        Orchestra_Max_Size = size;
        Musicians_in_the_Orchestra = new Musician[size];
        Current_Orchestra_Size = 0;
        Musician_index = 0;
    }  

    // returns the number of musicians who have joined the orchestra
    int Orchestra::get_current_number_of_members(){
        return Current_Orchestra_Size;
    } 

    // returns true if any musician in the orchestra plays the specified instrument
    // otherwise returns false
    bool Orchestra::has_instrument(string instrument){
        for (int k = 0; k < Orchestra_Max_Size; k++){
            if (instrument == Musicians_in_the_Orchestra[k].get_instrument()){
                return true;
            }
        }
        return false;
    } 

    Musician *Orchestra::get_members(){
        return Musicians_in_the_Orchestra;
    }   

    bool Orchestra::add_musician(Musician new_musician){
        if (Current_Orchestra_Size < Orchestra_Max_Size){
            Musicians_in_the_Orchestra[Musician_index] = new_musician;
            Current_Orchestra_Size++;
            Musician_index++;
            return true;
        }
        return false;
    }

    Orchestra::~Orchestra(){
        // delete Musicians_in_the_Orchestra[];
    }