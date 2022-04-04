#ifndef CSC10003_OOP_MAMMAL_H
#define CSC10003_OOP_MAMMAL_H

#include "../Behavior/GivingBirth/Oviparous.h"
#include "../Behavior/GivingBirth/Viviparous.h"

#include "../Behavior/Habitat/Aquatic.h"
#include "../Behavior/Habitat/Semiaquatic.h"
#include "../Behavior/Habitat/Terrestrial.h"


class Mammal {
protected:
    GivingBirthBehavior* givingBirthBehavior;
    HabitatBehavior* habitatBehavior;
    string name;
public:
    Mammal();
    void showGivingBirthBehavior() const;
    void showHabitatBehavior() const;
    virtual void showInformation() const;
    ~Mammal();
};


#endif //CSC10003_OOP_MAMMAL_H
