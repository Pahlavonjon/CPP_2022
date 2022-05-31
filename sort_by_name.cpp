#include <iostream>
#include <string>
#include <algorithm>
#include "animal.h"
#include "sort_by_name.h"
using namespace std;

        sort_by_name::sort_by_name(){}
   
        void sort_by_name::sort(animal **animals,int n){
            for (int k = 0; k < n-1; k++){
                if (((animals[k]->get_name())) < ((animals[k+1]->get_name()))){
                    animal* temporary_animal_bigger = (animals[k]);
                    animal* temporary_animal_smaller = (animals[k+1]);
                    animals[k+1] = temporary_animal_bigger;
                    animals[k] = temporary_animal_smaller;
                }
            }
        }
        