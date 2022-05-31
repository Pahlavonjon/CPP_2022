#include <iostream>
#include <string>
#include "animal.h"
#include "hunter.h"
using namespace std;
        int hunter::nextID = 1000;
        hunter::hunter(string n, int v):animal::animal(n,v){
            this->kills = 0;
            animalID = nextID;
            hunter::nextID++;
        }
        int hunter::get_kills(){
            return this->kills;
        }
        void hunter::set_kills(int new_kills){
            this->kills = new_kills;
        }
        string hunter::get_name(){
            string new_name = "Hunter: "+this->name;
            return new_name;
        }