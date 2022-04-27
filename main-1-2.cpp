#include <iostream>
#include <string>
#include "Music_box.h"
#include "Shelf.h"
using namespace std;

int main(){
    Music_box box_one("Song1",4);
    cout<<"\n\n "<<box_one.get_song()<<"\n\n";
    Music_box box_two("Song2",5);
    Music_box box_three("Song3",6);
    Music_box box_four("Song4",7);

    Shelf Shelf_one(15);
    cout<<"\n\n The result is:\n\n";
    cout<<" "<<Shelf_one.add_music_box(box_one)<<"\n\n";
    cout<<" "<<Shelf_one.add_music_box(box_two)<<"\n\n";
    cout<<" "<<Shelf_one.add_music_box(box_three)<<"\n\n";
    cout<<" "<<Shelf_one.add_music_box(box_four)<<"\n\n";

    Music_box* ALL_Boxes = Shelf_one.get_contents();
    cout <<" "<< ALL_Boxes<<"\n";
    int current_length = Shelf_one.get_number_of_music_boxes();
    for (int k = 0; k < current_length; k++){
        cout <<" "<<ALL_Boxes[k].get_song()<<"\n\n";
    }


}