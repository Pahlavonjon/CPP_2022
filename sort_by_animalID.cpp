#include <iostream>
#include <string>
#include <algorithm>
#include "animal.h"
using namespace std;

class sort_by_animalID{
    public:  
        sort_by_animalID(){}
        static void sort(animal **animals,int n){
            animal* temporary_animal;
            for (int k = 0; k < lenth(animals); k++){
                for (int j = k+1; k < length(animals); j++){
                    if (animals[j]->get_animalID() < animals[k]->get_animalID()){
                        temporary_animal = animals[k];
                        animals[k] = animals[j];
                        animals[j] = temporary_animal;
                    }
                }
            }
        }	// sorts the array of n animals into ascending order using their animalIDs
};