#include <iostream>
#include <string>
#include "person.h"
#include "aircraft.h"

using namespace std;

int main(){
    string CALL_SIGN;
    cout <<"\n enter call sign:\n";
    cin >>CALL_SIGN;
    person First_Pilot, First_Co_Pilot, Second_Pilot;
    aircraft Qantas = aircraft(CALL_SIGN,First_Pilot,First_Co_Pilot);

    string PILOT_NAME;
    string CO_PILOT_NAME;
    string SECOND_PILOT_NAME;

    cout <<"\n Enter pilot name: \n";
    cin >> PILOT_NAME;
    cout <<"\n Enter co-pilot name: \n";
    cin >> CO_PILOT_NAME;

    First_Pilot.setName(PILOT_NAME);
    Qantas.setPilot(First_Pilot);
    First_Co_Pilot.setName(CO_PILOT_NAME);
    Qantas.setCoPilot(First_Co_Pilot);
    

    cout <<"\n Crew before: \n";
    Qantas.printDetails();

    cout <<"\n Enter second pilot name: \n";
    cin >> SECOND_PILOT_NAME;

    Second_Pilot.setName(SECOND_PILOT_NAME);
    Qantas.setPilot(Second_Pilot);
    First_Pilot.setName(PILOT_NAME);
    Qantas.setCoPilot(First_Pilot);
    
    cout <<"\n Crew after: \n";
    Qantas.printDetails();
}