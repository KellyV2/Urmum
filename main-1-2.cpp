#include <iostream>
#include <string>

#include "Person.h"

using namespace std;

int main() {
  person person1(500, "foo");
  person person2(0, "Valen");
  person person3(500, "Scott");
  person person4(800, "Urmum");

  cout << "Person " << person1.getName() << " has salary " << person1.getSalary() << endl;
  cout << "Person " << person2.getName() << " has salary " << person2.getSalary() << endl;
  cout << "Person " << person3.getName() << " has salary " << person3.getSalary() << endl;
  cout << "Person " << person4.getName() << " has salary " << person4.getSalary() << endl;

  return 0;
}