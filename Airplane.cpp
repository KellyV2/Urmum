#include "Airplane.h"
#include <iostream>

Airplane::Airplane(string callsign, Person thePilot, Person theCoPilot) : pilot(thePilot), coPilot(theCoPilot) {
    sign = callsign;
}

void Airplane::setPilot(Person thePilot) {
    pilot = thePilot;
}

Person Airplane::getPilot() {
    return pilot;
}

void Airplane::setCoPilot(Person theCoPilot) {
    coPilot = theCoPilot;
}

Person Airplane::getCoPilot() {
    return coPilot;
}

void Airplane::printDetails() {
    cout << sign << endl << pilot.getName() << endl << coPilot.getName() << endl;
}