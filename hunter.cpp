#include <iostream>
#include <string>
#include "animal.h"
#include "hunter.h"
using namespace std;

        hunter::hunter(string n, int v){
            this->name = n;
            this->volume = v;
            this->kills = 0;
            this->nextID = 1000;
        }
        int hunter::get_kills(){
            return this->kills;
        }
        void hunter::set_kills(int new_kills){
            this->kills = new_kills;
        }
        string hunter::get_name(){
            return "Hunter: "+name;
        }