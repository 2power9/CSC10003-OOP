#include "Mammal.h"

Mammal::Mammal() {
    givingBirthBehavior = nullptr;
    habitatBehavior = nullptr;
}

void Mammal::showGivingBirthBehavior() const {
    cout << "Type of giving birth: " << givingBirthBehavior->getDescription() << endl;
}

void Mammal::showHabitatBehavior() const {
    cout << "Type of habitat: " << habitatBehavior->getDescription() << endl;
}

void Mammal::showInformation() const {
    cout << "Name of animal: " << name << endl;
    showGivingBirthBehavior();
    showHabitatBehavior();
}

Mammal::~Mammal() {
    delete givingBirthBehavior;
    delete habitatBehavior;
}
