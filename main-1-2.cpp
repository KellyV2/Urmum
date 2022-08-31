#include "Person.h"
#include <iostream>

using namespace std;

int main() {
  Person person1(0,"Valen"), person2(500,"Scott"), person3(100,"Foo"), person4(2, "Urmum");

  cout << "Person: " << person1.getName() << " has salary " << person1.getSalary() << endl;
  cout << "Person: " << person2.getName() << " has salary " << person2.getSalary() << endl;
  cout << "Person: " << person3.getName() << " has salary " << person3.getSalary() << endl;
  cout << "Person: " << person4.getName() << " has salary " << person4.getSalary() << endl;

  return 0;
}