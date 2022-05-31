#include <iostream>
#include <string>
#include "animal.h"
#include "vegie.h"
using namespace std;
        int vegie::nextID = 100;
        vegie::vegie(string n,int v):animal::animal(n,v){
            this->favourite_food = "grass";
            animalID = nextID;
            vegie::nextID++;
        }     
        string vegie::get_name(){
            string new_name = "Safe: "+this->name;
            return new_name;
        } 
        string vegie::get_favourite_food(){
            return this->favourite_food;
        }
        void vegie::set_name(string new_name){
            this->name = new_name;
        }
        void vegie::set_favourite_food(string new_favourite){
            this->favourite_food = new_favourite;
        }