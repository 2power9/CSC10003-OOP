#ifndef CSC10003_OOP_TRUNG_H
#define CSC10003_OOP_TRUNG_H

#include "Topping.h"

class Trung : public Topping {
private:
    static long long giaTrung;
    static string tenTopping;
    BanhMi* banhMi;
public:
    Trung();
    explicit Trung(BanhMi& other);
    long long gia() const override;
    void xuat() const override;
    ~Trung() override;
};


#endif //CSC10003_OOP_TRUNG_H
