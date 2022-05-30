#ifndef zoo_H
#define zoo_H
#include <iostream>
#include <string>
using namespace std;
class zoo{
    private:
        string name ;                          // the zoo's name
        int number_of_animals ;                // the number of animals in the zoo
        animal **animals ;                      // the zoo's animals
    public:
        zoo(string n,int cows,int lions);      // create a zoo with the given number of cows and lions
        string get_name();
        int get_number_of_animals();
        animal** get_animals();
};
#endif
