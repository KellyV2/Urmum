#include "Person.h"

void person::setName(string myName) {
    name = myName;
    return;
}

string person::getName() {
    return name;
}

void person::setSalary(int mySalary) {
    salary = mySalary;
    return;
}

int person::getSalary() {
    return salary;
}