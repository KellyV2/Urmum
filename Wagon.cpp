#include "Wagon.h"
#include <iostream>

using namespace std;

bool Wagon::addCapybara(Capybara newCapy) {

    return false;
}

void Wagon::emptyWagon() {

}

void Wagon::printCapybaras() {
    cout << capybara1.getName() << endl << capybara1.getAge() << endl;
    cout << capybara2.getName() << endl << capybara2.getAge() << endl;
    cout << capybara3.getName() << endl << capybara3.getAge() << endl;
    cout << capybara4.getName() << endl << capybara4.getAge() << endl;
}
