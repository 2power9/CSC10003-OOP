#include "CDonThuc.hpp"

CDonThuc::CDonThuc() {
    heSo = 0;
    soMu = 0;
}

CDonThuc::CDonThuc(const double & heSo, const double & soMu) {
    this->heSo = heSo;
    this->soMu = soMu;
}

double CDonThuc::_heSo_() const {
    return heSo;
}

double CDonThuc::_soMu_() const {
    return soMu;
}

void CDonThuc::ganHeSo(const double & _heSo_) {
    heSo = _heSo_;
}

void CDonThuc::ganSoMu(const double & _soMu_) {
    soMu = _soMu_;
}

double CDonThuc::f(const double &x) const {
    return heSo*pow(x, soMu);
}

CDonThuc CDonThuc::d() const {
    return soMu != 0 ? CDonThuc(heSo*soMu, soMu - 1) : CDonThuc();
}

CDonThuc CDonThuc::operator+(const CDonThuc & rhs) const {
    if (soMu != rhs.soMu) {
        cout <<"Error: Khac so mu";
        exit(EXIT_FAILURE);
    }
    CDonThuc ans = CDonThuc(heSo + rhs.heSo, soMu);
    return ans;
}

CDonThuc CDonThuc::operator-(const CDonThuc &rhs) const {
    if (soMu != rhs.soMu) {
        cout <<"Error: Khac so mu";
        exit(EXIT_FAILURE);
    }
    CDonThuc ans = CDonThuc(heSo - rhs.heSo, soMu);
    return ans;
}

CDonThuc CDonThuc::operator*(const CDonThuc & rhs) const {
    CDonThuc ans = CDonThuc(heSo*rhs.heSo, soMu + rhs.soMu);
    return ans;
}

CDonThuc CDonThuc::operator/(const CDonThuc &rhs) const {
    CDonThuc ans = CDonThuc(heSo/rhs.heSo, soMu - rhs.soMu);
    return ans;
}

istream &operator>>(istream &in, CDonThuc &obj) {
    cout << "Nhap he so: ";
    in >> obj.heSo;
    cout << "Nhap so mu: ";
    in >> obj.soMu;
    return in;
}

ostream &operator<<(ostream &out, const CDonThuc &obj) {
    obj.soMu == 0 ? out << obj.heSo : out << obj.heSo << "x^" << obj.soMu;
    return out;
}

CDonThuc::~CDonThuc() = default;
