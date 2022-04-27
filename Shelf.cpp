#include <iostream>
#include <string>
#include "Music_box.h"
#include "Shelf.h"
using namespace std;

        Shelf::Shelf(){
            // current_width_useage = 0;
        }  // default constructor
        Shelf::Shelf(int width){
            Music_Shelf_index = 0;
            current_width_useage = 0;
            length_shelf = width;
            current_number_boxes = 0;
            Music_Shelf = new Music_box[length_shelf];
        }  // constructor for shelf with given width in centimetres

        int Shelf::get_width(){
            return length_shelf;
        }  // returns the width of the shelf in centimetres

        // returns the number of Music boxes currently on the shelf
        int Shelf::get_number_of_music_boxes(){
            return current_number_boxes;
        } 

        // returns a dynamic array of the music boxes currently on the shelf
        Music_box* Shelf::get_contents(){
            return Music_Shelf;
        }

        // returns true and adds music box to shelf if there is sufficient space
        // otherwise returns false
        bool Shelf::add_music_box(Music_box a_music_box){
            if ((current_width_useage+a_music_box.get_width()) < length_shelf){
                int length_box = 0;
                Music_Shelf[Music_Shelf_index] = a_music_box;
                length_box = Music_Shelf[Music_Shelf_index].get_width();
                current_width_useage += length_box;
                Music_Shelf_index++;
                current_number_boxes++;
                return true;
            }
            return false;
        }
        
        Shelf::~Shelf(){

        }