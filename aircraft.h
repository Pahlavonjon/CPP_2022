#ifndef AIRCRAFT_H
#define AIRCRAFT_H
#include "person.h"

using namespace std;

class aircraft{
    private:
        int aircraft_capacity;
        person *Aircraft;
        person Pilot;
        person Co_Pilot;
        string Callsign;
    public:
        // a pilot and copilot must be provided when creating an aircraft
        aircraft();
        aircraft(string callsign,person thePilot,person theCoPilot);
        void setPilot(person thePilot);      // change the pilot
        person getPilot();
        void setCoPilot(person theCoPilot);  // change the co-pilot
        person getCoPilot();
        void printDetails();                 // print the callsign, a new line, the pilot name,
                                     // a new line, the co-pilot name and a final newline.
};
#endif
