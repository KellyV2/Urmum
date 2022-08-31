#include <string>
#include "Person.h"
#pragma once

class Airplane {
private:
    string pilot;
    string coPilot;
public:
    Airplane(string callsign, Person thePilot, Person theCoPilot);
    void setPilot(Person thePilot);
    Person getPilot();
    void setCoPilot(Person theCoPilot);
    Person getCoPilot();
    void printDetails();
};