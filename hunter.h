#ifndef hunter_H
#define hunter_H
#include <iostream>
#include <string>
#include "animal.h"
using namespace std;

class hunter : public animal{
    private:
        int kills;
        static int nextID;
    public:
        hunter(string n, int v);
        int get_kills();
        void set_kills(int new_kills);
        string get_name();
        void set_name(string new_name);

};
#endif