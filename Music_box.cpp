#include <iostream>
#include <string>
#include "Music_box.h"
using namespace std;

    Music_box::Music_box(){
        song_it_plays = "null";
        size = 0;
    }          // a default constructor 
    Music_box::Music_box(string songname, int width){
        this->song_it_plays = songname;
        this->size = width;
    } // a constructor that takes the song and width as arguments
    string Music_box::get_song(){
        return song_it_plays;
    }  // returns the name of the song that the music box plays
    int Music_box::get_width(){
        return size;
    }    // returns the width in centimetres of the music box
    Music_box::~Music_box(){

    }      //A default destructor