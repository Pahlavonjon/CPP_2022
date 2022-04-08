#include <iostream>
#include <string>
#include "person.h"
#include "aircraft.h"

using namespace std;

int main(){
    person First_Pilot, First_Co_Pilot, Second_Pilot;
    aircraft Qantas = aircraft("Call-Sign",First_Pilot,First_Co_Pilot);

    First_Pilot.setName("Micheal");
    Qantas.setPilot(First_Pilot);
    First_Co_Pilot.setName("George");
    Qantas.setCoPilot(First_Co_Pilot);
    

    cout <<"\n Crew before: \n";
    Qantas.printDetails();

    Second_Pilot.setName("Vincent");
    Qantas.setPilot(Second_Pilot);
    First_Pilot.setName("Micheal");
    Qantas.setCoPilot(First_Pilot);
    
    cout <<"\n Crew after: \n";
    Qantas.printDetails();
}