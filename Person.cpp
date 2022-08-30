#include "Person.h"

#include <string>

void person::setName(string myName) {
  name = myName;
  return;
}

string person::getName() { return this->name; }

void person::setSalary(int mySalary) {
  salary = mySalary;
  return;
}

int person::getSalary() { return this->salary; }

person::person(int mySalary, string myName) {
  salary = mySalary;
  name = myName;
}
