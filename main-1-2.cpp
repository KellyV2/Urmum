#include <iostream>

#include "Person.h"

using namespace std;

int main() {
  Person person1, person2, person3, person4;

  cout << "Person: " << person1.getName() << " has salary " << person1.getSalary() << endl;
  cout << "Person: " << person2.getName() << " has salary " << person2.getSalary() << endl;
  cout << "Person: " << person3.getName() << " has salary " << person3.getSalary() << endl;
  cout << "Person: " << person4.getName() << " has salary " << person4.getSalary() << endl;

  return 0;
}