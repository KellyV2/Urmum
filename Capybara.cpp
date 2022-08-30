#include "Capybara.h"

void Capybara::setName(string capyName) {
    name = capyName;
    return;
}

string Capybara::getName() {
    return name;
}

void Capybara::setAge(int newAge) {
    age = newAge;
    return;
}

int Capybara::getAge() {
    return age;
}