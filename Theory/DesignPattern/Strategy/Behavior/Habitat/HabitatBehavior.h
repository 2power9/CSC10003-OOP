#ifndef CSC10003_OOP_HABITATBEHAVIOR_H
#define CSC10003_OOP_HABITATBEHAVIOR_H

#include <iostream>
#include <cstring>

using namespace std;

class HabitatBehavior {
protected:
    string description;
public:
    HabitatBehavior();
    string getDescription() const;
    virtual ~HabitatBehavior();
};


#endif //CSC10003_OOP_HABITATBEHAVIOR_H
