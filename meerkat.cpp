#include "meerkat.h"
#include <string>

using namespace std;

string meerkat::getName(){
    return Name;
}
void meerkat::setName(string meerName){
    Name = meerName;
}
void meerkat::setAge(int meerAge){
    Age = meerAge;
}
int meerkat::getAge(){
    return Age;
}
