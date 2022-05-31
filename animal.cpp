#include <iostream>
#include <string>
#include "animal.h"
using namespace std;
   
        animal::animal(string n, int v){
            this->name = n; 
            this->volume = v; 
            this->animalID = 0;
        }
        int animal::get_animalID(){
            return this->animalID;
        }
        int animal::get_volume(){
            return this->volume;
        }
        animal::~animal(){}

