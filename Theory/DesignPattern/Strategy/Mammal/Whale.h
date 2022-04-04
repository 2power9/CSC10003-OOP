#ifndef CSC10003_OOP_WHALE_H
#define CSC10003_OOP_WHALE_H

#include "Mammal.h"

class Whale : public Mammal {
public:
    Whale();
    void showInformation() const override;
    ~Whale();
};


#endif //CSC10003_OOP_WHALE_H
