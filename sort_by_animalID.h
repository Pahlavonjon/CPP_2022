#ifndef sort_by_animalID_H
#define sort_by_animalID_H
#include <iostream>
#include <string>
#include <algorithm>
#include "animal.h"
using namespace std;
class sort_by_animalID{
    public:  
        sort_by_animalID();
        static void sort(animal **animals,int n);
};
#endif