#include "Mammal/Lion.h"
#include "Mammal/Whale.h"
#include "Mammal/Platypus.h"

int main() {
    Mammal* lion = new Lion();
    lion->showInformation();
    cout << endl;
    Mammal* whale = new Whale();
    whale->showInformation();
    cout << endl;
    Mammal* platypus = new Platypus();
    platypus->showInformation();
    return 0;
}