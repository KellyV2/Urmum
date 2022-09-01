#include <string>
#include "Person.h"
#pragma once

class Airplane {
private:
    Person pilot;
    Person coPilot;
    string sign;
public:
    Airplane(string callsign, Person thePilot, Person theCoPilot);
    void setPilot(Person thePilot);
    Person getPilot();
    void setCoPilot(Person theCoPilot);
    Person getCoPilot();
    void printDetails();
};