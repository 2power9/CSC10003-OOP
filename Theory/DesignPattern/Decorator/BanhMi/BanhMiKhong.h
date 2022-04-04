#ifndef CSC10003_OOP_BANHMIKHONG_H
#define CSC10003_OOP_BANHMIKHONG_H

#include "BanhMi.h"

class BanhMiKhong : public BanhMi {
public:
    BanhMiKhong();
    long long gia() const override;
    void xuat() const override;
    ~BanhMiKhong() override;
};


#endif //CSC10003_OOP_BANHMIKHONG_H
