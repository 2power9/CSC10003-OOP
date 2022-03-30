#ifndef CSC10003_OOP_HINHTRON_H
#define CSC10003_OOP_HINHTRON_H

#include "HinhHocPhang.h"

class HinhTron : public HinhHocPhang {
private:
    double R{};
public:
    HinhTron();
    HinhTron(const double &r);
    double P() override;
    double S() override;
    void input() override;
    void print() const override;
    friend istream& operator>>(istream& in, HinhTron* obj);
    friend ostream& operator<<(ostream& out, const HinhTron* obj);
    ~HinhTron() override;
};


#endif //CSC10003_OOP_HINHTRON_H
