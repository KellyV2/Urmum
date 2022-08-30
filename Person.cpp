#include "Person.h"
#include <string>

void Person::setName(string myName) {
  name = myName;
}

string Person::getName() { return this->name; }

void Person::setSalary(int mySalary) {
  salary = mySalary;
}

int Person::getSalary() { return this->salary; }