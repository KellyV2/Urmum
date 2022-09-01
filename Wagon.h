#include "Capybara.h"
#include <iostream>

class Wagon {
private:
    int index = 0;
    Capybara on_wagon[4];
public:
    Wagon();
    bool addCapybara(Capybara newCapy);
    void emptyWagon();
    void printCapybaras();
};