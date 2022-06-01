#include <iostream>
#include <string>
#include "zoo.h"
using namespace std;

        zoo::zoo(string n,int cows,int lions){
            number_of_animals = abs(cows)+abs(lions);
                this->animals = new animal*[number_of_animals];
                this->animals_index = 0;
                for (int k = 0; k < cows; k++){
                    animals[k] = new vegie("Daisy",100);
                    animals_index++;
                }
                for (int k = cows; k < number_of_animals; k++){
                    animals[k] = new hunter("Clarence",50);
                    animals_index++;
                }
        }     
        bool zoo::add_animal(animal* this_animal){
            if (animals_index <= number_of_animals){
                animals[animals_index] = this_animal;
                animals_index++;
                return true;
            }
            return false;
        }
        string zoo::get_name(){
            return this->name;
        }
        int zoo::get_number_of_animals(){
            return this->animals_index;
        }
        animal** zoo::get_animals(){
            return this->animals;
        }