#include <string>
#pragma once

using namespace std;

class Person {
 private:
    string name;
    int salary;

 public:

    Person(int mySalary, string myName);
  void setName(string myName);
  string getName();
  void setSalary(int mySalary);
  int getSalary();
};