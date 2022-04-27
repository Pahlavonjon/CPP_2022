#include <iostream>
#include <string>
#include "Music_box.h"
using namespace std;

int main(){
    Music_box Box_1("Song1",40);
    cout<<" "<<Box_1.get_song()<<"\n\n";
    cout<<" "<<Box_1.get_width()<<"\n\n";

}