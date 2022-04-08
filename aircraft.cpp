#include <string>
#include <iostream>
#include "aircraft.h"
#include "person.h"

using namespace std;

aircraft::aircraft(){

}

aircraft::aircraft(string callsign,person thePilot,person theCoPilot){
    Callsign = callsign;
    Pilot = thePilot;
    Co_Pilot = theCoPilot;
    aircraft_capacity = 2;
    Aircraft = new person[aircraft_capacity];
    } 
    void aircraft::setPilot(person thePilot){
        // Pilot = thePilot;
        Aircraft[0] = thePilot;
    }      // change the pilot
    
    person aircraft::getPilot(){
            return Aircraft[0];
    }
    
    void aircraft::setCoPilot(person theCoPilot){
        // Co_Pilot = theCoPilot;
        Aircraft[1] = theCoPilot;
    }  // change the co-pilot
    
    person aircraft::getCoPilot(){
        return Aircraft[1];
    }
    
    void aircraft::printDetails(){
        cout <<Callsign<<"\n"<<Aircraft[0].getName();
        cout <<"\n"<<Aircraft[1].getName()<<"\n";
    } 
