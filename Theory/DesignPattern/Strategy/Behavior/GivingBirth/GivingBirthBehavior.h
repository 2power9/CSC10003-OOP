#ifndef CSC10003_OOP_GIVINGBIRTHBEHAVIOR_H
#define CSC10003_OOP_GIVINGBIRTHBEHAVIOR_H

#include <iostream>
#include <cstring>

using namespace std;

class GivingBirthBehavior {
protected:
    string description;
public:
    GivingBirthBehavior();
    string getDescription() const;
    virtual ~GivingBirthBehavior();
};


#endif //CSC10003_OOP_GIVINGBIRTHBEHAVIOR_H
