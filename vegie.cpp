#include <iostream>
#include <string>
#include "animal.h"
#include "hunter.h"
using namespace std;

        vegie::vegie(string n,int v){
            this->name = n;
            this->volume = v;
            this->favourite_food = "grass";
            this->nextID = 100;
        }     
        string vegie::get_name(){
            return "Safe: "+name;
        } 
        void vegie::set_name(string new_name){
            this->name = new_name;
        }