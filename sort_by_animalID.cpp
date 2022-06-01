#include <iostream>
#include <string>
#include <algorithm>
#include <cassert>
#include "animal.h"
#include "sort_by_animalID.h"
using namespace std;

        sort_by_animalID::sort_by_animalID(){}
        void sort_by_animalID::sort(animal **animals,int n){
            for (int k = 0; k < n-1; k++){
                for (int j = 0; j < n-k-1; j++){
                    // assert(animals[k] != nullptr);
                    // assert(animals[k+1] != nullptr);
                    if ((animals[j]->get_animalID()) > (animals[j+1]->get_animalID())){
                        animal* temporary_animal_bigger = (animals[j]);
                        animal* temporary_animal_smaller = (animals[j+1]);
                        animals[j+1] = temporary_animal_bigger;
                        animals[j] = temporary_animal_smaller;
                    }
                }
            }
        }	// sorts the array of n animals into ascending order using their animalIDs