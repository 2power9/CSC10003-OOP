#include "HinhThangVuong.h"

HinhThangVuong::HinhThangVuong() : HinhHocPhang() {}

double HinhThangVuong::P() {
    return a + b + c + h;
}

double HinhThangVuong::S() {
    return (a + b) * h / 2;;
}

void HinhThangVuong::input() {
    cout << "Nhap 2 canh day:";
    cin >> a >> b;
    cout << "Nhap chieu cao:";
    cin >> h;
    c = sqrt(abs(a - b) * abs(a - b) + h * h);
}

void HinhThangVuong::print() const {
    cout << "Hinh chu nhat co 2 canh day va chieu cao la " << a << ", " << b  << " va " << h << endl;
}

istream &operator>>(istream &in, HinhThangVuong *obj) {
    obj->input();
    return in;
}

ostream &operator<<(ostream &out, const HinhThangVuong *obj) {
    obj->print();
    return out;
}

HinhThangVuong::HinhThangVuong(const double &a, const double &b, const double &h) {
    this->a = a;
    this->b = b;
    this->h = h;
    c = sqrt(abs(a - b) * abs(a - b) + h * h);
}


HinhThangVuong::~HinhThangVuong() = default;
