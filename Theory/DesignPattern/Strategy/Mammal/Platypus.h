#ifndef CSC10003_OOP_PLATYPUS_H
#define CSC10003_OOP_PLATYPUS_H

#include "Mammal.h"

class Platypus : public Mammal {
public:
    Platypus();
    void showInformation() const override;
    ~Platypus();
};


#endif //CSC10003_OOP_PLATYPUS_H
