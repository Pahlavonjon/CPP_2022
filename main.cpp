#include <iostream>
#include <string>
#include <algorithm>
#include "animal.h"
#include "hunter.h"
#include "vegie.h"
#include "zoo.h"
#include "sort_by_name.h"
#include "sort_by_animalID.h"
using namespace std;

int main(void){
    zoo my_zoo("Adelaide Zoo",0,0);
    vegie* cow = new vegie("Cow",90);
    hunter* wolf = new hunter("Black wolf",80);

    // my_zoo.add_animal(wolf);
    // my_zoo.add_animal(cow);

    animal** total_animals = my_zoo.get_animals();
    cout << "\n\n\n The animals in the zoo is \n\n\n\n";
    for (int k = 0; k < my_zoo.get_number_of_animals(); k++){
        cout << " The name of the animal is: "<<total_animals[k]->get_name()<<" and the volume of this animal is: "<<total_animals[k]->get_volume()<<"\n\n";
    }
    cout << "\n\n";

    cout << "\n The id of wolf is: "<<wolf->get_animalID()<<"\n\n";
    cout << "\n The id of cow is: "<<cow->get_animalID()<<"\n\n";

    sort_by_animalID Sort_IDs;
    Sort_IDs.sort(my_zoo.get_animals(),my_zoo.get_number_of_animals()); // my_zoo.get_number_of_animals()
    cout << "\n\n Sorted by IDs:\n\n";

    for (int k = 0; k < my_zoo.get_number_of_animals(); k++){
        cout << " The name "<<total_animals[k]->get_name()<<" and the ID of this animal is: "<<total_animals[k]->get_animalID()<<"\n\n";
    }
    cout << "\n\n";

    sort_by_name Sort_Names;
    Sort_Names.sort(my_zoo.get_animals(),my_zoo.get_number_of_animals());
    
    cout << "\n\n\n Sorted by names: \n\n";
    for (int k = 0; k < my_zoo.get_number_of_animals(); k++){
        cout << " The name  "<<total_animals[k]->get_name()<<" and the volume of this animal is: "<<total_animals[k]->get_name()<<"\n\n";
    }
    cout << "\n\n";

    cout << "\n\n\n The animals in the zoo is \n\n\n\n";
    for (int k = 0; k < my_zoo.get_number_of_animals(); k++){
        cout << " The name of the animal is: "<<total_animals[k]->get_name()<<" and the volume of this animal is: "<<total_animals[k]->get_volume()<<"\n\n";
    }

    return 0;
}