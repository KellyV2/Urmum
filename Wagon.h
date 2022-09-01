#include "Capybara.h"
#pragma once

class Wagon {
private:
    Capybara capybara1;
    Capybara capybara2;
    Capybara capybara3;
    Capybara capybara4;
public:
    static bool addCapybara(Capybara newCapy);
    void emptyWagon();
    void printCapybaras();
};