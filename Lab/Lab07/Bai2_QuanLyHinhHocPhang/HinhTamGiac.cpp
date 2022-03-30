#include "HinhTamGiac.h"

HinhTamGiac::HinhTamGiac() : HinhHocPhang() {}

double HinhTamGiac::P() {
    return a + b + c;
}

double HinhTamGiac::S() {
    double p = (a + b + c) / 2;
    return sqrt(p * (p - a) * (p - b) * (p - c));
}

void HinhTamGiac::input() {
    cout << "Lan luot nhap 3 canh:";
    cin >> a >> b >> c;
}

void HinhTamGiac::print() const {
    cout << "Tam giac co 3 canh: " << a << " " << b << " " << c << endl;
}

istream &operator>>(istream &in, HinhTamGiac *obj) {
    obj->input();
    return in;
}

ostream &operator<<(ostream &out, const HinhTamGiac *obj) {
    obj->print();
    return out;
}

HinhTamGiac::HinhTamGiac(const double &a, const double &b, const double &c) : HinhHocPhang() {
    this->a = a;
    this->b = b;
    this->c = c;
}

HinhTamGiac::~HinhTamGiac() = default;

