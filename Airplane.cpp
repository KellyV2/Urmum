#include "Airplane.h"
#include "Person.h"
#include <iostream>

Airplane::Airplane(string callsign, Person thePilot, Person theCoPilot) {
    printDetails();
}

void Airplane::setPilot(Person thePilot) {

}

Person Airplane::getPilot() {

}

void Airplane::setCoPilot(Person theCoPilot) {

}

Person Airplane::getCoPilot() {

}

void Airplane::printDetails() {
    cout << callsign << endl;
    cout << pilotName << endl;
    cout << coPilotName << endl;
}