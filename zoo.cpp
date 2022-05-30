#include <iostream>
#include <string>
#include "zoo.h"
using namespace std;

        zoo::zoo(string n,int cows,int lions){
            number_of_animals = cows+lions;
            this->animals = new animal*[number_of_animals];
            animals[0] = new vegie("Daisy",100);
            animals[1] = new hunter("Clarence",50)
        }     
        string zoo::get_name(){
            return this->name;
        }
        int zoo::get_number_of_animals(){
            return this->number_of_animals;
        }
        animal** zoo::get_animals(){
            return this->animals;
        }