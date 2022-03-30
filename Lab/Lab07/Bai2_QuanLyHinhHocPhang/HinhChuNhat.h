#ifndef CSC10003_OOP_HINHCHUNHAT_H
#define CSC10003_OOP_HINHCHUNHAT_H

#include "HinhHocPhang.h"

class HinhChuNhat : public HinhHocPhang {
private:
    double a{}, b{};
public:
    HinhChuNhat();
    HinhChuNhat(const double& a, const double& b);
    double P() override;
    double S() override;
    void input() override;
    void print() const override;
    friend istream& operator>>(istream& in, HinhChuNhat* obj);
    friend ostream& operator<<(ostream& out, const HinhChuNhat* obj);
    ~HinhChuNhat() override;
};


#endif //CSC10003_OOP_HINHCHUNHAT_H
