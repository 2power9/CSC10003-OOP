#ifndef CSC10003_OOP_TOPPING_H
#define CSC10003_OOP_TOPPING_H

#include "../BanhMi/BanhMi.h"

class Topping : virtual public BanhMi {
public:
    Topping();
    long long gia() const override = 0;
    void xuat() const override = 0;
    ~Topping() override;
};


#endif //CSC10003_OOP_TOPPING_H
