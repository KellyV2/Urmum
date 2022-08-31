#include "Person.h"
#include <string>

using namespace std;

void Person::setName(string myName) {
  name = myName;
}

string Person::getName() {
    return name;
}

void Person::setSalary(int mySalary) {
  salary = mySalary;
}

int Person::getSalary() {
    return salary;
}

Person::Person(int mySalary, string myName) : salary() {
    salary = mySalary;
    name = myName;
}