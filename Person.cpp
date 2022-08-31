#include "Person.h"
#include <iostream>
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
    cout << "Person: " << myName << " has salary " << mySalary << endl;
}