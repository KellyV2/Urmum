#include "Person.h"
#include <iostream>

using namespace std;

int main() {
    person person1(500, "foo"), person2(0, "Valen"), person3(500, "Scott"), person4(800, "Urmum");

    cout << person1.getName() << person1.getSalary() << endl;
    cout << person2.getName() << person2.getSalary() << endl;
    cout << person3.getName() << person3.getSalary() << endl;
    cout << person4.getName() << person4.getSalary() << endl;

    return 0;
}