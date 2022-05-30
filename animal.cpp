#include <iostream>
#include <string>
#include "animal.h"
using namespace std;
        animal::animal(){}
        animal::animal(string n, int v){
            this->name = n; 
            this->volume = v; 
            this->animalID = rand()%53483 + 39847547;
        }
        animal::int get_animalID(){
            return this->animalID;
        }
        animal::int get_volume(){
            return this->volume;
        }
        animal::~animal(){}

