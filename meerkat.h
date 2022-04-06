#ifndef MEERKAT_H
#define MEERKAT_H

#include <string>

using namespace std;

class meerkat{
    private:
        string Name;
        int Age;
    public:                      // no name or age is required to create a meerkat
        void setName(string meerName);   // change the meerkat's name
        string getName();
        void setAge(int meerAge);        // change the meerkat's age
        int getAge();
};
#endif 