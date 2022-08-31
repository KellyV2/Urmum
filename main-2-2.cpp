#include "Person.h"
#include "Airplane.h"

int main() {
    string callsign = "MH370";
    Person person1(0, "Valen"), person2(0, "Michael");
    Airplane MH370(callsign, person1, person2);

    return 0;
}