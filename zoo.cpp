#include <iostream>
#include <string>
#include "zoo.h"
using namespace std;

        zoo::zoo(string n,int cows,int lions){
            number_of_animals = abs(cows)+abs(lions);
                this->animals = new animal*[number_of_animals];
                this->animals_index = 0;
                animals[0] = new vegie("Daisy",100);
                animals[1] = new hunter("Clarence",50);
                animals[2] = new hunter("testtt",9874);
                this->animals_index = 3;
        
        }     
        // bool zoo::add_animal(animal* this_animal){
        //     if (animals_index <= number_of_animals){
        //         animals[animals_index] = this_animal;
        //         animals_index++;
        //         return true;
        //     }
        //     return false;
        // }
        string zoo::get_name(){
            return this->name;
        }
        int zoo::get_number_of_animals(){
            return this->animals_index;
        }
        animal** zoo::get_animals(){
            return this->animals;
        }