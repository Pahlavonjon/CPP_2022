#include <iostream>
#include <string>
#include <algorithm>
#include "animal.h"
#include "sort_by_animalID.h"
using namespace std;

        sort_by_animalID::sort_by_animalID(){}
        void sort_by_animalID::sort(animal **animals,int n){
            for (int k = 0; k < n-1; k++){
                if ((animals[k]->get_animalID()) > (animals[k+1]->get_animalID())){
                    animal* temporary_animal_bigger = (animals[k]);
                    animal* temporary_animal_smaller = (animals[k+1]);
                    animals[k+1] = temporary_animal_bigger;
                    animals[k] = temporary_animal_smaller;
                }
            }
        }	// sorts the array of n animals into ascending order using their animalIDs