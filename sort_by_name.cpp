#include <iostream>
#include <string>
#include <algorithm>
#include <cassert>
#include "animal.h"
#include "sort_by_name.h"
using namespace std;

        sort_by_name::sort_by_name(){}
   
        void sort_by_name::sort(animal **animals,int n){
            for (int k = 0; k < n-1; k++){
                for (int j = 0; j < n-k-1; j++){
                    if (((animals[j]->get_name())) > ((animals[j+1]->get_name()))){
                        animal* temporary_animal_bigger = (animals[j]);
                        animal* temporary_animal_smaller = (animals[j+1]);
                        animals[j+1] = temporary_animal_bigger;
                        animals[j] = temporary_animal_smaller;
                    }
                }
            }
        }
        