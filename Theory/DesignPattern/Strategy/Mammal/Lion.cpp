#include "Lion.h"

Lion::Lion() : Mammal() {
    name = "Lion";
    givingBirthBehavior = new Viviparous();
    habitatBehavior = new Terrestrial();
}

void Lion::showInformation() const {
    Mammal::showInformation();
    cout << "Description: The lion (Panthera leo) is a large cat of the genus Panthera native to Africa and India. "
         << "It has a muscular, deep-chested body, short, rounded head, round ears, and a hairy tuft at the end of its tail.\n";
}

Lion::~Lion() = default;
