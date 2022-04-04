#include "Whale.h"

Whale::Whale() : Mammal() {
    name = "Whale";
    givingBirthBehavior = new Viviparous();
    habitatBehavior = new Aquatic();
}

void Whale::showInformation() const {
    Mammal::showInformation();
    cout << "Description: Whales are a widely distributed and diverse group of fully aquatic placental marine mammals. "
        << "They are an informal grouping within the infraorder Cetacea, which usually excludes dolphins and porpoises.\n";
}

Whale::~Whale() = default;
