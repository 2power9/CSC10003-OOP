#ifndef CSC10003_OOP_HINHTAMGIAC_H
#define CSC10003_OOP_HINHTAMGIAC_H

#include "HinhHocPhang.h"

class HinhTamGiac : public HinhHocPhang {
private:
    double a{}, b{}, c{};
public:
    HinhTamGiac();
    HinhTamGiac(const double& a, const double& b, const double& c);
    double P() override;
    double S() override;
    void input() override;
    void print() const override;
    friend istream& operator>>(istream& in, HinhTamGiac* obj);
    friend ostream& operator<<(ostream& out, const HinhTamGiac* obj);
    ~HinhTamGiac() override;
};


#endif //CSC10003_OOP_HINHTAMGIAC_H
