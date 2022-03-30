#ifndef CSC10003_OOP_HINHTHANGVUONG_H
#define CSC10003_OOP_HINHTHANGVUONG_H

#include "HinhHocPhang.h"

class HinhThangVuong : public HinhHocPhang {
private:
    double a{}, b{}, c{}, h{};
public:
    HinhThangVuong();
    HinhThangVuong(const double& a, const double& b, const double& h);
    double P() override;
    double S() override;
    void input() override;
    void print() const override;
    friend istream& operator>>(istream& in, HinhThangVuong* obj);
    friend ostream& operator<<(ostream& out, const HinhThangVuong* obj);
    ~HinhThangVuong() override;
};


#endif //CSC10003_OOP_HINHTHANGVUONG_H
