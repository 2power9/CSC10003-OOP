#include "HinhTron.h"

HinhTron::HinhTron() : HinhHocPhang() {}

double HinhTron::P() {
    return 2*R*3.14;
}

double HinhTron::S() {
    return R*R*3.14;
}

void HinhTron::input() {
    cout << "Nhap ban kinh:";
    cin >> R;
}

void HinhTron::print() const {
    cout << "Hinh tron co ban kinh: " << R << endl;
}

istream &operator>>(istream &in, HinhTron *obj) {
    obj->input();
    return in;
}

ostream &operator<<(ostream &out, const HinhTron *obj) {
    obj->print();
    return out;
}

HinhTron::HinhTron(const double &r) : HinhHocPhang() {
    R = r;
}

HinhTron::~HinhTron() = default;
