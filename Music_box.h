#ifndef Music_box_H
#define Music_box_H
#include <iostream>
#include <string>
using namespace std;

class Music_box{
    private:
        int size;
        string song_it_plays;
    public:
        Music_box();          // a default constructor 
        Music_box(string songname, int width); // a constructor that takes the song and width as arguments
        string get_song();  // returns the name of the song that the music box plays
        int get_width();    // returns the width in centimetres of the music box
        ~Music_box();       //A default destructor
};
#endif