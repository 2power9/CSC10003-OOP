#include "HinhChuNhat.h"

HinhChuNhat::HinhChuNhat() : HinhHocPhang() {}

double HinhChuNhat::P() {
    return 2 * (a + b);
}

double HinhChuNhat::S() {
    return a * b;
}

void HinhChuNhat::input() {
    cout << "Nhap canh 1:";
    cin >> a;
    cout << "Nhap canh 2:";
    cin >> b;
}

void HinhChuNhat::print() const {
    cout << "Hinh chu nhat co 2 canh dai: " << a << " va " << b << endl;
}

istream &operator>>(istream &in, HinhChuNhat *obj) {
    obj->input();
    return in;
}

ostream &operator<<(ostream &out, const HinhChuNhat *obj) {
    obj->print();
    return out;
}

HinhChuNhat::HinhChuNhat(const double &a, const double &b) : HinhHocPhang() {
 this-> a = a;
 this->b = b;
}

HinhChuNhat::~HinhChuNhat() = default;
