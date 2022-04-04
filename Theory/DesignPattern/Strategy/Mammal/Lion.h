#ifndef CSC10003_OOP_LION_H
#define CSC10003_OOP_LION_H

#include "Mammal.h"

class Lion : public Mammal {
public:
    Lion();
    void showInformation() const override;
    ~Lion();
};


#endif //CSC10003_OOP_LION_H
