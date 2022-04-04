#include "Platypus.h"

Platypus::Platypus() : Mammal() {
    name = "Platypus";
    givingBirthBehavior = new Oviparous();
    habitatBehavior = new Semiaquatic();
}

void Platypus::showInformation() const {
    Mammal::showInformation();
    cout << "Description: The platypus, sometimes referred to as the duck-billed platypus, is a semiaquatic, " <<
            "egg-laying mammal endemic to eastern Australia, including Tasmania. The platypus is the sole living " <<
            "representative or monotypic taxon of its family and genus, though a number of related species appear " <<
            "in the fossil record.\n";
}

Platypus::~Platypus() = default;
