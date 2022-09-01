#include "Wagon.h"
#include <iostream>

using namespace std;

Wagon::Wagon() {

}

bool Wagon::addCapybara(Capybara newCapy) {
    if (index > 3) {
        return false;
    }
    on_wagon[index] = newCapy;
    index++;
    return true;
}

void Wagon::emptyWagon() {
    index = 0;
    for (int i = 0; i < 4; i++) {
        on_wagon[i] = Capybara();
    }
}

void Wagon::printCapybaras() {
    if (index == 0) {
        return;
    } else {
        for (int i = 0; i < 4; i++) {
            cout << on_wagon[i].getName() << " " << on_wagon[i].getAge() << endl;
        }
    }
}