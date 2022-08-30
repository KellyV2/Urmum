#include "Person.h"
#include <string>

void person::setName(string myName) {
  name = myName;
}

string person::getName() { return this->name; }

void person::setSalary(int mySalary) {
  salary = mySalary;
}

int person::getSalary() { return this->salary; }