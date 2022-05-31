#ifndef sort_animal_name_H
#define sort_animal_name_H
#include <iostream>
#include <string>
#include <algorithm>
#include "animal.h"
using namespace std;
class sort_by_name{
    public:
        sort_by_name();
        static void sort(animal **animals,int n);
};
#endif